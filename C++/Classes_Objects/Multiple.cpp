#include <iostream>
using namespace std;

class BASE_1 {
public:
    void work() {
        cout << "This is Base Class." << endl;
    }
};

class BASE_2 {
public:
    void done() {
        cout << "This is another Base Class." << endl;
    }
};

class A : public BASE_1, public BASE_2 {
public:
    void DOING() {
        cout << "This is Derived Class." << endl;
    }
};

int main() {
    A obj;

    obj.work();   
    obj.done();   
    obj.DOING();  

    return 0;
}