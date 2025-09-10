#include<iostream>
using namespace std;

class Parent{
   
    public:

    void p_print(){
        cout<<"This is parent class"<<endl;
    }    
};

class Child : public Parent{
    public:
    void c_print(){
        cout<<"This is child class"<<endl;
    }
};


int main(){

    Child ch;
    ch.p_print();
    ch.c_print();


    
    return 0;
}