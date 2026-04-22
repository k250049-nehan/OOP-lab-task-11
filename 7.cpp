#include <iostream>
using namespace std;

class OutOfBoundsException {};

template <typename T>
class SmartArray {
    T* arr;
    int size;

public:
    SmartArray(int s) {
        size = s;
        arr = new T[size];
    }

    void input() {
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    T& operator[](int index) {
        if (index < 0 || index >= size)
            throw OutOfBoundsException();
        return arr[index];
    }

    ~SmartArray() {
        delete[] arr;
    }
};

int main() {
    SmartArray<int> arr(5);

    cout << "Array size: 5\nEnter elements: ";
    arr.input();

    try {
        cout << "Accessing index 2: " << arr[2] << endl;

        cout << "Accessing index 5: ";
        cout << arr[5] << endl;
    }
    catch (OutOfBoundsException) {
        cout << "OutOfBoundsException caught: Invalid index access attempted!" << endl;
    }

    return 0;
}
