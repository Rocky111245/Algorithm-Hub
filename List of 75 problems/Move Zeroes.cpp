//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int size=nums.size();
//        int count=0;
//
//        for (int i=0;i<size;i++){
//            if(nums[i]==0){
//                count++;
//            }
//            else{
//                nums[i-count]=nums[i];
//            }
//        }
//        for (int i=size-count;i<size;i++){
//            nums[i]=0;
//        }
//
//
//        for (int i=0;i<size;i++){
//            cout<<nums[i]<<endl;
//        }
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> array = {0,0,0,1,0,5};
//    solution.moveZeroes(array);
//
//    return 0;
//}
