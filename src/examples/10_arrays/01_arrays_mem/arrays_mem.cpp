//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;


void stack_array()
{
    const int SIZE = 3;
    int numbers[SIZE]{4, 10, 5};//creates a list/array of 3 elements

    for(int i=0; i < SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }

    numbers[1] = 15;

    for(int i=0; i < SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }
}

void array_months()
{
    const int SIZE = 3;
    int month_numbers[SIZE] {1,2,3};
    std::string month_names[SIZE]{"Jan", "Feb", "Mar"};

    for(int i=0; i < SIZE; ++i)
    {
        cout<<month_numbers[i]<<" "<<month_names[i]<<"\n";
    }

}

void arrays_and_pointers()
{
    const int SIZE = 3;
    int numbers[SIZE]{10,2,3};//the name of the array is a pointer

    cout<<numbers<<"\n";//displaying the address of numbers..because it's a pointer
    cout<<*numbers<<"\n";

    cout<<&numbers[1]<<"\n";
    cout<<numbers[1]<<"\n";

}

void display_array(int* nums, const int SIZE)
{
    for(int i=0; i < SIZE; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}

void populate_times_table(int times_table[][COLS], int ROWS)
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            times_table[i][j] = (i+1) * (j + 1);
        }
    }
}

void display_times_table(int times_table[][COLS], int ROWS)
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            cout<<std::setw(5)<<times_table[i][j];
        }

        cout<<"\n";
    }    
}