#include<iostream>
using namespace std;

class Base{

    protected:
    int length,breadth;
    float base,height;

    public:
    void set_R(int l, int b){
       length=l;
       breadth=b;
    }

    public:
    void set_T(float b, float h){
        base=b,
        height=h;
    }
};

class R_area: public Base{
    public:
    int Rectangle(){
        return  length * breadth;
    }
};

class T_area:public Base{

    public:
    float Triangle(){
       return 0.5*base*height;
    }
};

int main(){
    int l, b;
    float B, h;

    // Rectangle

    R_area rect; 

    cout << "Enter the length of Rectangle: ";
    cin >> l;
    cout << "Enter the breadth of Rectangle: ";
    cin >> b;

    rect.set_R(l, b); // Set value for rectangle
    cout << "Area of Rectangle is: " << rect.Rectangle() << endl;

    // Triangle

    T_area tri;

    cout << "Enter the base of Triangle: ";
    cin >> B;
    cout << "Enter the height of Triangle: ";
    cin >> h;

    tri.set_T(B, h); // set value for triangle
    cout << "Area of Triangle is: " << tri.Triangle() << endl;

    return 0;
    
   }
