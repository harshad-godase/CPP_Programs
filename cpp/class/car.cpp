#include<iostream>

using namespace std;

class Car{
      
    public:

    string brand;
    string model;
    int year;

    Car(string x ,string y, int z){ // Constructor 
        brand =x;
        model = y;
        year= z;
    }
    
};

int main(){

    Car c1("BMW","x1",2020);  // Create an object

    cout<<"Car Deatils are:"<<endl;
    cout<<"Car brand is :"<<c1.brand<<endl;
    cout<<"Car model is :"<<c1.model<<endl;
    cout<<"Car year is :"<<c1.year<<endl;


    return 0;
}