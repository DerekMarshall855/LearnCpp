#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int x{};

    int num{};
    std::cin >> num;

    std::cout << "That number doubled is: " << num * 2 << "\n";
    std::cout << "That number tripled is: " << num * 3 << "\n";

    return 0;
}