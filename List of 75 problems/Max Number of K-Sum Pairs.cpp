//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxOperations(vector<int>& nums, int k) {
//        unordered_map<int, int> num_count;
//        int count = 0;
//
//        // Count occurrences of each number
//        for (int num : nums) {
//            num_count[num]++;
//        }
//
//        // Find pairs that sum to k
//        for (int num : nums) {
//            int remaining_sum = k - num;
//            if (num_count[num] > 0 && num_count.find(remaining_sum) != num_count.end() && num_count[remaining_sum] > 0) {
//                if (num == remaining_sum && num_count[num] < 2) {
//                    continue; // Skip if not enough occurrences to form a pair
//                }
//
//                // A pair is found, increment the count and decrease the counts in the map
//                num_count[num]--;
//                num_count[remaining_sum]--;
//
//                if (num_count[num] == 0) {
//                    num_count.erase(num);
//                }
//                if (num_count[remaining_sum] == 0) {
//                    num_count.erase(remaining_sum);
//                }
//                count++;
//            }
//        }
//
//        return count;
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> nums = {3, 1, 3, 4, 3};
//    int k = 6;
//
//    int result = solution.maxOperations(nums, k);
//    cout << "Maximum number of k-sum pairs: " << result << endl;
//
//    return 0;
//}
