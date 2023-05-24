/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 04

AIM:Implement a C++ program to understand concept matrix operations

*/



#include<iostream>
using namespace std;
class mat{
    
    int a[2][2]={{4,6},{7,8}};
    int b[2][2]={{1,3},{5,9}};
    int c[2][2];
    
    public:
    void add(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               c[i][j]=a[i][j]+b[i][j]; 
            }
        }
    }
    
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    
    mat m;
    
    m.add();
    m.display();
    
    return 0;
}