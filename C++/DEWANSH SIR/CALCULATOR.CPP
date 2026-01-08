#include <iostream>
using namespace std;

int main() {
    int first,second;
    char oper;
    cout << "ENTER NUMBER : ";
    cin >> first;
    cout << "ENTER NUMBER : ";
    cin >> second;
    cout << "ENTER OPERATOR : ";
    cin >> oper;

    switch (oper) {
            case '+': 
            cout << (first + second) << endl;
            break;
            case '-':
            cout << (first - second) << endl;
            break;
            case '*':
            cout << (first * second) << endl;
            break;
            case '/':
            if (second != 0){
                cout << (first / second) << endl;}
            else { 
                cout << "Division by zero error" << endl;}
            break;
            default:
            cout << "invalid response" << endl;
        }
    return 0;
}