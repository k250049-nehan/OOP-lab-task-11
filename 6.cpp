#include <iostream>
using namespace std;

class InvalidAgeException {};
class InvalidSalaryException {};
class InvalidHeightException {};

int main() {
    try {
        int age;
        double salary, height;

        cout << "Enter age: ";
        cin >> age;
        if (age <= 0 || age >= 120)
            throw InvalidAgeException();

        cout << "Enter salary: ";
        cin >> salary;
        if (salary <= 0)
            throw InvalidSalaryException();

        cout << "Enter height: ";
        cin >> height;
        if (height <= 0)
            throw InvalidHeightException();

        cout << "All inputs are valid!" << endl;
    }
    catch (InvalidAgeException) {
        cout << "InvalidAgeException caught: Age must be between 1 and 119" << endl;
    }
    catch (InvalidSalaryException) {
        cout << "InvalidSalaryException caught: Salary must be positive" << endl;
    }
    catch (InvalidHeightException) {
        cout << "InvalidHeightException caught: Height must be positive" << endl;
    }

    return 0;
}
