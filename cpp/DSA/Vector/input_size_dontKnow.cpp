#include <iostream>
#include <vector>
#include <sstream>   // important!
using namespace std;

int main() {
    vector<int> arr;
    string line;
    
    getline(cin, line);   // read full line

    stringstream ss(line);  // convert string → stream
    int x;

    while (ss >> x) {   // extract integers
        arr.push_back(x);
    }

    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}