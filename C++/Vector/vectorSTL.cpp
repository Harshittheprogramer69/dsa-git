#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    numbers.push_back(0);

    for(int i = 1; i <= 10; i++) {
        numbers.push_back(i);
    }

    // for(int number:numbers)
    // {
    //     cout << number << endl;  EASY WAY
    // }

    for(auto it = numbers.begin(); it!=numbers.end(); it++) { // HARD WAY
        // cout << it << endl; not allowed
        cout << *it << endl; // value of element
        cout << &it << endl; // address of iterator
        cout << &(*it) << endl; // address of the element
    }
    return 0;
}