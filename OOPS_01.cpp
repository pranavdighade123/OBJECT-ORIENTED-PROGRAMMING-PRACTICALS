/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 01

AIM: Write a program to compute the area of triangle
     and circle by overloading the area() function.
*/

#include<iostream>
using namespace std;
class compute{
  public:
  float area(int base, int height){
      return 0.5*base*height;
  } 
  float area(int radius){
      return 3.14*radius*radius;
  }
};
int main(){
    
    int b,h,r;
    
    cout<<"Enter values for base : "<<endl;
    cin>>b;
    
    cout<<"Enter values for height : "<<endl;
    cin>>h;
    
    cout<<"Enter values for radius : "<<endl;
    cin>>r;
    
    compute c;
    cout<<"Area of triangle = "<<c.area(b,h)<<endl;
    cout<<"Area of circle = "<<c.area(r);
    return 0;
}