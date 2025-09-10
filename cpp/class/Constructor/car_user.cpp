#include<iostream>

using namespace std;

class Car{
      
    public:

    string brand;
    string model;
    int year;

    Car(string x ,string y, int z);
    
    
};

Car::Car(string x ,string y, int z){ // Constructor 
        brand =x;
        model = y;
        year= z;
    }

int main(){

    string b, m;
    int y;

    cout << "Enter the brand of Car 1: ";
    cin >> b;
    cout << "Enter the model of Car 1: ";
    cin >> m;
    cout << "Enter the year of Car 1: ";
    cin >> y;

    Car c1(b, m, y);  // Call constructor

    cout << "\nEnter the brand of Car 2: ";
    cin >> b;
    cout << "Enter the model of Car 2: ";
    cin >> m;
    cout << "Enter the year of Car 2: ";
    cin >> y;

    Car c2(b, m, y);  // Call constructor

    cout << "\nCar 1 Details are:" << endl;
    cout << "Car brand is : " << c1.brand << endl;
    cout << "Car model is : " << c1.model << endl;
    cout << "Car year is : " << c1.year << endl;

    cout << "\nCar 2 Details are:" << endl;
    cout << "Car brand is : " << c2.brand << endl;
    cout << "Car model is : " << c2.model << endl;
    cout << "Car year is : " << c2.year << endl;

    return 0;
}