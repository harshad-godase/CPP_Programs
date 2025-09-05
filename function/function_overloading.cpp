#include<iostream>

using namespace std;

void fun();
void fun(int x);
void fun(double y);



int  main(){
    fun();
    fun(10);
    fun(12.10);

    return 0;

}

void fun(){
    cout<<"This is function overloading"<<endl;
}

void fun(int x){
    cout<<"Value of x is:"<<x<<endl;
}

void fun(double y){
      cout<<"Value of y is:"<<y<<endl;
}