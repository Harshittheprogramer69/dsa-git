#include <iostream>
using namespace std;

class CAR {
    private:
        int Car_number; // Private Number
    public:
        string Car_model;
        string Car_Brand;
        void Details() {
            Car_number++;
            cout << "Car Number: " << Car_number << endl;
            cout << "Car Model: " << Car_model << endl;
            cout << "Car Brand: " << Car_Brand << endl;
        }
};

int main() {
    CAR spresso;
    spresso.Car_Brand = "MARUTI";
    spresso.Car_model = "VXI";
    spresso.Details();

    return 0;
}