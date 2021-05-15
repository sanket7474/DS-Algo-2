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
