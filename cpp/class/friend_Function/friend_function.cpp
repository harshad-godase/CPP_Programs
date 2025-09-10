#include<iostream>
using namespace std;

class Employee{

    private:
    double salary;
    
    public:
    // Construnctor

    Employee(double s){
        salary =s;
    }

    //Declaration of friend function

    friend void print_sal(Employee e);
};

// Defination = Friend function

void print_sal(Employee e){ // object
    cout<<"Employee salaray is : "<<e.salary<<endl;
}

int main(){

    Employee emp(5420.20);
    print_sal(emp);
    
    return 0;
}