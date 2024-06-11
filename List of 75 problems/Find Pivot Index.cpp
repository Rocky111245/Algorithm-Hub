//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        int right_sum=0;
//        int left_sum=0;
//        int pivot_index=0;
//
//        if(nums.size()==1 && nums[0]!=0){
//            return 0;
//        }
//        if(nums.size()==1 && nums[0]==0){
//            return 0;
//        }
//
//
//
//        for (int i=0;i<nums.size();i++){
//
//            for(int j=nums.size()-1;j>pivot_index;j--){
//                right_sum=right_sum+nums[j];
//            }
//
//            for(int k=0;k<pivot_index;k++){
//                left_sum=left_sum+nums[k];
//            }
//
//            if(right_sum==left_sum){
//                cout<<"Index is at : "<<pivot_index<<endl;
//                return pivot_index;
//            }
//            right_sum=0;
//            left_sum=0;//reset
//            pivot_index++;
//        }
//        cout<<"Index not found "<<endl;
//        return -1;
//    }
//};
//
//
//int main() {
//    Solution sol;
//    vector<int> nums = {1,-1};
//    sol.pivotIndex(nums);
//    return 0;
//}
