//cpp
#include "arrays_char.h"

using std::cout; using std::string;

void use_char_terminated()
{
    const int SIZE = 4;
    char name[SIZE];//STACK array
    name[0] = 'j';
    name[1] = 'o';
    name[2] = 'e';
    name[3] = '\0';//null terminator/ sentinel characters
    cout<<name<<"\n";

    std::size_t i = 0;
    while(name[i] != '\0') 
    {
        cout<<name[i] <<"\n";
        ++i;
    }
}

void use_char_not_terminated()
{
    const int SIZE = 4;
    char name[SIZE] = {'j', 'o', 'e'};

    cout<<name<<"\n";

    std::size_t i = 0;
    while(name[i] != '\0') 
    {
        cout<<name[i] <<"\n";
        ++i;
    }
}

void use_string_terminated()
{
    string name = "John Doe";
    cout<<name<<"\n";

    name = "John\0Doe";
    cout<<name<<"\n";
}