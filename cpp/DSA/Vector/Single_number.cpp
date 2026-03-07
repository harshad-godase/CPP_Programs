#include<iostream>
#include<vector>
using namespace std;


int singlenum(vector<int>& num){

    int ans=0;

    for (int val : num)
    {
        ans = ans ^ val; 
    }

    return ans;
    

}
int main(){
    
    vector<int>number = {5,4,2,4,2};

    cout<<singlenum(number);

    return 0;
}