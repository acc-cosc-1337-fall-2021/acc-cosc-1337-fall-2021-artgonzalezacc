//cpp
#include "arrays_dyn_ch.h"

using std::cin; using std::cout; using std::shared_ptr;

void use_dynamic_char_array(const std::size_t size)
{
    char* name = new char[size];//create dynamic memory
    cout<<"Enter your name: ";//use memory
    cin.getline(name, size);
    cout<<name<<"\n";

    delete[] name;//delete memory
}

char* get_dynamic_char(const std::size_t size)
{
    cout<<"Create memory\n";
    char* char_ptr = new char[size];//create dynamic memory
    return char_ptr;    
}

void delete_dynamic_char(char* array)
{
    cout<<"Deleting memory\n";
    delete[] array;
}

void limit_dynamic_char_scope(std::size_t size)
{
    shared_ptr<char[]> name(get_dynamic_char(size), delete_dynamic_char);//create
    cout<<"Enter name: ";
    cin.getline(name.get(), size);
    cout<<name<<"\n";    
}