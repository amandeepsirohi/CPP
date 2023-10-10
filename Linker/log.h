#include <iostream>

static void log(const char* message) //declaring it static will help each program calling it has log own copy
{
    std::cout << "hello world" << std::endl;
}