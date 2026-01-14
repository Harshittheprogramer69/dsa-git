#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str = "harshit";
    unordered_map<char, int> CharCount;
    int count = 0;
    for (char c : str) {
        CharCount[c]++;
        if (CharCount[c] == 2) {
            count++;
        }
    }
    cout << "Number of characters that appear more than once: " << count << endl;
    return 0;
}