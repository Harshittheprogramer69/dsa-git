#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    for(int i = 1; i<=10; i++) {
        numbers.push_back(i);
    }

    numbers.insert(numbers.begin() + 5, 88);
    cout << "After Insertion" << endl;
    
    for(auto number: numbers) {
        cout << number << endl;
    }
    
    numbers.erase(numbers.begin() + 5);
    cout << "After Deletion" << endl;


    for(auto number: numbers) {
        cout << number << endl;
    }
    return 0;
}