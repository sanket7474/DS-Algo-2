/*
    Given the heights of N towers and a value of K, 
    Either increase or decrease the height of every tower by K (only once) where K > 0. 
    
    After modifications, the task is to minimize the difference between 
    the heights of the longest and the shortest tower and output its difference.

    Examples: 

        Input: arr[] = {1, 15, 10}, k = 6
        Output:  Maximum difference is 5.
        Explanation: Change 1 to 7, 15 to 9 and 10 to 4. Maximum difference is 5 (between 4 and 9). We can’t get a lower difference.

        Input: arr[] = {1, 5, 15, 10}, k = 3   
        Output: Maximum difference is 8, arr[] = {4, 8, 12, 7}

*/

#include<bits/stdc++.h>
#define loop(n) for(int i = 0 ; i < n; i++)

using namespace std;


int getMinMax(int arr[], int size, bool flag) {

    int MAX = INT_MIN;
    int MIN = INT_MAX;

    for(int i = 0 ; i < size; i++) {
        
        if(MAX < arr[i])
            MAX = arr[i];

        if(MIN > arr[i])
            MIN = arr[i];
    }

    if(flag)
        return MIN;
    else
        return MAX;
}

int findMinDistance(int arr[], int size, int k) {

    sort(arr, arr+ size);
    int mid = size/2;
    
    for(int i = 0 ; i < size ; i++) {
        if(i < mid) {
            arr[i] += k;
        }
        else if(i >= mid && arr[i] >= k) {
            arr[i] -= k;
        }
        else {
            arr[i] += k;
        }
    }
    
    int min = getMinMax(arr, size, true);
    int max = getMinMax(arr, size, false);

    return max-min;
}

int main() {

    int arr[] = {1, 15, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 6;

    int min_distance = findMinDistance(arr, size, k);

    cout<<endl<<min_distance<<endl;
    return 0;
}