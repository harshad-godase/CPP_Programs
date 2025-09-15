#include<iostream>
using namespace std;

class Animal{

    public:
    void breed(){
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
    void breed(){
        cout<<"The dog type is husky"<<endl;
    }
};

int main(){

    cat c;  // cat class object

    c.breed();

    c.Animal::breed(); // for base class print

    dog d;  // dog class object

    d.breed();
    d.Animal::breed();


    return 0;
}