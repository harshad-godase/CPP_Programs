#include<iostream>
using namespace std;

class Employee{

    private:
    double salary;

    public:

      void set_sal(double s){ // Setter
        salary=s;
      } 

      double get_sal(){  // Getter
        return salary;
      }
};

int main(){

    Employee emp;
    emp.set_sal(5525.21);

    cout<<"Employee salary is :"<<emp.get_sal();
    
    return 0;
}