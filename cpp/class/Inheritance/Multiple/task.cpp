#include<iostream>
using namespace std;

class Base1{
    private:
    int a,b;

    protected:
    int sum(){
       return a+b;
    }

    public:
    void set_sum(int x, int y){
        a=x, b=y;
    }
};

class Base2{
    private:
    int a,b;

    protected:
    int sub(){
       return a-b;
    }

    public:
    void set_sub(int x, int y){
        a=x, b=y;
    }

};

class Base3{
    private:
    int a,b;

    protected:
    int mul(){
       return a*b;
    }

    public:
    void set_mul(int x, int y){
        a=x, b=y;
    }
};

class Base4{
    private:
    float a,b;

    protected:
    int div(){
       return a/b;
    }

    public:
    void set_div(int x, int y){
        a=x, b=y;
    }
};

class Derived : public Base1, public Base2,public Base3,public Base4 {

    public:

    void print(){
        cout<<"Sum of two number is: "<<sum()<<endl;
        cout<<"Sub of two number is: "<<sub()<<endl;
        cout<<"Mul of two number is: "<<mul()<<endl;
        cout<<"Div of two number is: "<<div()<<endl;
        
    }

};

int main(){

    Derived obj;

    obj.set_sum(10,20);
    obj.set_sub(20,10);
    obj.set_mul(10,20);
    obj.set_div(20,2);

    obj.print();

    return 0;

}