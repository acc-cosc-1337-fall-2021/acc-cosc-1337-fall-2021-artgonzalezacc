#include <vector>
#include <iostream>
#include<string>

using std::vector;

int main()
{
    vector<int> letters;
    
    letters.push_back(1);
    letters.push_back(2);
    letters.push_back(3);

    for(auto l: letters)
    {
        std::cout<<l<<"\n";
    }

    vector<std::string> names {"mary", "joe", "jack"};

    for(auto name: names)
    {
        std::cout<<name<<"\n";
    }

    vector<int> numbers (10, 5);

    for(auto number: numbers)
    {
        std::cout<<number<<"\n";
    }

    return 0;
}