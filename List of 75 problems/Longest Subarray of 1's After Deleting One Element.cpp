//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//class Solution {
//public:
//    int longestSubarray(vector<int>& nums) {
//
//        int size=nums.size();
//        int max_count=0;
//        int right_pointer=0;
//        int left_pointer=0;
//        int zero_count=0;
//
//        if(nums.size()==1){
//            return 0;
//        }
//
//        for (int i=0;i<size;i++){
//            right_pointer=i;
//            if(nums[i]==0 ){
//                zero_count++;
//            }
//            while(zero_count>1){
//                if (nums[left_pointer]==0) zero_count--;
//                left_pointer++;
//            }
//
//            max_count=std::max(max_count,right_pointer-left_pointer);
//        }
//        cout<<max_count<<endl;
//        return max_count;
//    }
//};
//
//
//int main() {
//    Solution sol;
//    vector<int> nums = {1,1,1};
//    sol.longestSubarray(nums);
//    return 0;
//}
