#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter size of array : ";
    cin >> size;

    int *arr = new int[size]; //dynamic array

    cout << "ELEMENTS OF ARRAY: " << endl;
    for(int i = 0; i < size; i++) {
        cout << "Enter elements["<< i << "]";
        cin >> arr[i];
    }

    cout << "Array elements are:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;    
    arr = nullptr;

    return 0;
}