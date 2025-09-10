#include<iostream>
using namespace std;

class Parent {
private:
    int len;

public:
    void setlen(int l) {
       len =l;
    }
    int getlen() {
        return len;
    }
};

class Child : public Parent { 
        private:
        int breadth;

        public:
      
        void setBreadth(int b) {
            breadth = b;
        }
 
         int Area() {
            return getlen()*breadth;
        }
};

int main() {
    int l, b;
    cout<<"Enter the length of rectangle:";
    cin>>l; 
    cout<<"Enter the breadth of rectangle:";
    cin>>b;

    Child ch;
    ch.setlen(l);
    ch.setBreadth(b);
    
    cout << "Area of rectangle is: " << ch.Area() << endl;
    return 0;
}
