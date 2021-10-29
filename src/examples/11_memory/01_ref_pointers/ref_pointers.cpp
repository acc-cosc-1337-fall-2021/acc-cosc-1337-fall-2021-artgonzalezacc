#include "ref_pointers.h"

//
void ref_ptr(int& num1, int* num2)
{
    num1 = 100;
    *num2 = 200;//what is happening here!@!!!!!!!
}

