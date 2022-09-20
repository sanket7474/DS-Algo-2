/*
    Given an array of n elements that contains elements from 0 to n-1, \
    with any of these numbers appearing any number of times. 
    Find these repeating numbers in O(n) and using only constant memory space.

    Example: 

        Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1}
        Output: 1, 3, 6
        Explanation: The numbers 1 , 3 and 6 appears more than once in the array.

        Input : n = 5 and array[] = {1, 2, 3, 4 ,3}
        Output: 3

*/

#include<bits/stdc++.h>
#define loop(n) for(int i = 0 ; i < n; i++)

using namespace std;

void printDuplicates(int array[], int size, int map[], int mapSize) {

    loop(size) 
        map[array[i]] += 1;
    
    loop(mapSize) 
        if(map[i] > 1) cout<< i << ", ";

}

int main() {
    // use/implement hashmap in other languauges 
    int map[1000];
    int mapSize = 1000;
    int array[] = {1, 2, 3, 6, 3, 6, 1};
    int size = sizeof(array)/sizeof(array[0]);

    loop(mapSize) 
        map[i] = 0;

    printDuplicates(array, size, map, mapSize);
    return 0;
}