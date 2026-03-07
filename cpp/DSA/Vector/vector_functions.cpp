#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>vec ={1,5,9,8};
cout<<"size:"<<vec.size()<<endl;

vec.push_back(10);
 
for (int val : vec)
    {
        cout<<val<<endl;
    }

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    cout<<vec.at(3)<<endl;
    
}
