
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"  //necessary to "tell" main.c these functions exist. Function declarations. Moreover, main.c doesn't need to "see" the function -
//definitions. it only needs to know these functions exist, not what they do

static double static_GlobalDouble = 50.5;  //only accessible inside this file
float globalFloat = 123.123;  //global scope variable accessible from other files using "extern"
//void printVar(void); //explicit declaration of function defined in another file
//extern void nonStaticFunc(void);  //the extern keyword is optional but it indicates to the programmer that this function definition is in another file.

int main (void)
{


    {
        int blockint = 5;
        printf("blockint inside block is:%d\n", blockint);
    }
    //printf("blockint outside block is:%d", blockint); failed because blockint is outside of scope

    printf("static_GlobalDouble in main: %f\n", static_GlobalDouble);

    for(int i = 0; i < 10; i++)
    {
        printVar(); //modify variables values
        printf("globalFloat in main: %f\n", globalFloat);  //to show that printVar() does modify the global variable
    }

    nonStaticFunc();

    return 0;
}
