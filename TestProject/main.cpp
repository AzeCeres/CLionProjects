#include <iostream>
#include <cmath>

int main() {
    // How many times the function loops over itself, increasingly getting closer to lim
    int iterations{};
    // The number x approaches
    int lim{};
    std::cout << "Please enter number of iterations, followed by a space, then the limit! Press enter when you're done.\n";
    std::cin >> iterations >> lim; // get two numbers and store in variable x and y respectively

    for (int i = 1; i <= iterations; ++i) {
        double x = lim + 1/ pow(10, i);

        //print x Value
        std::cout << "x = " << x << '\n';

        // Function that should be changed per use case // pow(x, 0.5) is x^0.5, which is the same as the squareRoot
        double y = (x-2)/(pow(x, 0.5) - pow(2, 0.5) );

        //print y Value
        std::cout<< "for i = " << i << "  y == " << y << '\n';
    }
    return 0;
}
