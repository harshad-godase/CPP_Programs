#include<iostream>
using namespace std;

class Vehical{
    private:
    int cost=10000000, year=2025,milege=20;

    public:
    void showVehical() {
        cout << "Cost of car: " << cost << endl;
        cout << "Relese Year: " << year << endl;
        cout << "Mileage: " << milege << " km/l" << endl;
    }
};

class Details:public Vehical {
    private:
    string brand="BMW",model="M4",colour="Black";

    public:
    void showDetails() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Colour: " << colour << endl;
    }    
};

class feature : public Details{
    protected:
    int Seats = 4,Airbags=4;   

    public:
    void showFeature() {
        cout << "Seats in the Car: " << Seats << endl;
        cout << "Airbags in car: " << Airbags << endl;
    }
};


int main(){

    feature c1;
    c1.showDetails();
    c1.showFeature();
    c1.showVehical();
    
   return 0;

}

