#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    for(int i = 1; i <= 10; i++) {
        numbers.push_back(i);
    }

    cout << "SIZE : " << numbers.size() << endl; 
    cout << "MAX SIZE : " << numbers.max_size() << endl;
    cout << "CAPACITY : " << numbers.capacity() << endl;
    numbers.resize(5);
    cout << "Size : " << numbers.size() << endl;
    
    if(numbers.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;        
    }

    cout << "Element 0 is " << numbers[0] << endl; 
    cout << "Front : " << numbers.front() << endl;
    cout << "Back : " << numbers.back() << endl;
    numbers.clear();

    cout << "Size : " << numbers.size() << endl;
    return 0;
}