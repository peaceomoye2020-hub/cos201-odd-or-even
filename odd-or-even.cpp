#include <iostream>
#include <limits>

int main() {
    long long number;

    std::cout << "Enter an integer: ";
    if (!(std::cin >> number)) {
        std::cerr << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    if (number % 2 == 0) {
        std::cout << number << " is Even.\n";
    } else {
        std::cout << number << " is Odd.\n";
    }

    return 0;
}
