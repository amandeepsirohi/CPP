#include <iostream>

#define INTEGER int

using namespace std;

//IF is a preprocessor statement if 1 then only run , if 0 then stop
#if 1
int main()
{
    INTEGER a = 10;
    INTEGER b = 10;
    cout << a* b;
#include "header.h" //header file just copy paste all progra, code where they included
#endif