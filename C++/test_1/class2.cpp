#include <iostream>
using namespace std;

class work {
    public:
        work() { // constructor
            cout << "Work started" << endl;
        }
        ~work() {
            cout << "Work done" << endl;
        }
};

int main() {

    return 0;
}