#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[6] = {2,1,5,63,3,9};
	int n = 6;
	for(int i=0; i<n-1; i++ ){
	    int minIndex = i;
	    for (int j=i+1; j<n; j++){
	        if (arr[minIndex]>arr[j])
	            minIndex=j;
	    }
	    int temp = arr[i];
	    arr[i]=arr[minIndex];
	    arr[minIndex]=temp;
	}
	for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Time Complexity: O(n^2) in worst case and O(n^2) in best case
// Space Complexity: O(1) as we are using only constant space