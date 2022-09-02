#include <iostream>
#include <list>
int main() {
    std::cout << "Please write an integer\n";
    int n {};
    std::cin >> n;
    int number{ n };

    std::list<int> numbers;
    //change
    for (int i = 1; i <= number; ++i) {
        //std::cout << i << '\n';
        if(i*3 <= number) {
            numbers.assign(numbers.front(), i*3);
            std::cout << "multiple of Three = " << numbers.front() << '\n';
        }
        if(i*5 <= number) {
            numbers.assign(numbers.front(), i*5);
            std::cout << "multiple of Five = " << numbers.front() << '\n';
        }
    }
    numbers.sort();
    numbers.unique();
    int sumOfAll {0};
    std::cout << "numbers size =" << numbers.size() << '\n';
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << i << '\n';
        sumOfAll += numbers.front();
        std::cout << "sum of all = "<< sumOfAll << '\n';
    }


    std::cout << "sumOfAll = "<< sumOfAll << '\n';
    return 0;
}

