#include <stdio.h>
#include "functions.h"

static void staticFunc(void);  //function only accessible from this file

void printVar(void)  //global scope
{
    static float static_LocalFloat = 0; //permanent storage
    static_LocalFloat++;  //increment local static variable. Value persists with each call

    register int register_var = 0; //storage in CPU register
    register_var++; //increment to test. Hint: it's NOT static

    printf("static_LocalFloat inside printVar():%f\n", static_LocalFloat);
    printf("register_var value inside printVar():%d\n", register_var);

    globalFloat++; //increment global variable
    staticFunc();  //to show I can call other functions in the same file

    printf("\n");

}

static void staticFunc(void)
{
    printf("inside staticFunc() \n");
}

extern void nonStaticFunc(void)
{
    printf("inside nonStaticfunc() \n");
}

