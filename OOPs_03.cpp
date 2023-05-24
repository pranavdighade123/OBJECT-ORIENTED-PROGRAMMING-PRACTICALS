/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 03

AIM: Implement a C++ program to understand concept of Friend Function.

*/


#include <iostream>

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass(int value) : data(value) {}

    // Friend function declaration
    friend void displayData(const MyClass& obj);
};

// Friend function definition
void displayData(const MyClass& obj) {
    std::cout << "Data: " << obj.data << std::endl;
}

int main() {
    // Create an object of MyClass
    MyClass obj(42);

    // Call the friend function to display the data
    displayData(obj);

    return 0;
}
