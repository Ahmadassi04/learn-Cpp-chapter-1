#include <iostream>

int main()
{
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << '\n';

    int y;
    std::cout << "Enter another integer: ";
    std::cin >> y;
    std::cout << '\n';

    std::cout << x << " + " << y << " is: " << x + y << '\n';

    std::cout << x << " - " << y << " is: " << x - y << '\n';

    return 0;
}
