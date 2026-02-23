#include <iostream>
using namespace std;

class BASE_1 {
public:
    BASE_1(){
        cout << "This is Base Class." << endl;
    }
};

class BASE_2 : public BASE_1{
public:
    BASE_2() {
        cout << "This is another Base Class." << endl;
    }
};

class A : public BASE_2 {
public:
    A() {
        cout << "This is Derived Class." << endl;
    }
};

int main() {
    A obj;

    return 0;
}