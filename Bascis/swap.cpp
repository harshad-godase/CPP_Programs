#include<iostream>

using namespace std;

int main(){

    int a, b, temp;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Before swapping: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    int *p1 = &a;
    int *p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout<<"After swapping: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
    
}