#include<iostream>
using namespace std;

class Demo{

    private:
    int x,y;

    public:
    void MAX();
    
};

void Demo::MAX(){
     
        cout<<"Enter the two numbers:";
        cin>>x>>y;
      
        if (x>y)
        {
           cout<<"Maximum number is :"<<x<<endl;
        }else{
           cout<<"Maximum number is :"<<y<<endl; 
        }
        
}

int main(){

    Demo obj;
    obj.MAX();
    
    return 0;
}