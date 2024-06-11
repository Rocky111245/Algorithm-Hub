//#include <iostream>
//#include <vector>
//#include <cmath>
//
//
//using namespace std;
////23,2,4,6,7
//class Solution {
//public:
//    bool checkSubarraySumBruteForce(vector<int>& nums, int k) {
//        int size=nums.size();
//        int left_pointer=0;
//        int right_pointer=1;
//        int max_count=0;
//
//        if(size<2){
//            cout<<"False"<<endl;
//            return false;
//        }
//
//        for (int i=0;i<size;i++){
//            max_count=nums[i];
//            for(int j=i+1;j<size;j++){
//                max_count=max_count+nums[j];
//                if(is_multiple(max_count,k)){
//                    cout<<"true"<<endl;
//                    return true;
//                }
//            }
//        }
//        cout<<"false"<<endl;
//        return false;
//    }
//    bool checkSubarraySumDynamicProgramming(vector<int>& nums, int k) {
//        int size=nums.size();
//        int total_sum=0;
//        int max_count=0;
//
//        if(size<2){
//            cout<<"False"<<endl;
//            return false;
//        }
//
//        for (int i=0;i<size;i++){
//            total_sum=total_sum+nums[i];
//        }
//
//
//
//
//        cout<<"false"<<endl;
//        return false;
//    }
//
//
//
//    bool is_multiple(int max,int k){
//        if((max)%k==0){
//            return true;
//        }
//        else {
//            return false;
//        }
//
//    }
//
//
//};
//
//
//
//int main(){
//    Solution sol;
//    int k=4;
//    vector<int> nums={1,0,1,0,1};
//    sol.checkSubarraySumBruteForce(nums,k);
//}
//
//
