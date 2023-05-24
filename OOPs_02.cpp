/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 02

AIM: Implement C++ programs which include a Class having data
 members and member function and Object to access these members of Class.

*/

#include <iostream>

class MyClass {
private:
    int data;

public:
    // Member function to set the value of data
    void setData(int value) {
        data = value;
    }

    // Member function to get the value of data
    int getData() {
        return data;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Access and modify the data member using member functions
    obj.setData(42);
    int value = obj.getData();

    // Display the value of the data member
    std::cout << "Value of data: " << value << std::endl;

    return 0;
}
