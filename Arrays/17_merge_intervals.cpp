/*

	https://leetcode.com/problems/merge-intervals/
	
	
*/
#include<bits/stdc++.h>
using namespace std;

    vector< vector<int> > merge(vector<vector<int>>& intervals) {
        
		vector<vector<int>> m;
        
        for(int i = 0 ; i < intervals.size(); i++) {
            
            int start = intervals[i][0];
            while( i < intervals.size()-1 && intervals[i][1] >= intervals[i+1][0]) {            	
            	i++;
			}
			int end = intervals[i][1];
			
			m.push_back({start, end});
        }
        
        for(int i = 0 ; i < m.size() ; i++) {
				
				cout<<" ["<<m[i][0]<<","<<m[i][1]<<"]";	
		}

		return m;
    }
    
    bool comp(vector<int> v1, vector<int> v2) {
    	
    	return v1[0] < v2[0];
	}
    int main() {
    	
    	
    	vector<vector<int>> vect = {{1,4}, {0,4}};
    	sort(vect.begin() , vect.end(), comp);
		
		merge(vect);
			
		return 0;
	}

