#include <iostream>

// Compile and link 2 files, forward declaration of add
int add(int x, int y, int z);

int main()
{
    int sum{add(1, 2, 3)};
    std::cout << "1 + 2 + 3 = " << sum << "\n";

    return 0;
}