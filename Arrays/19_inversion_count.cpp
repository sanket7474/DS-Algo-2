#include<bits/stdc++.h>

using namespace std;

	int getInversionCount(vector<int> v) {
		
		int count = 0;
		
		
		for(int i = 0 ; i < v.size() ; i++) {
			
			for(int j = i+1 ; j < v.size() ; j++) {
				
				
				if(i < j && v[i] > v[j])
					count++;
			}
		}
		
		return count;
	}

	int main() {
		
		vector<int> v= {8, 4, 2, 1};
		
		cout<<getInversionCount(v);
		return 0;
	}
