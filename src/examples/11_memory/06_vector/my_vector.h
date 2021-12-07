//
#include<iostream>
#include<cstddef>

#ifndef LIST_ABSTRACT_H
#define LIST_ABSTRACT_H

template<class T>
class List_Abstract
{
public:
    virtual std::size_t Size() const = 0;
};

#endif

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

template<class T>
class Vector : public List_Abstract<T>
{
public:
    Vector(std::size_t s);
    Vector(const Vector<T>& v);//copy constructor-Rule 1 of 3 of C++ Rule of 3(legacy C++)
    Vector<T>& operator=(const Vector<T>& v);//copy assignment Rule 2 of 3 of C++ Rule of 3
    Vector(Vector<T>&& v);//Rule 4 of 5 move assignment in C++ rule of 5 (modern C++)
    Vector<T>& operator=(Vector<T>&& v);//Rule 5 of 5 in C++ Rule of 5
    std::size_t Size() const {return size;}
    std::size_t Capacity() const{return space;}
    void Reserve(std::size_t new_allocation_size);
    void Resize(std::size_t new_allocation_size);
    void Pushback(T value);
    T& operator[](std::size_t i) const{return elements[i]; }//read cout<<v[0];
    T& operator[](std::size_t i) {return elements[i];}//write v[0] = 5;
    ~Vector();//executes when class goes out of scope Rule 3 of 3 in C++ Rule of 3

private:
    std::size_t size;//number of element values in my vector
    std::size_t space;//number of element values in my vector + free slots
    T* elements;//list of ints,
    const int RESERVE_DEFAULT_SIZE{8};//initial vector size
    const int RESERVE_DEFAULT_MULTIPLIER{2};//current capacity * multiplier
};

#include "my_vector.cpp"
//Vector<int> get_vector();

#endif


