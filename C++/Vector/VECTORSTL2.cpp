#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    numbers.push_back(0); 

    for(int i = 1; i <= 10; i++) {
        numbers.push_back(i);
    }

    auto it = numbers.begin();
    cout << *(it + 5) << endl; // Expected Answer is 4
    
    return 0;
}