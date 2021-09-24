#include <string>
#include <iostream>

using std::string;

int main()
{

    string alpha = "abc";

    for(auto& l: alpha)
    {
        l = 'z';
    }

    std::cout<<alpha<<"\n";//;what does it display? abc or zzz

    return 0;
}