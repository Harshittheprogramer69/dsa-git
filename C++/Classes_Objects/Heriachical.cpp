#include <iostream>
using namespace std;

class BASE {
public:
    BASE(){
        cout << "This is Base Class." << endl;
    }
};

class A : public BASE{
public:
    A() {
        cout << "This is Derived 1st Class." << endl;
    }
};

class B : public BASE {
public:
    B() {
        cout << "This is Derived 2nd Class." << endl;
    }
};

int main() {
    A obj;
    B obj2;

    return 0;
}