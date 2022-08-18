#include "myl.h"

int main()
{

    printStr("\n**** Test for printStr ****\n");

    printStr("\nTest #1 : ");
    printStr("\n\nPrinting a non-empty string ...\n");
    char* s1 = "Hello world!";
    int len_s1 = printStr(s1);
    printStr("\nNo. of characters printed : ");
    printInt(len_s1);

    printStr("\n\nTest #2 : ");
    printStr("\n\nPrinting an empty string ...\n");
    char* s2 = "";
    int len_s2 = printStr(s2);
    printStr("\nNo. of printed characters : ");
    printInt(len_s2);


    printStr("\n\n**** Test for printInt ****\n");

    printStr("\nTest #1 : ");
    printStr("\n\nPrinting a positive integer ...\n");
    int n1 = 6246337;
    int len_n1 = printInt(n1);
    printStr("\nNo. of printed characters : ");
    printInt(len_n1);

    printStr("\n\nTest #2 : ");
    printStr("\n\nPrinting a negative integer ...\n");
    int n2 = -2093512;
    int len_n2 = printInt(n2);
    printStr("\nNo. of printed characters : ");
    printInt(len_n2);

    printStr("\n\n******* Test for printFlt *******\n");

    printStr("\nTest #1 : ");
    float f1 = 123.258367;
    int len_f1 = printFlt(f1);
    printStr("\nNo. of printed characters : ");
    printInt(len_f1);

    printStr("\n\nTest #2 : ");
    float f2 = -0.00262;
    int len_f2 = printFlt(f2);
    printStr("\nNo. of printed characters : ");
    printInt(len_f2);

    printStr("\n\n**** Test for readInt ****\n");

    printStr("\nEnter 1st integer : ");
    int num1;
    int status1 = readInt(&num1);

    if(status1 == ERR)
        printStr("Entered integer is not valid, please try again!\n");
    else {

        printStr("\nThe entered integer is : ");
        printInt(num1);
    }

    printStr("\n\nEnter 2nd integer : ");
    int num2;
    int status2 = readInt(&num2);

    if(status2 == ERR)
        printStr("Entered integer is not valid, please try again!\n");
    else {

        printStr("\nThe entered integer is : ");
        printInt(num2);
    }

    printStr("\n\n**** Test for readFlt ****\n");
    
    printStr("\nEnter 1st float : ");
    float fl1;
    int status3 = readFlt(&fl1);

    if(status3 == ERR)
        printStr("Entered float is not valid, please try again!\n");

    else {
        printStr("\nThe entered float is : ");
        printFlt(fl1);
    }

    printStr("\n\nEnter 2nd float : ");
    float fl2;
    int status4 = readFlt(&fl2);

    if(status4 == ERR)
        printStr("Entered float is not valid, please try again!\n");
    else {
        printStr("\nThe entered float is : ");
        printFlt(fl2);
    }
    printStr("\n");

}