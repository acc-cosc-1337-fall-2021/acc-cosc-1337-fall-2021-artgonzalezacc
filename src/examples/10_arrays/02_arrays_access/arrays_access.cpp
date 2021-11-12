//cpp
#include "arrays_access.h"

int Array_List::get_current_size() const
{
    return index;
}

int Array_List::get_index_of(int num) const
{
    for(int i=0; i < index; ++i)
    {
        if(list[i] == num)
        {
            return i;
        }
    }

    return -1;
}

bool Array_List::is_empty()const
{
    return index == 0;
}

bool Array_List::add(int num)
{
    if(index < SIZE)
    {
        list[index] = num;
        index++;
        return true;
    }

    return false;
}

std::vector<int> Array_List::to_vector()const
{
    std::vector<int> nums;

    auto i = 0;

    for(int i=0; i < index; i++)
    {
        nums.push_back(list[i]);
    }

    return nums;
}

void Array_List::clear()
{
    index = 0;
}

int Array_List::get_frequency_of(int num)
{
    auto count = 0;

    for(int i=0; i < index; ++i)
    {
        if(list[i] == num)
        {
            count++;
        }
    }

    return count;
}

bool Array_List::contains(int num)
{
    auto exists = false;

    for(int i=0; i < index; ++i)
    {
        if(list[i] == num)
        {
            exists = true;
            break;
        }
    }

    return exists;
}

bool Array_List::replace(int num, int new_num)
{
    auto replaced = false;

    for(int i=0; i < index; ++i)
    {    
        if(list[i] == num)
        {
            list[i] = new_num;
            replaced = true;
            break;
        }
    }

    return replaced;
}