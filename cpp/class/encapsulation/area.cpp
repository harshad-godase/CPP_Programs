#include <iostream>

using namespace std;

class AreaofRect
{
     private:
     float length, breadth;

     public:
     void setValue(float x, float y){
          length = x;
          breadth = y;
    }
     float getArea(){
       return length * breadth;
    }
      float getlen(){
         return length;
    }
      float getbreadth(){
         return breadth;
    }    
};

int main()
{

  AreaofRect obj;

  obj.setValue(12.5, 7);

  cout << "Length is : " << obj.getlen() << endl;
  cout << "breadth is : " << obj.getbreadth() << endl;

  cout << "Area of Rectangle : " << obj.getArea() << endl;
}