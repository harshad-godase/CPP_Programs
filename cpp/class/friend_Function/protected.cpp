#include<iostream>
using namespace std;

class Num{

    private:
    int num1;
    
    protected:
    int num2;
   

    public:
    // Construnctor
    Num(){
        num1 =10;
        num2 =20;
    }

    //Declaration of friend function
    friend void print_value(Num obj);
};

// Defination = Friend function

void print_value(Num obj){ // object
    cout<<"Num1 is : "<<obj.num1<<endl;
    cout<<"Num2 is : "<<obj.num2<<endl;
}

int main(){

   Num N;
   print_value(N);
    
    return 0;
}