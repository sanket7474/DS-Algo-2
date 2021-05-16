/*

	Move all negative numbers to beginning and positive to end.

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
		
		int array[] = {-1, -2, -3, -4};
		int size = sizeof(array)/sizeof(array[0]);
		
		arrange(array, size);
		
		for(int i = 0 ; i < size ; i++)
			cout<<array[i]<<" ";
			
		return 0;
	}
