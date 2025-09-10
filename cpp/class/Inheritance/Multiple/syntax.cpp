#include<iostream>
using namespace std;

class Base1{

    public:

    void B1_fun(){
        cout<<"This is Base 1 class Method"<<endl;
    }

};

class Base2{

    public:

    void B2_fun(){
        cout<<"This is Base 2 class Method"<<endl;
    }

};

class Derived : public Base1, public Base2{

    public:

    void D_fun(){
        cout<<"This is Derived class Method"<<endl;
    }

};

int main(){

    Derived obj;
    obj.B1_fun();
    obj.B2_fun();
    obj.D_fun();

    return 0;

}