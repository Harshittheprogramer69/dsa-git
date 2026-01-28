#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int first = 10;
    int second = 20;

    int Sum = sum(first,second);

    cout << Sum;
    return 0;
}