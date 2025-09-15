#include<iostream>
using namespace std;

int main(){
    double nume, deno;
    cout<<"Enter numerator and denominator: "<<endl;
    cin>>nume>>deno;

    try
    {
        if(deno==0){
            throw "can't divide by zero";
        }
        else{
            cout<<"Division is: "<<nume/deno<<endl;
        }
    }
    catch(const char* warning)
    {
        cerr<<warning<<endl;
    }
    return 0;
    
}