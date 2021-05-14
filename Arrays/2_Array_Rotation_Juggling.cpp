/*
	# A Juggling Algorithm #
	
	Divide array into different sets where no of sets equal to 
	GCD of n & d then elements will be moved within one set only 
	
	if j = i0 then k =  j + d & swap j <=> k until k < n
*/

#include<bits/stdc++.h>
using namespace std;
	
	int getGCD(int a, int b) {
		
		if (b == 0)
        	return a;
 
    	else
        	return getGCD(b, a % b);
	}
	
	void leftRotate(int arr[], int size, int d) {
		
		int gcd = getGCD(d, size);
		
		for(int i = 0 ; i < gcd ; i++) {
			
			int temp = arr[i];
			int j = i;
			
			while(1) {
				
				int k = j + d;		
				
				if(k >= size)
					k -= size;
				if(k == i)
					break;
				arr[j] = arr[k];
				j = k;
			}
			arr[j] = temp;
		}
	}
	int main() {
		
		
		int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
		int n = sizeof(array) / sizeof(array[0]);
		int d = 3;	
		
		leftRotate(array, n, d);
		
		for(int i = 0 ; i < n ; i++)
			cout<<array[i]<<" ";
		
		return 0;
	}
