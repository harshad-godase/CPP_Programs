#include<iostream>
using namespace std;

class GrandParent{

    public:
    void GP(){
       
        cout<<"This is grand parent class"<<endl;

    }
};

class Parent:public GrandParent{
   
    public:
    void pp(){
        cout<<"This is parent class"<<endl;
    }    
};

class Child : public Parent{
    public:
    void Cp(){
        cout<<"This is child class"<<endl;
    }
};


int main(){

   Child ch;
   ch.GP();
   ch.pp();
   ch.Cp();

   return 0;
}

