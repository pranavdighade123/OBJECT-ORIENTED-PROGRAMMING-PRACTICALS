/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 06

AIM: Implement a C++ program to understand concept of multiple
     and multilevel inheritance using Virtual function

*/


#include <iostream>

// Base class
class Animal {
public:
    virtual void sound() {
        std::cout << "Animal is making a sound." << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Dog is barking." << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Cat is meowing." << std::endl;
    }
};

// Derived class 3
class Lion : public Cat {
public:
    void sound() override {
        std::cout << "Lion is roaring." << std::endl;
    }
};

int main() {
    Animal* animalPtr;

    // Create objects and call sound() using base class pointer
    Dog dog;
    animalPtr = &dog;
    animalPtr->sound();

    Cat cat;
    animalPtr = &cat;
    animalPtr->sound();

    Lion lion;
    animalPtr = &lion;
    animalPtr->sound();

    return 0;
}
