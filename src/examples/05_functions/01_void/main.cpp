#include "void.h"

//create global variable
int num = 5;

using std::cout;

int main()
{
    //cout<<"Global num value: "<<num<<"\n";

    //int num = 10;
    //cout<<"Main num value: "<<num<<"\n";

    func_scope();
    func_scope();

    return 0;
}