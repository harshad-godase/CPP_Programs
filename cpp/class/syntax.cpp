#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    double sal;
};

int main(){
    employee emp;
    emp.id=10;
    emp.name="Harshad";
    emp.sal=25000;

    cout<<"---------------------"<<endl;
    cout<<"employee deatails"<<endl;
    cout<<"employee id: "<<emp.id<<endl;
    cout<<"employee name: "<<emp.name<<endl;
    cout<<"employee salary: "<<emp.sal<<endl;

    return 0;

}
