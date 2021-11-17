#include "arrays_dyn_1.h"

using std::cout;

void use_dynamic_memory(int num)//in a perfect world
{
    int* num_ptr = new int(num);//create dynamic memory
    cout<<*num_ptr<<"\n";//use the memory
    delete num_ptr;//delete the memory
    num_ptr = nullptr;
}

int* return_dynamic_memory(int num)//users of this class are responsible for deleting memory
{
    int* num_ptr = new int(num);
    return num_ptr;
}

int* get_dynamic_array(const int size)
{   
    int* num_ptr = new int[size];
    cout<<"Creating dynamic array "<<num_ptr<<"\n";
    return num_ptr;//create and return dynamic array
}

void delete_dynamic_array(int* array)
{
    cout<<"Deleting dynamic array "<<array<<"\n";
    delete[] array;
}

void use_dynamic_array(const int size)
{
    std::shared_ptr<int[]>nums(get_dynamic_array(size), delete_dynamic_array);

    for(int i=0; i < size; ++i)
    {
        cout<<nums[i]<<"\n";
    }

    cout<<"Exiting use dynamic array function\n";
}