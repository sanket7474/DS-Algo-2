#include<bits/stdc++.h>

using namespace std;

	int getLargestSum(int arr[], int size) {
		
		int max_so_far = INT_MIN;
		int max_ending_here = 0;
		
		for(int i = 0 ; i < size ; i++) {
			
			max_ending_here += arr[i];
			
			if(max_ending_here < 0)
				max_ending_here = 0;
				
			if(max_so_far < max_ending_here)
				max_so_far = max_ending_here;
			
		}
		return max_so_far;
	}
	int main() {
		
		int array[] = {-2, -3, 4, -1, -2, 1, 5, -3};
		int size = sizeof(array)/sizeof(array[0]);
		
		cout<<getLargestSum(array, size);
		
		return 0;
	}
