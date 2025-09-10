#include<iostream>
using namespace std;

class Animal{

    public:
    void info(){
        cout<<"This is pet animal catergory"<<endl;
    }
};

class cat: public Animal{

    public:
    void breed(){
        cout<<"The cat breed is persian"<<endl;
    }
};

class dog:public Animal{

    public:
    void type(){
        cout<<"The dog type is husky"<<endl;
    }
};

int main(){

    cat c;  // cat class object
    dog d;  // dog class object

    c.info();
    c.breed();
    d.info();
    d.type();

    return 0;
}