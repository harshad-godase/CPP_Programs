#include<iostream>
using namespace std;

class employee{
    public:
    // Attributes
    int id;
    string name;
    double sal;

    void set_data(string n, int i , double s); // Method declaration

    
};
void employee :: set_data(string n, int i , double s){ // Method Definition

        // Load data in actual atrributes / members
        name=n;
        id= i;
        sal = s;

        cout<<"employee deatails"<<endl;
        cout<<"employee id: "<<id<<endl;
        cout<<"employee name: "<<name<<endl;
        cout<<"employee salary: "<<sal<<endl;

    }

int main(){
    employee emp; // create an object

    emp.set_data("Harsh",1,577782.54);

    return 0;
   

}
