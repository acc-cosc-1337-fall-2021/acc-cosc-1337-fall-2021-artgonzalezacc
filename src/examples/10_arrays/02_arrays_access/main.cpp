#include "arrays_access.h"
#include<iostream>

using std::cout;

int main()
{
    Array_List list;

    list.add(10);
    list.add(5);
    list.add(100);

    std::vector<int> nums = list.to_vector();

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }

    return 0;
}