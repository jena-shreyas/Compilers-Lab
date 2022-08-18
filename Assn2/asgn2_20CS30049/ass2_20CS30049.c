#include "myl.h"
#define BUF_SIZE 20
#define MAX_INT 2147483647
#define MIN_INT -2147483648
#define FLT_PRECISION 6

// function to print string
int printStr(char *str)
{

    int len = 0;
    while (str[len] != '\0') // continue till the null character is found
        len++;

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(str), "d"(len));
    return len;
}

// function to read integer
int readInt(int *n)
{

    char buff[BUF_SIZE]; // define character buffer
    int idx = 0, len;
    long int number = 0; // stores input number

    __asm__ __volatile__(
        "movl $0, %%eax\n\t"
        "movq $0, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(len)
        : "S"(buff), "d"(BUF_SIZE));

    if (len <= 0)
        return ERR;

    if ((buff[0] != '+') && (buff[0] != '-') && (buff[0] < '0' || buff[0] > '9'))   // check for valid first character, give error if invalid
        return ERR;

    int sign = (buff[0] == '-') ? -1 : 1;       // check for sign
    idx = (buff[0] == '-' || buff[0] == '+') ? 1 : 0;    // if sign present at start, increment index by 1

    while (idx < len && buff[idx] != '\n')
    {

        if (buff[idx] < '0' || buff[idx] > '9')         // check for valid characters, give error if invalid
            return ERR;

        number = number * 10 + (int)(buff[idx++] - '0') * sign;
        if (number > MAX_INT || number < MIN_INT)       // if number out of range, give error
            return ERR;
    }

    *n = (int)number;          // store the read number
    return OK;
}

// function to print integer
int printInt(int n)
{

    char buff[BUF_SIZE];  // define character buffer
    int idx, start, end;
    char temp;
    idx = 0;

    if (n == 0)          // if number = 0, store 0 in buffer
        buff[idx++] = '0';

    else
    {
        if (n < 0)
        {
            buff[idx++] = '-';      // if number is negative, add - sign at start of output
            n = -n;                 
        }
        while (n != 0)
        {
            buff[idx++] = n % 10 + '0';         // add digits to buffer
            n /= 10;
        }

        start = (buff[0] == '-') ? 1 : 0;       // if number has - sign, start from index 1
        end = idx - 1;
        while (start < end)                     // reverse the digits in buffer
        {

            temp = buff[start];
            buff[start++] = buff[end];
            buff[end--] = temp;
        }
    }

    int chars_printed;          // will store no. of chars printed

    __asm__ __volatile__(
        "movl $1, %%eax\n\t"
        "movq $1, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(chars_printed)
        : "S"(buff), "d"(idx));

    return (chars_printed == idx) ? chars_printed : ERR;
}

// function to read float
int readFlt(float *f)
{

    char buff[BUF_SIZE];              // define character buffer
    int idx = 0, len;              
    int exp = 0, expsign;             
    float res = 0.0, factor = 1.0;

    __asm__ __volatile__(
        "movl $0, %%eax\n\t"
        "movq $0, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(len)
        : "S"(buff), "d"(BUF_SIZE));

    if (len <= 0)
        return ERR;

    int sign = (buff[0] == '-') ? -1 : 1;       // store sign
    idx = (buff[0] == '-' || buff[0] == '+') ? 1 : 0;       // if sign present at start, increment index by 1

    // iterate in buffer till end of string or till decimal point or till exponent is found (extract integral part)
    while (idx < len && buff[idx] != '\n' && buff[idx] != '.' && buff[idx] != 'e' && buff[idx] != 'E')
    {

        if (buff[idx] < '0' || buff[idx] > '9')         // in case of invalid character, give error
            return ERR;
        res = res * 10 + (float)(buff[idx++] - '0') * sign;
    }

    if (idx < len && buff[idx] == '.')                  // if decimal point is encountered
    {

        idx++;
        while (idx < len && buff[idx] != '\n' && buff[idx] != 'e' && buff[idx] != 'E')    // while exponent or newline is not reached (extract fractional part)
        {

            if (buff[idx] < '0' || buff[idx] > '9')     // in case of invalid character, give error
                return ERR;

            res += (factor / 10) * (float)(buff[idx++] - '0') * sign;
            factor /= 10;
        }
    }

    if (idx < len && (buff[idx] == 'e' || buff[idx] == 'E'))    // if exponent is encountered
    {

        idx++;
        expsign = (buff[idx] == '-') ? -1 : 1;          // store exponent sign

        if (buff[idx] == '-' || buff[idx] == '+')       // if sign is present, increment index by 1
            idx++;

        while (idx < len && buff[idx] != '\n')          // extract exponent
        {

            if (buff[idx] < '0' || buff[idx] > '9')     // in case of invalid character, give error
                return ERR;
            exp = exp * 10 + (int)(buff[idx++] - '0');
        }
    }

    for (int i = 0; i < exp; i++)                       // scale number by exponent
    {

        if (expsign == -1)
            res /= 10;
        else
            res *= 10;
    }

    *f = res;
    return OK;
}

// function to print float
int printFlt(float f){

    char buff[BUF_SIZE];    // define character buffer
    int integer_part = 0, frac_part, idx = 0;
    float frac = 0.0;

    if (f < 0)
        buff[idx++] = '-';      // if number is negative, add - sign at start of output

    f = (f < 0) ? -f : f;

    integer_part = (int)f;      // store integral part
    frac = f - integer_part;    // store fractional part

    while (integer_part)
    {
        buff[idx++] = integer_part % 10 + '0';      // add digits in integral part to buffer
        integer_part /= 10;
    }

    if (idx == 0 || buff[idx - 1] == '-')           // if integral part is 0, add 0 to buffer
        buff[idx++] = '0';

    int front = (buff[0] == '-') ? 1 : 0;           // if number has - sign, start from index 1
    int end = idx - 1;

    while (front < end)                             // reverse integral digits in buffer
    {
        char temp = buff[front];
        buff[front++] = buff[end];
        buff[end--] = temp;
    }

    buff[idx++] = '.';                    // add decimal point to buffer

    for (int i = 0; i < FLT_PRECISION; i++)   // convert fractional part to integer by scaling in order to extract its digits
        frac *= 10;

    frac_part = (int)frac;
    
    idx = idx + FLT_PRECISION - 1;      // since we are considering upto 6 decimal places
    int size = idx + 1;
    int iter = 0;

    while (iter++ < FLT_PRECISION) {       // add fractional part digits to buffer

        buff[idx--] = '0' + (frac_part % 10);
        frac_part /= 10;
    }

    int chars_printed; // will store no. of chars printed
    __asm__ __volatile__ (
        "movl $1, %%eax\n\t"
        "movq $1, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(chars_printed)
        : "S"(buff), "d"(size)
    );

    return (chars_printed == size) ? chars_printed : ERR;
}
