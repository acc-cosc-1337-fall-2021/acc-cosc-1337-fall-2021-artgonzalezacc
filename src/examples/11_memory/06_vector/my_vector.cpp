#include "my_vector.h"

using std::cout;

#ifndef MY_VECTOR_CPP
#define MY_VECTOR_CPP

template<class T>
Vector<T>::Vector(std::size_t s) 
: size(s), space{8}, elements{new T[s]()}/*Create dyanmic memory for elements of size s*/
{
    cout<<"Constructor(s)-Creating memory "<<elements<<"\n";//display address of elements
}

/*
Copy constructor
1 Initialize size for v1 from v
2 Initialize memory for v1
3 Copy elements from v to v1
*/
template<class T>
Vector<T>::Vector(const Vector<T>& v)
: size{v.size}, elements{new T[v.size]}
{
    cout<<"Execute copy constructor "<<elements<<"\n";

    for(std::size_t i =0; i < v.size; ++i)
    {
        elements[i] = v.elements[i];
    }

}

/*
1-Create temporary memory for v1
2-Copy values from v into temporary memory in v1 variable temp
3-Delete v1 elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector
*/
template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    T* temp = new T[v.size]();

    for(std::size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[]elements;

    elements = temp;
    cout<<"Copy assignment operator "<<elements<<"\n";
    size = v.size;
    
    return *this;
}

/*
1 Get size from v
2 get v.elements memory
3 set v.size to 0
4 set v.elements to nullptr
*/
template<class T>
Vector<T>::Vector(Vector<T>&& v)
: size{v.size}, elements{v.elements}
{
    cout<<"Move Constructor "<<elements<<"\n";
    v.size = 0;
    v.elements = nullptr;
}

/*
1-Clear original dynamic memory
2-point elements to v.elements
3-get size from v
4-point v.elements to nullptr
5-set v.size to 0
return a self reference using this
*/
template<class T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
{
    delete elements;
    elements = v.elements;
    cout<<"Move assignment "<<elements<<"\n";

    size = v.size;
    v.elements = nullptr;
    v.size = 0;
   
    return *this;
}

/*
1-Make sure new allocation is greater than space
2-Create temp dynamic memory of size new allocation
3-copy values from old memory array to temp array
4-Delete the old array
5-set elements to temp memory array
6-set space = new allocation
*/
template<class T>
void Vector<T>::Reserve(std::size_t new_allocation_size)
{
    if(new_allocation_size <= space)
    {
        return;
    }

    T* temp = new T[new_allocation_size];

    for(std::size_t i=0; i < size; ++i)
    {
        temp[i] = elements[i];
    }

    delete[] elements;
    elements = temp;
    space = new_allocation_size;
}

/*
1-Call reserve function with new allocation size
2-initialize elements beyond size
3-set size to new allocation
*/
template<class T>
void Vector<T>::Resize(std::size_t new_allocation_size)
{
    Reserve(new_allocation_size);

    for(std::size_t i = 0; i < new_allocation_size; ++i)
    {
        elements[i] = 0;
    }

    size = new_allocation_size;
}

/*
1-if space 0 call Reserve w Reserve Default size
2-else if size == space call Reserve w space * reserve default multiplier
3-set value to current element at size
4-inrement size
*/
template<class T>
void Vector<T>::Pushback(T value)
{
    if(space == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if (space == size)
    {
        Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

template<class T>
Vector<T>::~Vector()
{
    cout<<"Deleting dynamic memory "<<elements<<"\n";
    delete []elements;
}

/*free function
Vector<int> get_vector()//we are returning by value(copy) or reference?
{
    Vector<int> v1(3);
    return v1;
}*/

#endif

