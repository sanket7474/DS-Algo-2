/*

	Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/

#include<bits/stdc++.h>

using namespace std;

	void leftRotate(int arr[], int size, int d) {
		
		for(int i = 0 ; i < d ; i++) {
			
			int temp = arr[0];
			for(int j = 0 ; j < size - 1 ; j++) {
				
				arr[j] = arr[j+1];
			}
			arr[size - 1] = temp;
		}
	}
	int main() {
		
		int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
		int n = sizeof(array) / sizeof(array[0]);
		
		leftRotate(array, n, 2);
		
		for(int i = 0 ; i < n ; i++) 
			cout<<array[i]<<" ";
		return 0;
	}
