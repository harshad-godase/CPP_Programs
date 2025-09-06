#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    double sal;
};

int main(){
    employee emp1, emp2;

    cout<<"Enter first employee details: "<<endl;
    cout<<"Enter employee id: ";
    cin>>emp1.id;
    cout<<"Enter employee name: ";
    cin>>emp1.name;
    cout<<"Enter employee salary: ";
    cin>>emp1.sal;

    cout<<"---------------------"<<endl;
    cout<<"Enter second employee details: "<<endl;
    cout<<"Enter employee id: ";
    cin>>emp2.id;
    cout<<"Enter employee name: ";
    cin>>emp2.name;
    cout<<"Enter employee salary: ";
    cin>>emp2.sal;

    cout<<"---------------------"<<endl;
    cout<<"First employee deatails"<<endl;
    cout<<"employee id: "<<emp1.id<<endl;
    cout<<"employee name: "<<emp1.name<<endl;
    cout<<"employee salary: "<<emp1.sal<<endl;

    cout<<"---------------------"<<endl;
    cout<<"Second employee deatails"<<endl;
    cout<<"employee id: "<<emp2.id<<endl;
    cout<<"employee name: "<<emp2.name<<endl;
    cout<<"employee salary: "<<emp2.sal<<endl;
    
    return 0;


}
