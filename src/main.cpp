#include "my_awesome_cpp_app/example.h"
#include <iostream>

/** MUST HAVE THIS ADDED AS AN EXECUTABLE IN src/CMakeLists.txt FOR IT TO BE PART OF COMPILATION. **/
int main()
{
    my_awesome_cpp_app::Example example(42);
    std::cout << "Value: " << example.getValue() << std::endl;
    return 0;
}
