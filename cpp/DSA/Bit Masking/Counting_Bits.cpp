#include<iostream>
#include<vector>
using namespace std;


 vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i >> 1] + (i & 1);
        }

        return ans;
    }
int main(){
    int n=5;
    vector<int> ans= countBits(n);
    for(int i: ans){
        cout<<i<<" ";
    }
    return 0;
}