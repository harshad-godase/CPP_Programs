 // Q complex numbers, use constructor and operator overloading private 2 attributes (real and imag) ex c1(2,3) c2(3,4) output 5+7i

#include<iostream>
using namespace std;

class Complex{

    private:
    int real, imag;

    public:

    // Constructor
    
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }

    void print(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    // Operator overloading
    Complex operator + (Complex obj2){
        Complex obj3;
        obj3.real = real + obj2.real;
        obj3.imag = imag + obj2.imag;
        return obj3;
    }

};

int main(){

    Complex c1(2,3), c2(3,4), c3;
    c3 = c1 + c2;  // This will give error if we dont use operator overloading 
    c3.print();

    return 0;
}