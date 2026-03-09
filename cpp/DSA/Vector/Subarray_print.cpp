#include<iostream>
#include<vector>
using namespace std;

int main(){

 int arr[]={1,4,8,6};
 int n=4;

 for (int st = 0; st < n; st++)
 {
    for (int end = st; end < n; end++)
    {
        for (int i = st; i<=end; i++)
        {
            cout<<arr[i];
        }
        cout<<" ";
        
    }
      cout<<endl;
    
 }
 
    
}