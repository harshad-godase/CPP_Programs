#include<iostream>

using namespace std;

float diameter(float radius);
float area(float radius);
float circumference(float radius);

int main(){

    float radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;

    cout<<"Diameter of circle is: "<<diameter(radius)<<endl;
    cout<<"Area of circle is: "<<area(radius)<<endl;
    cout<<"Circumference of circle is: "<<circumference(radius)<<endl;

    return 0;
    
}

float diameter(float radius){
    return 2*radius;
}
float area(float radius){
    return 3.14*radius*radius;
}
float circumference(float radius){
    return 2*3.14*radius;
}