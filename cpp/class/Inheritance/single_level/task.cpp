#include<iostream>
using namespace std;

class Parent{
   protected:
   int radius;
};

class Child : public Parent{
    public:
    double c_print(){
         cout<<"Enter the radius of circle:";
         cin>>radius;
        return 2*3.14*radius;
    }
};


int main(){
    Child ch;
    cout<<"Circumference of circle is:"<<ch.c_print()<<endl;

    return 0;
}