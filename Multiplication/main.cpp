#include <iostream>

int main() {
    double num {};

    std::cout << "Enter an Integer \n";
    std::cin >> num;
    std::cout << "Double of: "<< num << ", is: " << num*2 << '\n';
    std::cout << "Triple of: "<< num << ", is: " << num*3 << '\n';
    return 0;
}
