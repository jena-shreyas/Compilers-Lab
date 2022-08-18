#include "myl.h"
#include <stdio.h>
#include <stdlib.h>
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

    char buff[BUF_SIZE];
    int idx = 0, len;    // stores no. of characters in input number
    long int number = 0; // stores input number

    __asm__ __volatile__(
        "movl $0, %%eax\n\t"
        "movq $0, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(len)
        : "S"(buff), "d"(BUF_SIZE));

    if (len <= 0)
        return ERR;

    if ((buff[0] != '+') && (buff[0] != '-') && (buff[0] < '0' || buff[0] > '9')) // check for valid first character
        return ERR;

    int sign = (buff[0] == '-') ? -1 : 1;
    idx = (buff[0] == '-' || buff[0] == '+') ? 1 : 0;

    while (idx < len && buff[idx] != '\n')
    {

        if (buff[idx] < '0' || buff[idx] > '9')
            return ERR;

        number = number * 10 + (int)(buff[idx++] - '0') * sign;
        if (number > MAX_INT || number < MIN_INT)
            return ERR;
    }

    *n = (int)number;
    return OK;
}

// function to print integer
int printInt(int n)
{

    char buff[BUF_SIZE];
    int len, start, end;
    char temp;
    len = 0;

    if (n == 0)
        buff[len++] = '0';

    else
    {
        if (n < 0)
        {
            buff[len++] = '-';
            n = -n;
        }
        while (n != 0)
        {
            buff[len++] = n % 10 + '0';
            n /= 10;
        }

        start = (buff[0] == '-') ? 1 : 0;
        end = len - 1;
        while (start < end)
        {

            temp = buff[start];
            buff[start++] = buff[end];
            buff[end--] = temp;
        }
    }

    int chars_printed; // will store no. of chars printed
    // system call to print buff to output terminal
    __asm__ __volatile__(
        "movl $1, %%eax\n\t"
        "movq $1, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(chars_printed)
        : "S"(buff), "d"(len));

    return (chars_printed == len) ? chars_printed : ERR;
}

// function to read float
int readFlt(float *f)
{

    char buff[BUF_SIZE];
    int idx = 0, len;              // stores no. of characters in input float
    int exp = 0, expsign;          // stores integer part of input float
    float res = 0.0, factor = 1.0; // stores fractional part of input float

    __asm__ __volatile__(
        "movl $0, %%eax\n\t"
        "movq $0, %%rdi\n\t"
        "syscall \n\t"
        : "=a"(len)
        : "S"(buff), "d"(BUF_SIZE));

    if (len <= 0)
        return ERR;

    int sign = (buff[0] == '-') ? -1 : 1;
    idx = (buff[0] == '-' || buff[0] == '+') ? 1 : 0;

    while (idx < len && buff[idx] != '\n' && buff[idx] != '.' && buff[idx] != 'e' && buff[idx] != 'E')
    {

        if (buff[idx] < '0' || buff[idx] > '9')
            return ERR;
        res = res * 10 + (float)(buff[idx++] - '0') * sign;
    }

    if (idx < len && buff[idx] == '.')
    {

        idx++;
        while (idx < len && buff[idx] != '\n' && buff[idx] != 'e' && buff[idx] != 'E')
        {

            if (buff[idx] < '0' || buff[idx] > '9')
                return ERR;

            res += (factor / 10) * (float)(buff[idx++] - '0') * sign;
            factor /= 10;
        }
    }

    if (idx < len && buff[idx] == 'e' || buff[idx] == 'E')
    {

        idx++;
        expsign = (buff[idx] == '-') ? -1 : 1;
        idx = (buff[idx] == '-' || buff[idx] == '+') ? ++idx : idx;

        while (idx < len && buff[idx] != '\n')
        {

            if (buff[idx] < '0' || buff[idx] > '9')
                return ERR;
            exp = exp * 10 + (int)(buff[idx++] - '0');
        }
    }

    for (int i = 0; i < exp; i++)
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

    char buff[BUF_SIZE];
    int integer_part = 0, frac_part, idx = 0;
    float frac = 0.0;

    if (f < 0)
        buff[idx++] = '-';

    f = (f < 0) ? -f : f;

    integer_part = (int)f;
    frac = f - integer_part;

    while (integer_part)
    {
        buff[idx++] = integer_part % 10 + '0';
        integer_part /= 10;
    }

    if (idx == 0 || buff[idx - 1] == '-')
        buff[idx++] = '0';

    int front = (buff[0] == '-') ? 1 : 0;
    int end = idx - 1;

    while (front < end)
    {
        char temp = buff[front];
        buff[front++] = buff[end];
        buff[end--] = temp;
    }

    buff[idx++] = '.';

    for (int i = 0; i < FLT_PRECISION; i++)
        frac *= 10;

    frac_part = (int)frac;
    
    idx = idx + FLT_PRECISION - 1;      // since we are considering upto 6 decimal places
    int size = idx + 1;
    int iter = 0;

    while (iter++ < FLT_PRECISION) {       // process the fractional part

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
