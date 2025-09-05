#include<iostream>
using namespace std;

int operation(int a, int b);
double operation(double a, double b);

int main(){

    int num1,num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    cout << "Addition of integers: " << operation(num1, num2) << endl;

    double d1, d2;
    cout << "Enter two doubles: ";
    cin >> d1 >> d2;

    cout << "Division of doubles: " << operation(d1, d2) << endl;

    return 0;
}

int operation(int a, int b){
    return a+b;
}

double operation(double a, double b){
    return a/b;
}