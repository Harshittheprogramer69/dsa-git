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

    for(auto it = numbers.cbegin(); it!=numbers.cend(); it++) { // HARD WAY
        // *it = 20; NOT ALLOWED HELPS IN THINGS PEOPLE CANT CHANGE IF WE HAVE MANY PROGRAMMERS IN ONE PORGRAM
        cout << *it << endl;
    }
    return 0;
}