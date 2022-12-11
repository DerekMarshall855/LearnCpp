#include <iostream>

int main()
{
    int x{5};
    std::cout << "x is equal to: "
              << x
              << std::endl;

    std::cout << "Hi!" << std::endl;
    std::cout << "My name is Derek" << std::endl;

    // endl can be inefficient since it creates new line + moves cursor, prefer to use \n in most cases

    std::cout << "What a crazy day!"
              << "\n";
    std::cout << "That's all folks!\n";

    std::cout << "Enter two numbers separated by a space: ";
    int user_input_x{};
    int user_input_y{};
    std::cin >> user_input_x >> user_input_y;

    std::cout << "You entered " << user_input_x << " and " << user_input_y << "\n";

    return 0;
}