#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Enter the num value:";
    cin>>num;

    int fact=1;
    
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is: "<<fact<<endl;
    return 0;
    

}