#include<iostream>
using namespace std;

 int getSum(int a, int b) {

        while(b!=0){
            
        int carry = (a & b) <<1; // 

        a = a ^ b;

        b = carry;     
    }
    
    return a;
        
    }

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<getSum(a,b)<<endl;

    return 0;
}
