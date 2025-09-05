#include<iostream>

using namespace std;

int main(){

    int num;
    cout<<"Enter the number of elements: ";
    cin>>num;

    int arr[num];
    cout<<"Enter "<<num<<" elements in array:"<<endl;

    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;

    for (int i = 0; i < num; i++)
    {
        sum=sum+arr[i];
    }

    cout<<"Sum of array elements is: "<<sum<<endl;
    return 0;
}