#include "my_vector.h"

using std::cout;

Vector::Vector(std::size_t s) 
: size(s), elements{new int[s]()}/*Create dyanmic memory for elements of size s*/
{
    cout<<"Constructor(s)-Creating memory "<<elements<<"\n";//display address of elements
}

/*
Copy constructor
1 Initialize size for v1 from v
2 Initialize memory for v1
3 Copy elements from v to v1
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
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
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size]();

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
1-Clear original dynamic memory
2-point elements to v.elements
3-get size from v
4-point v.elements to nullptr
5-set v.size to 0
*/
Vector::Vector(Vector&& v)
{
    delete elements;
    elements = v.elements;
    size = v.size;
    v.elements = nullptr;
    v.size = 0;
}

Vector::~Vector()
{
    cout<<"Deleting dynamic memory "<<elements<<"\n";
    delete []elements;
}


//free function
Vector get_vector()
{
    Vector v(3);
    return v;
}
