/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 05

AIM: Implement a C++ program to understand concept of constructor and Destructor.

*/


#include <iostream>

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
        data = 0;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }

    // Member function
    void setData(int value) {
        data = value;
    }

    // Member function
    void displayData() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Set data using member function
    obj.setData(42);

    // Display data using member function
    obj.displayData();

    return 0;
}
