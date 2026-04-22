#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int arr1[] = {10, 20, 5, 30, 25};
    int size1 = 5;

    cout << "Maximum: " << findMax(arr1, size1) << endl;

    string arr2[] = {"Apple", "Mango", "Banana", "Peach"};
    int size2 = 4;

    cout << "Maximum: " << findMax(arr2, size2) << endl;

    return 0;
}
