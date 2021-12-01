//
#include<iostream>
#include<cstddef>

#ifndef LIST_ABSTRACT_H
#define LIST_ABSTRACT_H

class List_Abstract
{
public:
    virtual std::size_t Size() const = 0;
};

#endif

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector : public List_Abstract
{
public:
    Vector(std::size_t s);
    Vector(const Vector& v);//copy constructor-Rule 1 of 3 of C++ Rule of 3(legacy C++)
    Vector& operator=(const Vector& v);//copy assignment Rule 2 of 3 of C++ Rule of 3
    Vector(Vector&& v);//Rule 4 of 5 move assignment in C++ rule of 5 (modern C++)
    Vector& operator=(Vector&& v);//Rule 5 of 5 in C++ Rule of 5
    std::size_t Size() const {return size;}
    std::size_t Capacity() const{return space;}
    void Reserve(std::size_t new_allocation_size);
    void Resize(std::size_t new_allocation_size);
    void Pushback(int value);
    int& operator[](std::size_t i) const{return elements[i]; }//read cout<<v[0];
    int& operator[](std::size_t i) {return elements[i];}//write v[0] = 5;
    ~Vector();//executes when class goes out of scope Rule 3 of 3 in C++ Rule of 3

private:
    std::size_t size;//number of elements in my vector
    std::size_t space;//number of elements in my vector + free slots
    int* elements;//list of ints,
    const int RESERVE_DEFAULT_SIZE{8};//initial vector size
    const int RESERVE_DEFAULT_MULTIPLIER{2};//current capacity * multiplier
};

#endif

Vector get_vector();
