//
#include "my_vector.h"
#include <iostream>

using std::cout;

int main()
{
    Vector<int> v(3);
    cout<<v.Size()<<"\n";
    cout<<v.Capacity()<<"\n";
    cout<<v[0]<<"\n";
    v.Pushback(5);
    cout<<v[3]<<"\n\n";

    Vector<double> v1(3);
    cout<<v1.Size()<<"\n";
    cout<<v1.Capacity()<<"\n";
    cout<<v1[0]<<"\n";
    v1.Pushback(5.5);
    cout<<v1[3]<<"\n";

    return 0;
}

