//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//class Solution {
//public:
//    int longestOnes(vector<int>& nums, int k) {
//        int left = 0;
//        int max_count = 0;
//        int zero_count = 0;
//
//        for (int right = 0; right < nums.size(); ++right) {
//            // Expand the window by including nums[right]
//            if (nums[right] == 0) {
//                zero_count++;
//            }
//
//            // If the number of zeros exceeds k, shrink the window from the left
//            while (zero_count > k) {
//                if (nums[left] == 0) {
//                    zero_count--;
//                }
//                left++;
//            }
//
//            // Update the maximum count of ones in the window
//            max_count = max(max_count, right - left + 1);
//        }
//
//        cout << max_count << endl;
//        return max_count;
//    }
//};
//
//int main() {
//    Solution sol;
//    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
//    int k = 2;
//    sol.longestOnes(nums, k);
//    return 0;
//}
