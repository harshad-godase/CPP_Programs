#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Enter the num value:";
    cin>>num;
   
    cout<<"Even numbers are: ";
    for (int i = 1; i < num; i++)
    {
        if (i%2==0)
        {
            cout<<i<<"\t";
        }
        
    }
    return 0;
}