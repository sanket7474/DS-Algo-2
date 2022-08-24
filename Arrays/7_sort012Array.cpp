/*
	Given an array A[] consisting only 0s, 1s and 2s. 
	The task is to write a function that sorts the given array. 
	The functions should put all 0s first, then all 1s and all 2s in last.


	Examples:

		Input: {0, 1, 2, 0, 1, 2}
		Output: {0, 0, 1, 1, 2, 2}

		Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
		Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

	https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
*/


#include<bits/stdc++.h>

using namespace std;


	int main() {
		
		int array[] = {0, 1, 0, 2, 2, 1, 2, 0, 2, 1, 0, 1};
		int size = sizeof(array)/sizeof(array[0]);
		int count[3] = {0,0,0};
		
		for(int i = 0 ; i < size; i++)
			count[array[i]] += 1;
			
		for(int i = 0 ; i < 3 ; i++)
			while(count[i]--)
				cout<<i<<" ";
				
		return 0;
	}
