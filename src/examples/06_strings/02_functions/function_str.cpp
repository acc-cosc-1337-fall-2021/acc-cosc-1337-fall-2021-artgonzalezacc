#include "function_str.h"

void my_strings (std::string s1, std::string &s2, const std::string &s3)
{
    s1 = "new string";
    s2 = "new string";
    //s3 = "new string"; not allowed
}