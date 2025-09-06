
#include<iostream>

using namespace std;

class Demo{

    public:

    Demo(); // Constructor Declaration

};

 Demo::Demo(){ // outside class Constructor 
        cout<<"This is Default outside constructor"<<endl;
    }

int main(){

    Demo obj;  // Create an object

    return 0;
}