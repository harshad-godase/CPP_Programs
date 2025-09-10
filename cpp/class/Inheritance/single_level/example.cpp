#include<iostream>
using namespace std;

class Parent{
   
    public:
    int p_amt=100;
};

class Child : public Parent{

    private:
    int c_amt=900;

    public:
    void c_print(){

       int  res = p_amt + c_amt;

       if(res>=1000) cout<<"You can go to movie"<<endl;
       else cout<<"Plan Failed"<<endl;
    }
};


int main(){

    Child ch;
    ch.c_print();

    return 0;
}