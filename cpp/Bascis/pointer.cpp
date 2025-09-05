#include<iostream>

using namespace std;

int main(){

    int num=10;
    int *ptr;

    ptr=&num;

    cout<<"Num valye is:"<<num<<endl;
    cout<<"Num address is:"<<&num<<endl;

    cout<<"pointer valye is:"<<ptr<<endl;
    cout<<"Num address is:"<<&ptr<<endl;
    cout<<"Derefrencing of ptr is:"<<*ptr<<endl;

    *ptr=1000;
    cout<<"Updated value of num is"<<num<<endl;
    
    return 0;
}