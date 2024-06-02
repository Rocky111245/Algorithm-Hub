#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k){
    //do not bother about the 1s, keep window open as long as the 0s dont exceed the allowed limit.
    //if the next value after the allowed limit is 0, this is the max count of 1 possible. We can move the window now.
    int zero_count=0;
    int one_count=0;
    int max_ones=0;

    for (int i=0;i<nums.size();i++){

        if(nums[i]==1){
            one_count++;
        }
        if(nums[i]==0 && zero_count<k){
            zero_count++;
        }
        if(nums[i]==0 && zero_count==k){
            max_ones=std::max(max_ones,one_count+zero_count);
        }
        if(nums[i]==1 && zero_count==k){
            one_count++;
            max_ones=std::max(max_ones,one_count+zero_count);
        }
    }








    }
};

















int main() {
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    sol.longestOnes(nums, k);

}












