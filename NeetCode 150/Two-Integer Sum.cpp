//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> map;
//        vector<int> result(2);
//
//        // Populate the map with the indices of the elements
//        for (int i = 0; i < nums.size(); ++i) {
//            int remaining = target - nums[i];
//            // Check if the remaining value needed to reach the target is in the map
//            if (map.find(remaining) != map.end() && map[remaining] != i) {
//                result[0] = map[remaining];
//                result[1] = i;
//                return result;
//            }
//            // Store the index of the current element
//            map[nums[i]] = i;
//        }
//        return result; // In case no solution is found, though problem guarantees one solution
//    }
//};
//
//int main() {
//    vector<int> nums = {2, 5, 5, 11};
//    int target = 10;
//    Solution sol;
//    vector<int> result = sol.twoSum(nums, target);
//
//    // Print the result
//    for (int idx : result) {
//        cout << idx << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
