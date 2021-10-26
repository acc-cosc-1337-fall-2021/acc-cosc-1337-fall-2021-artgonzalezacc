#include<iostream>
#include<memory>

using std::cout;  using std::unique_ptr; using std::make_unique;

int main() 
{
	int* num = new int(5);//create an int w value 5 on the heap
	cout<<*num<<"\n";
	delete num;
	num = nullptr;

	unique_ptr<int> num1 = make_unique<int>(10);
	cout<<*num1<<"\n";

	
	return 0;
}