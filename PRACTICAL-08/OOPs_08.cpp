/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 08

AIM: Write a program containing a possible exception.
     Use a try block to throw it and catch block to handle it properly

*/

#include <iostream>

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Divide by zero exception");
    }
    return numerator / denominator;
}

int main() {
    int a, b;

    std::cout << "Enter numerator: ";
    std::cin >> a;

    std::cout << "Enter denominator: ";
    std::cin >> b;

    try {
        int result = divide(a, b);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
