//dynamic array allocation and deallocation functions
//use getline to end char w \0 auto and show example of manual char termination 
#include<iostream>
#include<memory>

void use_dynamic_char_array(const std::size_t size);
char* get_dynamic_char(const std::size_t size);
void delete_dynamic_char(char* array);

void limit_dynamic_char_scope(std::size_t size);
