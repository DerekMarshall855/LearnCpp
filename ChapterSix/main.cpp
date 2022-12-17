#include <iostream>

// Uses abbreviated function template (C++20) and `auto` return type to make this function work with any type of value
// See 'related content' box below for more info (you don't need to know how these work to use this function)
consteval auto compileTime(auto value)
{
    return value;
}

constexpr int greater(int x, int y)
{
    return (x > y ? x : y);
}

int main()
{
    std::cout << greater(5, 6) << '\n';              // may or may not execute at compile-time
    std::cout << compileTime(greater(5, 6)) << '\n'; // Will execute at compile-time

    int x{5};
    std::cout << greater(x, 6) << '\n'; // Can still call this version at runtime, but if we call 'compileTime' version it will crash

    return 0;
}