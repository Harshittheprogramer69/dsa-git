#include <iostream>
using namespace std;

int thirdLargest(int arr[], int n) {
    if (n < 3) {
        cout << "Array must have at least 3 elements";
        return -1;
    }

    int first, second, third;

    // Initialize first, second, third
    first = second = third = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != first && arr[i] != second) {
            third = arr[i];
        }
    }

    return third;
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Third largest element is " << thirdLargest(arr, n);
    return 0;
}

