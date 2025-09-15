#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter your age to check Eligibility: "<<endl;
    cin>>age;

    try
    {
        if(age>=18){
            cout<<"You are Eligible to vote"<<endl;
        }else{
            throw age;
        }
    }
    catch(int x)
    {
        cerr << "Error:Your age is:" <<x<<endl;
        cerr << "You are eligible to vote"<<endl;
    }

    return 0;
    
}