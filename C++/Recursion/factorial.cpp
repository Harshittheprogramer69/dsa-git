#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    return num*factorial(num-1);
}

int main() {
    int number, factorialValue;

    cout << "Enter number for factorial: ";
    cin >> number;

    factorialValue = factorial(number);

    cout << "Factorial of number " << number << " is " << factorialValue << endl;
    return 0;
}