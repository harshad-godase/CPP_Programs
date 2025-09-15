#include<iostream>

using namespace std;

class Demo{

    private:
    int a;

    public:

    void setData(int x){
       a=x;
    }

    void print(){
        cout<<"Addition of object is :"<<a<<endl;
    }

    // Operator overloading

    Demo operator + (Demo obj2){    // 

        Demo obj3;  // creating new object

        obj3.a = a + obj2.a;
        // obj3.a = obj1.a + obj2.a;

        return obj3;
    }

};

int main(){
    Demo obj1,obj2, obj3;
    obj1.setData(10);
    obj2.setData(20);

    obj3 = obj1 + obj2; // This will give error if we dont use operator overloading 

    obj3.print();

    return 0;






}