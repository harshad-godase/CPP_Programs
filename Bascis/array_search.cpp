#include<iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements in array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array Elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";   
    }
    cout << endl;

    int search;
    cout << "Enter the element for search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Element not found in array" << endl;
    } else {
        cout << "Element found in array" << endl; 
    }

    return 0;
}
