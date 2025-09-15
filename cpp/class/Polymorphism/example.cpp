#include<iostream>
using namespace std;

class Demo{

    public:

    void value(){
        cout<<"This is polymorphism/function overloading"<<endl;
    
    }

    void value(int a){
        cout<<"Value of a is:"<<a<<endl;
    
    }

    void value(int a, double b){
         cout<<"Value of a is:"<<a<<endl;
          cout<<"Value of b is:"<<b<<endl;
    
    }

    void value(char a){
         cout<<"Value of a is:"<<a<<endl;
        
    }
};

int main(){
    Demo obj;

    obj.value();
    obj.value(10);
    obj.value(10,20.5);
    obj.value('H');
    return 0;
}