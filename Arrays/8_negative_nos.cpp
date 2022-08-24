/*

	Move all negative numbers to beginning and positive to end.

	Examples : 

		Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
		Output: -12 -13 -5 -7 -3 -6 11

	https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
*/


#include<bits/stdc++.h>

using namespace std;

void arrange(int arr[], int n) {
	int j = 0;
	for(int i = 0 ; i < n ; i++) {
		
		if(arr[i] < 0) {
		
			if(i != j) {
			
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
			j++;
		}
	}
}

	int main() {
		
		int array[] = {3, 4, -3, -4};
		int size = sizeof(array)/sizeof(array[0]);
		
		arrange(array, size);
		
		for(int i = 0 ; i < size ; i++)
			cout<<array[i]<<" ";
			
		return 0;
	}
