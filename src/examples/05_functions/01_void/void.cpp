#include "void.h"

void func_scope()
{
    auto num = 20;
    std::cout<<num<<"\n";
    num++;
    std::cout<<num<<"\n";
}