#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    double sal;

    void fun(){// Method Definition
        cout<<"This is Inside class method/function"<<endl;
    }
};

int main(){
    employee emp;

    emp.fun();

    return 0;
   

}
