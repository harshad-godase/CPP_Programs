#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Array size enter:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Array value enter:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    bool isSorted = true;

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            isSorted=false;
            break;
        }
    }

    if (isSorted)
    {
       cout<<"Sorted Array"<<endl;
    }else{
        cout<<"Unsorted"<<endl;
    }
    
    
    return 0;
}