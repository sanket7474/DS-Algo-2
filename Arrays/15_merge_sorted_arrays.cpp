#include<bits/stdc++.h>

using namespace std;

	void merge(int arr1[], int arr2[], int size1, int size2) {
		
		int j = 0;
		for(int i = 0 ; i < size1; i++) {
			
				j = 0;
				if(arr1[i] > arr2[j]) {
					
					int temp = arr1[i];
					arr1[i] = arr2[j];
					arr2[j] = temp;
					
					while(j < size2-1 && arr2[j] > arr2[j+1]) {
					
						int temp = arr2[j];
						arr2[j] = arr2[j+1];
						arr2[j+1] = temp;
						j++;
					}	
				}
		}
	}
	int main() {
		
		int arr1[] = {1, 5, 9, 10, 15, 20};
		int arr2[] = {2, 3, 8, 13};
		int size1 = sizeof(arr1)/sizeof(arr1[0]);
		int size2 = sizeof(arr2)/sizeof(arr2[0]);
		
		merge(arr1, arr2, size1, size2);
		
		for(int i = 0 ; i < size1 ; i++)
			cout<<arr1[i]<<" ";
		
		cout<<endl;
		
		for(int i = 0 ; i < size2 ; i++)
			cout<<arr2[i]<<" ";
		return 0;
	}
