/*This PROGRAM IS GONNA BE IN 2 PARTS
2.4[b] Question : Write a program to read the values of a, b, c and display the value of x, where
                                            x = a / b - c
Test your program to for following values:
[a] a = 300, b = 70, c = 70
*/

#include <iostream>
using namespace std;

int main() {
    float a ,b ,c, x;

    a = 300;
    b = 70;
    c = 70;

    x = (a / b) - c;
    cout << x << endl;

    return 0;
}