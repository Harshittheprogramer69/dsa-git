#include<iostream>
#include <unordered_map>
using namespace std;

int main() {
    int array[] = {1,2,3,4,4,3,2,13,2,1};
    unordered_map<int,int> freq;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        freq[array[i]]++;
    }

    cout << "Numbers with even occurrences:" << endl;
    for(auto &p : freq) {
        if(p.second % 2 == 0) {
            cout << p.first << endl;
        }
    }
    
    return 0;
}