#include<iostream>
using namespace std;

class Demo{

    public:

    int operation(int a,int b){
        return a*b;
    }

    double operation(double a,double b){
        return a/b;
    } 


};

int main(){

   Demo obj;

  int a, b;
  double x, y;

  cout << "Enter two integer Values :" << endl;
  cin >> a >> b;

  cout << "Enter two double Values :" << endl;
  cin >> x >> y;

  cout << "Multiplication :" << obj.operation(a, b) << endl;
  cout << "Division :" << obj.operation(x, y) << endl;

  return 0;


}