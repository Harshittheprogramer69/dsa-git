#include <iostream>
using namespace std;

int countDigits(int number) {
    if (number == 0)
        return 0;

    return 1 + countDigits(number / 10);
}

int main() {
    int inputNumber;
    cout << "Enter number: ";
    cin >> inputNumber;

    cout << "Digit count: " << countDigits(inputNumber) << endl;
    return 0;
}
