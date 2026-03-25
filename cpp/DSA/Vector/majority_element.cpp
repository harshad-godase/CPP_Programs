#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int>& nums){
    int n= nums.size();

    // sort 
    sort(nums.begin(), nums.end());

    // freq count
    int freq=1, ans=nums[0];

    for (int i = 0; i < n; i++)
    {
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans= nums[i];
        }
        
        if(freq>n/2){
            return ans;
        }
    }
    
}
int main(){
        vector<int>num={3,2,3,3};
        cout<<majority(num);
        return 0;
}