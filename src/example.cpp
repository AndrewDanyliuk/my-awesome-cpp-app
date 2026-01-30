#include "my_awesome_cpp_app/example.h"

namespace my_awesome_cpp_app {

Example::Example(int value) : value_(value) {}

int Example::getValue() const
{
    return value_;
}

void Example::setValue(int value)
{
    value_ = value;
}

int Example::add(int amount)
{
    value_ += amount;
    return value_;
}

}  // namespace my_awesome_cpp_app
