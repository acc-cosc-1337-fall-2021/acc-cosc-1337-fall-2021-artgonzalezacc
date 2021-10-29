#include "dynamic_memory.h"
#include<iostream>
//
int* get_dynamic_variable(int n)
{
    return new int(n);//creating dynamic memory
}

void use_dynamic_memory()
{
    //creating dynamic memory(create, use, remove/clear/delete)
	int* num = get_dynamic_variable(100);
	
	std::cout<<*num<<"\n";    
}
