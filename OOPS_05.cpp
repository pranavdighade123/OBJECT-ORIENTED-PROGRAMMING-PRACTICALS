/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 05

AIM:Implement a C++ program to understand concept matrix operations

*/


#include<iostream>
using namespace std;
class classA{
    string name;
    
    public:
    
    classA(){
        cin>>name;
    }
    
    ~classA(){
        name="";
    }
    
    void display(){
        cout<<name;
    }
};
int main(){
    
    classA c;
    c.display();
    
    return 0;
}