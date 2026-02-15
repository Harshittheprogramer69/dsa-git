#include <iostream>
using namespace std;

int findPower(int base, int exponent) {
    if (exponent == 0)
        return 1;

    return base * findPower(base, exponent - 1);
}

int main() {
    int baseNumber, exponentNumber;

    cout << "Enter base: ";
    cin >> baseNumber;
    cout << "Enter exponent: ";
    cin >> exponentNumber;

    cout << "Result: " << findPower(baseNumber, exponentNumber) << endl;
    return 0;
}
