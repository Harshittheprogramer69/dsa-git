#include <iostream>

using namespace std;

class Base {
    public: 
        virtual void show() {
            cout << "THIS IS DONE IN BASE CLASS.\n";
        }
};

class derivied : public Base {
    public:
        void show() override {
            cout << "This is done in derivied class.\n";
        }
};

int main() {
    Base a;
    derivied b;

    a.show();
    b.show();

    return 0;
}