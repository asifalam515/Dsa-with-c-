#include <bits/stdc++.h>
using namespace std;

int main() {
    int *arr = new int[5];
    int *newArr = new int[7];
    
    // Input to the array
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Copy elements from arr to newArr
    for(int i = 0; i < 5; i++) {
        newArr[i] = arr[i];
    }
    
    // Assign new values to the remaining positions
    newArr[5] = 23;
    newArr[6] = 34;

    // Output the elements of newArr
    for(int i = 0; i < 7; i++) {
        cout << newArr[i] << endl;
    }

    // Clean up dynamically allocated memory
    delete[] arr;
    delete[] newArr;

    return 0;
}
