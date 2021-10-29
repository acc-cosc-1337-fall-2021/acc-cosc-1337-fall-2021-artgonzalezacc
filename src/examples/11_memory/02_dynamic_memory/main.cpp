#include<iostream>
#include<memory>
#include "dynamic_memory.h"

using std::cout;  using std::unique_ptr; using std::make_unique;

int main() 
{
	use_dynamic_memory();
	//delete num;
	//num = nullptr;

	unique_ptr<int> num1 = make_unique<int>(10);
	cout<<*num1<<"\n";
	
	
	return 0;
}