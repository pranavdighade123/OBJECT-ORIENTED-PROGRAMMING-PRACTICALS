/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 07

AIM: Implement a C++ program to understand concept of polymorphism and virtual function.

*/


#include <iostream>

// Base class
class Vehicle {
public:
    // Virtual function
    virtual void displayInfo() {
        std::cout << "Vehicle" << std::endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    // Override the virtual function
    void displayInfo() override {
        std::cout << "Car" << std::endl;
    }
};

// Derived class 2
class Motorcycle : public Vehicle {
public:
    // Override the virtual function
    void displayInfo() override {
        std::cout << "Motorcycle" << std::endl;
    }
};

int main() {
    // Create objects of base class and derived classes
    Vehicle vehicle;
    Car car;
    Motorcycle motorcycle;

    // Use base class pointer to achieve polymorphism
    Vehicle* vehiclePtr = nullptr;

    // Point to base class object
    vehiclePtr = &vehicle;
    vehiclePtr->displayInfo();  // Calls base class function

    // Point to derived class objects
    vehiclePtr = &car;
    vehiclePtr->displayInfo();  // Calls derived class function

    vehiclePtr = &motorcycle;
    vehiclePtr->displayInfo();  // Calls derived class function

    return 0;
}
