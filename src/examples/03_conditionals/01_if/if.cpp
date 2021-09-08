//write include statement for if header
#include "if.h"

bool logical_order_of_precedence(bool bool1, bool bool2, bool bool3)
{
    return !bool1 || bool2 && bool3;
}

//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise
bool is_overtime(double hours)//demonstrates a boolean expression
{
    return hours > 40;
}

bool is_even(int num)
{
    return num % 2 == 0;
}


