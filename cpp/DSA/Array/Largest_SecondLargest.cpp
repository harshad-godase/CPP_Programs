#include<iostream>
#include<climits>
using namespace std;


int main(){

    int n;
    cin>>n;

    
    if (n<2)
    {
        cout<<"Second largest no found"<<endl;
        return 0;
    }
    

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

   
    int largest = arr[0];
    int secondLargest= INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if(arr[i]>largest){

            secondLargest=largest;

            largest=arr[i];
                
        }else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }

    if(secondLargest==INT_MIN){
        cout<<"Second Largest Not Found"<<endl;
    }else
    {
        cout<<"Largest no is= "<<largest<<endl;
        cout<<"Second Largest no is= "<<secondLargest<<endl;
    }
    
    return 0;
    
}