#include <iostream>
using namespace std; // Use the std namespace
// Function to calculate the sum of elements in an array
int sumOfElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sum = sumOfElements(arr, size);
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
