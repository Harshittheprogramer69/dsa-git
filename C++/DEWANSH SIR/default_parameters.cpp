#include <iostream>
using namespace std;

void para(int *a, int b = 12) {
    *a = *a +b;
}

int main() {
    int number = 10;
    para(&number);
    cout << number;
    return 0;
}