#include <iostream>
using namespace std;

int main() {
    int *p = new int;   

    *p = 50;            // storing value
    cout << "Value = " << *p << endl;
    
    delete p;           // free memory
    p = nullptr;        
    
    cout << "Value = " << *p << endl;
    return 0;
}