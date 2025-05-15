#include <iostream>
using namespace std;

void separateZerosAndOnes(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Move left forward if already 0
        while (arr[left] == 0 && left < right)
            left++;
        // Move right backward if already 1
        while (arr[right] == 1 && left < right)
            right--;

        // Swap if left is 1 and right is 0
        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    separateZerosAndOnes(arr, size);

    cout << "Separated array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
