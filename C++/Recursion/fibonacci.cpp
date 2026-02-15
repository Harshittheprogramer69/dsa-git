#include <iostream>
using namespace std;

int findFibonacci(int position) {
    if (position == 0) return 0;
    if (position == 1) return 1;

    return findFibonacci(position - 1) + findFibonacci(position - 2);
}

int main() {
    int position;
    cout << "Enter position: ";
    cin >> position;

    cout << "Fibonacci value: " << findFibonacci(position) << endl;
    return 0;
}
