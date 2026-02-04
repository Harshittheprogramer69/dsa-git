#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int count0 = 0, count1 = 0;

    cout << "Enter array elements (0 or 1 only):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
    }

    cout << "\nNumber of 0s: " << count0 << endl;
    cout << "Number of 1s: " << count1 << endl;

    return 0;
}