#include <iostream>
using namespace std;

class Student {
    protected: 
        int roll_no;
        string name;
    public:
        Student(string name,int roll_no) {
            set_details(name,roll_no);
            cout << "Student via " << name << " and roll number " << roll_no << " is Created." << endl;
        }

        void set_details(string name, int roll_no) {
            this->name = name;
            this->roll_no = roll_no;
        }

        void introduce() const {
            cout << "Hello! My name is " << name << " and my roll number is " << roll_no << endl;
        }

        void getRoll(string name) const {
            cout << name << " roll number is " << roll_no << endl; 
        }

};

int main() {
    
    Student student1("Harshit Khanna", 12);
    Student student2("Pratham jangra", 27);
    Student student3("Nishant", 22);

    student1.introduce();
    student2.introduce();
    student3.introduce();

    return 0;
}