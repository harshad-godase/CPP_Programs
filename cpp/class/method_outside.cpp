#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    double sal;

    void fun(); // Method declaration

    
};
void employee :: fun(){ // Method Definition

        cout<<"This is Outside class method/function"<<endl;

    }

int main(){
    employee emp; // create an object

    emp.fun();

    return 0;
   

}
