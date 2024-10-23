#include <iostream>

using namespace std;

void findSubarrayWithSum(int arr[], int n, int S) {
    // Your code here

    // If no subarray is found
    cout << "No subarray with the given sum found." << endl;
}

int main() {
    int arr[] = {23, 17, 11, 2, 29, 40, 41, 39, 26, 10, 42, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = -1;
    cout << "Enter the target sum: ";
    cin >> target;
    findSubarrayWithSum(arr, n, target);

    return 0;
}