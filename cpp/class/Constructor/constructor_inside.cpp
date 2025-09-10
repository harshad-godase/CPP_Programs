#include<iostream>

using namespace std;

class Demo{

    public:

    Demo(){ // Constructor 
        cout<<"This is Default constructor"<<endl;
    }
};

int main(){

    Demo obj;  // Create an object

    return 0;
}