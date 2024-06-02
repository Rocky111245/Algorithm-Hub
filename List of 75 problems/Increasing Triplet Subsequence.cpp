//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    bool increasingQuadruplet(vector<int>& nums) {
//        int size = nums.size();
//        if (size < 4) {
//            return false;
//        }
//
//        int first = INT_MAX, second = INT_MAX, third = INT_MAX;
//
//        for (int num : nums) {
//            if (num <= first) {
//                first = num; // update first if num is smaller than or equal to first
//            } else if (num <= second) {
//                second = num; // update second if num is larger than first but smaller than or equal to second
//            } else if (num <= third) {
//                third = num; // update third if num is larger than second but smaller than or equal to third
//            } else {
//                // we have found a number larger than first, second, and third
//                return true;
//            }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> array = {20, 100, 10, 12, 5, 13, 15};
//
//    if (solution.increasingQuadruplet(array)) {
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }
//
//    return 0;
//}
