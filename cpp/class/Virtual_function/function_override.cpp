#include<iostream>
using namespace std;

class Parent{

    public:

    virtual void display(){
        cout<<"This display function of parent class"<<endl;
        cout<<"This is virtual function"<<endl;
    }

    void fun(){
        cout<<"This is normal function of parent class"<<endl;
    }
};

class child : public Parent{

    public:

    void display(){
        cout<<"This display function of child class"<<endl;
        cout<<"This is function overriding"<<endl;
    }

    void fun(){
        cout<<"This is normal function of child class"<<endl;
    }
};

int main(){
    Parent *ptr;
    child ch;

    ptr = &ch;

    // Runtime Virtual function
    ptr->display(); // It will call the display function of child class because of virtual function

    // Non-virtual function
    ptr->fun(); // It will call the fun function of parent class 
    
}