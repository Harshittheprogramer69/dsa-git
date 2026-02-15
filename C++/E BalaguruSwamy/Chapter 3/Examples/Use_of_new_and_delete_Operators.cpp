// Example 3.2
#include <iostream>
using namespace std;

int main() {
    int *arr;
    int size;

    cout << "Enter the size of integer array: ";
    cin >> size;

    cout << "Creating an array of size " << size << "...";
    arr = new int[size];
    
    cout <<  "\nDynamic allocation of memory for array arr is successful.";
    delete arr;

    return 0;
}