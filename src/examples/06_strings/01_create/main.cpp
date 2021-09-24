#include <string>
#include <iostream>

using std::string; using std::cout;

int main()
{
    char letter = 'a';
    
    string alpha = "abcdefghijklmnop";
    cout<<"My size:   "<<alpha.size()<<"\n";
    cout<<"My length: "<<alpha.length()<<"\n";
    cout<<"alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n";
    cout<<"\nadd q\n";
    alpha.push_back('q');
    cout<<"My length: "<<alpha.length()<<"\n";
    cout<<"alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n\n\n";

    string s1;
    string s2(alpha);
    string s3(10, 'x');
    string s4(alpha, 8, 3);

    cout<<s1<<"\n";
    cout<<s2<<"\n";
    cout<<s3<<"\n";
    cout<<s4<<"\n";
    cout<<alpha[2]<<"\n";
    alpha[2] = 'C';//reference/direct access to memory location
    cout<<alpha[2]<<"\n";

    return 0;
}