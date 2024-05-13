#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool areOccurrencesUnique(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for (int i = 1, count = 1; i < arr.size(); ++i) {
        if (arr[i] == arr[i - 1]) {
            ++count;
            if (i == arr.size() - 1 && count != 1) {
                return false;
            }
        } else {
            if (count != 1) {
                return false;
            }
            count = 1;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    vector<int> arr2 = {1, 2};
    vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    cout << boolalpha << areOccurrencesUnique(arr1) << endl;
    cout << boolalpha << areOccurrencesUnique(arr2) << endl;
    cout << boolalpha << areOccurrencesUnique(arr3) << endl;

    return 0;
}
