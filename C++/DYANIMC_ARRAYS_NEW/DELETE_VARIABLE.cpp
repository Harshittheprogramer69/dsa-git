#include <iostream>
using namespace std;

int main() {
    int *p = new int;   // allocate memory
    *p = 100;

    cout << "Value = " << *p << endl;

    delete p;           // free memory
    p = nullptr;        // avoid dangling pointer

    return 0;
}