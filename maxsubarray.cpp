/*
1. Given an array of integers, implement a function to find the maximum sum of a contiguous subarray. 
Describe your approach and the time complexity of your solution. */

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={-1,2,3,5,-6,-5,5,8,6}; //initializing a vector with random  numbers
    int sum=0; //initiazing a variable called sum with value 0
    int maxsum=INT_MIN; //initiazing a variable called maxsum with value INT_MIN
    for(auto it:vec){ //traversing through whole vector
        sum+=it; //adding every element to the sum
        if(sum<0){
            sum=0; //if sum is less than 0, then assigning 0 to sum variable
        } 
        maxsum=max(maxsum,sum);//storing the maximum sum throught the vector
               
    }
    cout<<maxsum; //printing the maximum subarray sum
}

//time complexity: O(N)
