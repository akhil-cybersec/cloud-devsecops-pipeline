#include <iostream>
using namespace std;

int findAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i <= size; i++) {  // BUG HERE (maybe)
        sum += arr[i];
    }

    return sum / size;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int avg = findAverage(arr, 5);

    cout << "Average: " << avg << endl;

    return 0;
}