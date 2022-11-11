/*
    Compilers Lab Assignment - 6
    Group Members :-
        Pranav Nyati - 20CS30037
        Shreyas Jena - 20CS30049
*/

// TEST FILE - 2

// helper functions to read an integer from user, print and integer and print a string
int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

// global variables
int TWO = 2;

int main() {

    int i, c;

    // ptr declarations
    int *ptr;
    float *ptr_2;
    
    char ch = 'a';

    int a, b;
    int err;

    printStr('Enter the value of a: \n');
    a = readInt(&err);
    printStr('Enter the value of b: \n');
    b = readInt(&err);

    printStr('The value of a is: ');
    printInt(a);
    printStr('\n');
    printStr('The value of b is: ');
    printInt(b);
    printStr('\n');

    int p, q, r, s, t, u, v;

    p = a + (b*TWO);
    q = a - (b*TWO);
    r = a * (b + TWO);
    s = (a + TWO)/b;
    t = (a + TWO)%b;

    printStr('The value of p is: (a + (b * 2)) = ');
    printInt(p);
    printStr('\n');
    printStr('The value of q is: (a - (b * 2)) = ');
    printInt(q);
    printStr('\n');
    printStr('The value of r is: (a * (b + 2)) = ');
    printInt(r);
    printStr('\n');
    printStr('The value of s is: ((a + 2) / b) = ');
    printInt(s);
    printStr('\n');
    printStr('The value of t is: ((a + 2) % b) = ');
    printInt(t);
    printStr('\n');

    u = p*q + q/p;
    v = r*s + s/r;
    
    printStr('The value of u is: (p * q + q / p) = ');
    printInt(u);
    printStr('\n');
    printStr('The value of v is: (r * s + s / r) = ');
    printInt(v);
    printStr('\n');

    printStr("TEST 2 COMPLETED\n");
    
    return 0;
}
