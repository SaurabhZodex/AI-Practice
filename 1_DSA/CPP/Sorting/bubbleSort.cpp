#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[6] = {2,1,5,63,3,9};
	int n = 6;
	bool swapped = false;
	for(int i=0; i<n-1; i++ ){
	    for(int j=0; j<n-i-1; j++){
	        if (arr[j+1]<arr[j]){
        	    int temp = arr[j+1];
        	    arr[j+1]=arr[j];
        	    arr[j]=temp;
        	    swapped = true;
	        }
	    }
	    if (swapped==false){
	        break;
	    }
	}
	for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// Time Complexity: O(n^2) in worst case and O(n) in best case
// Space Complexity: O(1) as we are using only constant space