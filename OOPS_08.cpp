/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 08

AIM:Write a program containing a possible exception.
Use a try block to throw it and catch block to handle it properly

*/


#include<iostream>
using namespace std;
int main(){
    int x = -1;
    
    try{
        cout<<"Inside try"<<endl;
        if(x<0){
            throw x;
        }
    }
    catch(int x){
        cout<<"Exception caught!\n";
    }
    cout<<"After catch";
    
    return 0;
}