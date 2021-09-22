#include "default.h"
#include<iostream>

using std::cout;

int main()
{
    auto pay = get_weekly_pay(40, 10);
    cout<<"Pay: "<<pay<<"\n";

    return 0;
}