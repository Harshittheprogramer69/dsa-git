#include <iostream>
using namespace std;

class student {
    private:
        string name;
        float marks;
        int roll_number;
    public:
        void setmarks(float mark) {
            marks = mark;
        }
        void setname(string names) {
            name = names;
        }
        void setRoll(int num) {
            roll_number = num;
        }

        float getmarks() {
            return marks;
        }
        string getname() {
            return name;
        }
        int getRoll() {
            return roll_number;
        }
};

int main() {
    student stu1;
    stu1.setmarks(10.23);
    stu1.setname("nishant");
    stu1.setRoll(10);

    cout << stu1.getmarks() << endl;
    cout << stu1.getname() << endl;
    cout << stu1.getRoll() << endl;
    return 0;
}