#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int mileage;

    // Method to increase the mileage
    void drive(int distance) {
        mileage += distance;
    }

    // Method to display the car's information
    void showData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << mileage << "km" << endl;
    }
};

int main() {
    Car myCar;

    // Get car details from the user
    cout << "Enter the brand of the car: ";
    cin >> myCar.brand;
    cout << "Enter the model of the car: ";
    cin >> myCar.model;
    cout << "Enter the initial mileage of the car: ";
    cin >> myCar.mileage;

    // Display the initial car data
    myCar.showData();

    int distance;
    cout << "Enter the distance to drive: ";
    cin >> distance;

    // Increase the mileage by the entered distance
    myCar.drive(distance);

    // Display the updated car data
    myCar.showData();

    return 0;
}
