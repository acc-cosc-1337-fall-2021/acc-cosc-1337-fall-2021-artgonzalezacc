#include "text_output.h"

using std::ifstream;  using std::ofstream;  using std::cout;


void write_to_file()
{
    ofstream out_file;
    cout<<"Open file...\n";
    out_file.open("names.dat");

    cout<<"Write to file...\n";

    out_file<<"joe\n";
    out_file<<"mary\n";
    out_file<<"john\n";

    cout<<"Close the file...\n";
    out_file.close();
}

void read_from_file()
{
    ifstream in_file;

    cout<<"Open file\n";
    in_file.open("names.dat");

    std::string name;

    if(in_file.is_open())
    {
        cout<<"Read from file\n";

        while(in_file>>name)
        {
            cout<<name<<"\n";
        }
    }

    cout<<"Close the file\n";

    in_file.close();
}

