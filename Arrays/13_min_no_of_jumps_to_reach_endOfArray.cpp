/*
    Minimum no. of Jumps to reach end of an array	

    Examples: 
        
        Input:  arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
        Output: 3 (1-> 3 -> 8 -> 9)

        Explanation: 
            Jump from 1st element to 
            2nd element as there is only 1 step, 
            now there are three options 5, 8 or 9. 
            If 8 or 9 is chosen then the end node 9 
            can be reached. So 3 jumps are made.

        Input  :  arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
        Output : 10
        

        algo:

        loop i (0, size) 
            
            steps = a[i]    // allowed steps
            
            {
                now get list of elements whith steps range
                e.g
                allowed steps = 3;
                list = [x,y,z]
            }
            
            find max element in list to jump
            i = max_element_index 
*/

#include<bits/stdc++.h>
#define loopi(n) for(int i = 0 ; i < n; i++)
#define loopj(s,n) for(int j = s ; j < n; j++)

using namespace std;

int getMinNoSteps(int arr[], int size) {
    
    if(arr[0] == 0)
        return -1;      // jump not possible 
    
    int totalSteps = 0;
    loopi(size) {
        int allowedSteps = arr[i];
        int max = INT_MIN;
        int maxIndex = 0;

        // getting element list withing steps range
        loopj(i+1, i + allowedSteps + 1) {
            
            // handling array overflow if range is larger that array size
            if(j == size) {
                maxIndex = j;
                break;
            }
            // finding max no to jump
            if(max < arr[j]) {
                max = arr[j];
                maxIndex = j;
            }
        }
        i = maxIndex-1;
        totalSteps++;
    }
    return totalSteps;
}

int main() {

    // int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // int arr[] = {2, 3, 1, 1, 4};
    // int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int arr[] = {9, 8, 11, 1, 4, 8, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<getMinNoSteps(arr,size)<<endl;
    return 0;
}