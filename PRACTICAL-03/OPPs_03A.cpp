/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 03

AIM: Create two classes DM and DB which stores values of distances. DM stores distances in
    meters and centimeters and DB in feet and inches. Write a program that can read values for
    the class objects and add one object of DM with another object of DB. Use a friend function
    to carry out addition operation.

*/


#include <iostream>

class DB;  // Forward declaration of class DB

class DM {
private:
    int meters;
    int centimeters;

public:
    // Constructor
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    // Friend function to add DM with DB
    friend DM addDistances(DM dm, DB db);

    // Display function
    void display() {
        std::cout << "Distance in DM: " << meters << " meters, " << centimeters << " centimeters" << std::endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    // Constructor
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    // Friend function to add DM with DB
    friend DM addDistances(DM dm, DB db);

    // Display function
    void display() {
        std::cout << "Distance in DB: " << feet << " feet, " << inches << " inches" << std::endl;
    }
};

// Friend function to add DM with DB
DM addDistances(DM dm, DB db) {
    int totalMeters = dm.meters + db.feet / 3 + (db.inches / 12) * 0.3048;  // Convert feet and inches to meters
    int totalCentimeters = dm.centimeters + (db.feet % 3) * 30.48 + (db.inches % 12) * 2.54;  // Convert remaining feet and inches to centimeters

    // Adjust the total centimeters if it exceeds 100
    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters %= 100;
    }

    DM result(totalMeters, totalCentimeters);
    return result;
}

int main() {
    int meters, centimeters, feet, inches;

    // Read values for DM object
    std::cout << "Enter distance in meters and centimeters (DM): ";
    std::cin >> meters >> centimeters;
    DM dm(meters, centimeters);

    // Read values for DB object
    std::cout << "Enter distance in feet and inches (DB): ";
    std::cin >> feet >> inches;
    DB db(feet, inches);

    // Add DM with DB using friend function
    DM result = addDistances(dm, db);

    // Display the result
    result.display();

    return 0;
}

