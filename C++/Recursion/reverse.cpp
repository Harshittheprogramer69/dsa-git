#include <iostream>
using namespace std;

int reverseNumber(int number, int reversedValue) {
    if (number == 0)
        return reversedValue;

    return reverseNumber(number / 10, reversedValue * 10 + number % 10);
}

int main() {
    int inputNumber;
    cout << "Enter number: ";
    cin >> inputNumber;

    int reversed = reverseNumber(inputNumber, 0);

    cout << "Reversed number: " << reversed << endl;
    return 0;
}
