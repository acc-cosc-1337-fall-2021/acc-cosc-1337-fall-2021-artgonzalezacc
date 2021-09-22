#include "static.h"

int main()
{
    //two static int cnt is different functions get their own memory address in static memory
    static_var();
    static_var1();
    static_var();
    static_var1();
    static_var();
    static_var1();

    return 0;
}