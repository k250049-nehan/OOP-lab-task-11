#include <iostream>
using namespace std;

int main() {
    int num, den;

    try {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;

        if (den == 0)
            throw "Division by zero is not allowed!";

        cout << "Result: " << num / den << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
