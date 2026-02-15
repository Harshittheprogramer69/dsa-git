#include <iostream>
using namespace std;

int findSum(int number) {
    if (number == 0)
        return 0;

    return number + findSum(number - 1);
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Sum is: " << findSum(number) << endl;
    return 0;
}
