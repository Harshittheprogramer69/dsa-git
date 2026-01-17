#include <iostream>
using namespace std;

enum Status {
    AVAILABLE,
    TEACHING,
    ON_LEAVE
};

class Employee {
    protected:
        string name;
        int age;
        int work_hours;

    public:
        Employee(string name, int age) {
            this->name = name;
            this->age = age;
            work_hours = 0;
        }

        virtual void work() = 0;          
        virtual double calculateSalary() = 0;

        void showBasicInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Work Hours: " << work_hours << endl;
        }
};

class Teacher : public Employee {
    private:
        string school;
        string subject;
        Status status;
        double hourly_rate;

    public:
        Teacher(string name, int age, string school, string subject)
            : Employee(name, age) {

            this->school = school;
            this->subject = subject;
            hourly_rate = 50000.0;
            status = AVAILABLE;

            if (age < 25) {
                cout << " Teacher age must be at least 25!" << endl;
            } else {
                cout << " Teacher registered successfully." << endl;
            }
        }

        void teach() {
            if (status == ON_LEAVE) {
                cout << name << " is on leave." << endl;
                return;
            }

            status = TEACHING;
            work_hours++;
            cout << name << " is teaching " << subject << "." << endl;
        }

        void work() override {
            if (work_hours >= 6) {
                status = AVAILABLE;
                cout << name << " completed today's workload." << endl;
            } else {
                teach();
            }
        }

        double calculateSalary() override {
            return work_hours * hourly_rate;
        }


        void applyLeave() {
            status = ON_LEAVE;
            cout << name << " has applied for leave." << endl;
        }

        void returnFromLeave() {
            status = AVAILABLE;
            cout << name << " returned from leave." << endl;
        }

        void showDetails() {
            showBasicInfo();
            cout << "School: " << school << endl;
            cout << "Subject: " << subject << endl;
            cout << "Status: " << getStatus() << endl;
            cout << "Salary: " << calculateSalary() << endl;
        }

        string getStatus() {
            if (status == AVAILABLE) return "Available";
            if (status == TEACHING) return "Teaching";
            return "On Leave";
        }
};

int main() {
    Teacher t1("Pratham", 28, "ABC Public School", "Computer Science");

    t1.work();
    t1.work();
    t1.work();

    t1.applyLeave();
    t1.work();

    t1.returnFromLeave();
    t1.work();
    t1.work();
    t1.work();

    cout << "\n--- Teacher Report ---\n";
    t1.showDetails();

    return 0;
}