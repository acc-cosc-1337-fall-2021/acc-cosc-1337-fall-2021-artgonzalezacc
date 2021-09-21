#include "static.h"

void static_var()
{
    static int cnt = 0;
    std::cout<<"var"<<cnt<<"\n";
    cnt++;
    std::cout<<"var"<<cnt<<"\n";
}

void static_var1()
{
    static int cnt = 0;
    std::cout<<cnt<<"\n";
    cnt++;
    std::cout<<cnt<<"\n";
}