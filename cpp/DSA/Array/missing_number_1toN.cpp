#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n-1);
    int sum=0;

    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    int totalsum= n*(n+1)/2;
    int missing = totalsum-sum;

    cout<<missing<<endl;

    return 0;
    

}