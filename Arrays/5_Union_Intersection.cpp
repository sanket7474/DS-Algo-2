#include<bits/stdc++.h>
using namespace std;
	
	void printUnion(int arr1[], int arr2[], int size1, int size2) {
		
		int i = 0 , j = 0;
		
		while(i < size1 && j < size2) {
			
			if(arr1[i] < arr2[j]) {
				
				cout<<arr1[i]<<" ";
				i += 1;
			}
			else if(arr1[i] > arr2[j]) {
				
				cout<<arr2[j]<<" ";
				j += 1;
			}
			else {
				
				cout<<arr1[i]<<" ";
				i += 1;
				j += 1;
			}
		}
		
		while( i < size1)
			cout<<arr1[i++]<<" ";
			
		while( j < size2)
			cout<<arr2[j++]<<" ";		
	}
	void printIntersection(int arr1[], int arr2[], int size1, int size2) {
		
		int i = 0 , j = 0;
		
		while(i < size1 && j < size2) {
			
			if(arr1[i] < arr2[j]) 
				i += 1;
			
			else if(arr1[i] > arr2[j]) 
				j += 1;
			
			else {
				
				cout<<arr1[i]<<" ";
				i += 1;
				j += 1;
			}
		}
				
	}
	int main() {
		
		int arr1[] = {1, 2, 3};
		int arr2[] = {1, 2, 3 , 4 , 5, 6};
		
		int size1 = sizeof(arr1)/sizeof(arr1[0]);
		int size2 = sizeof(arr2)/sizeof(arr2[0]);
		
		cout<<"\nUnion: ";
		printUnion(arr1, arr2, size1, size2);
		
		cout<<"\nIntersection: ";
		printIntersection(arr1, arr2, size1, size2);
		
		return 0;
	}
