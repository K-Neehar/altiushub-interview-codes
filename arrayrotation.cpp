#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5}; //initialiszng a vector
    int k=2; //initializing variable name k, with the value of k positions
    reverse(vec.begin(),vec.end()); //reversing the vector
    reverse(vec.begin(),vec.begin()+k); //reversing the vector only from beginning to k positions
    reverse(vec.begin()+k,vec.end()); //reversing the rest of the vector
    for(auto it:vec){
        cout<<it<<" "; //printing the vector elements after rotating it
    }
}

//space complexity: O(1)