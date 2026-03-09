#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    vector<int>vec={3,-4,5,4,-1,7,-8};
    int n= sizeof(vec);
    
    int currSum=0, maxSum=INT_MIN;

    for (int val : vec)
    {
        currSum+=val;
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }

    cout<<maxSum<<endl;
    
    
}