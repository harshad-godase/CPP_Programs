#include<iostream>
using namespace std;

class Base1{
    protected:
    int a;
    public:
    void set_a(int x){
        a=x;
    }

};

class Base2{

    protected:
    int b;


    public:

    void set_b(int y){
        b=y;
       
    }

};

class Derived : public Base1, public Base2{

    public:

    void max(){
       if (a>b)
       {
         cout<<"NUM a is maximum number: "<<a<<endl;
       }
       else{
        cout<<"NUM b is maximum number: "<<b<<endl;
       }
       
    }

};

int main(){

    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value b:";
    cin>>b;

    Derived obj;
    obj.set_a(a);
    obj.set_b(b);
    obj.max();
   
    return 0;

}