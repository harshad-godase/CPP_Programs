#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter the num1 value:"<<endl;
    cin>>a;
    cout<<"Enter the num1 value:"<<endl;
    cin>>b;
    cout<<"Enter the num1 value:"<<endl;
    cin>>c;

    if (a>=b&&a>=c)
    {
        cout<<"maxium number is:"<<a<<endl;
    }
    else if (c>=a&&c>=b)
    {
        cout<<"maxium number is:"<<c<<endl;    
    }
    else 
    {
        cout<<"maxium number is:"<<b<<endl;
    }

    return 0;
}