#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

extern float globalFloat;  //explicit declaration of global variable. Tells compiler this variable is defined elsewhere

void printVar(void); //explicit declaration of function defined in another file
extern void nonStaticFunc(void);  //the extern keyword is optional but it indicates to the programmer that this function definition is in another file.


#endif // FUNCTIONS_H_INCLUDED
