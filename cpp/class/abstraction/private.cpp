#include<iostream>
using namespace std;

class Demo{

    private:
    int x,y;

    public:
      void add(){
        cout<<"Enter the two numbers:";
        cin>>x>>y;
        
        cout<<"Sum of two number is : "<<x+y<<endl;
      } 
};

int main(){

    Demo obj;
    obj.add();
    
    return 0;
}