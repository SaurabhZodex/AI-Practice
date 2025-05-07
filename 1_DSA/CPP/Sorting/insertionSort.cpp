#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[6] = {2,1,5,63,3,9};
	int n = 6;
	for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
	for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;
}

// Time Complexity: O(n^2) in worst case and O(n) in best case
// Space Complexity: O(1) as we are using only constant space