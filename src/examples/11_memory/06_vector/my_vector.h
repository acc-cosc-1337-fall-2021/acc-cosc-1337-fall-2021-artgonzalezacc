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
    Vector(const Vector& v);//copy constructor-Rule 1 of 3 of C++ Rule of 3
    Vector& operator=(const Vector& v);//copy assignment Rule 2 of 3 of C++ Rule of 3
    //rule 4 of 5 move constructor
    Vector(Vector&& v);//Rule 5 of 5 move assignment
    std::size_t Size() const {return size;}
    int& operator[](std::size_t i) const{return elements[i]; }//read cout<<v[0];
    int& operator[](std::size_t i) {return elements[i];}//write v[0] = 5;
    ~Vector();//executes when class goes out of scope Rule 3 of 3 in C++ Rule of 3

private:
    std::size_t size;
    int* elements;//list of ints,
};

#endif

Vector get_vector();
