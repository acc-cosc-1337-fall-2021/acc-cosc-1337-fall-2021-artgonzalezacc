#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num = 5; 
	int& num_ref = num;

	cout<<num<<"\n";
	num_ref = 10;
	cout<<num<<"\n";
	cout<<&num<<"\n";

	int* num_ptr = &num;
	cout<<*num_ptr<<"\n";//display the value stored at address pointed to
	cout<<num_ptr<<"\n";//display the address pointing
	cout<<&num_ptr<<"\n";//display the address of the pointer

	num_ptr = 15;//* means dereference the pointer
	cout<<*num_ptr<<"\n";
	cout<<num<<"\n";

	int num1 = 100, num2 = 500;
	num_ptr = &num1;
	cout<<*num_ptr<<"\n";

	num_ptr = &num2;
	cout<<*num_ptr<<"\n";
	
	return 0;
}