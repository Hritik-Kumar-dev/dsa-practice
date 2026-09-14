// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <iostream>
using namespace std;

int findinarray (array[] , int num) {
    for (int  i = 0; i < size(array[]); i++){
        if (array[i] == num )
        {
           return i ;
        }}
}

int main()
{
    int num[] = {1, 151, 8, 45, 5, 21};
   
     int index = findinarray(num , 8);
    cout << index <<endl ;

    return 0;
}