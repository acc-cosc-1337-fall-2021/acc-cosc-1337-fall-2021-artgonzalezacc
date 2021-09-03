#include <iostream>
#include <climits>

using std::cout;

int main()
{
    auto max = 2147483647;
    cout<<"The max int in C++ is: "<<max<<"\n";
    cout<<"Add 1 to create C++ weirdness: \n";
    
    max = max + 1;
    cout<<"Max + 1 is: "<<max<<"\n\n";

    //smallest supported double value
    auto closest_to_zero_double = __DBL_MIN__;
    cout<<"Smallest: "<<closest_to_zero_double<<"\n";

    auto too_close_to_zero_double = closest_to_zero_double / 10;
    cout<<too_close_to_zero_double;

    return 0;
}