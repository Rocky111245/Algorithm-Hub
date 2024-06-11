//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        if (nums.empty()) return 0;
//
//        unordered_set<int> numbers_set(nums.begin(), nums.end());
//        int max_size = 0;
//
//        for (const auto& number : numbers_set) {
//            // Check if it is the start of a sequence
//            if (numbers_set.find(number - 1) == numbers_set.end()) {
//                int current_num = number;
//                int current_length = 1;
//
//                // Extend the sequence
//                while (numbers_set.find(current_num + 1) != numbers_set.end()) {
//                    current_num++;
//                    current_length++;
//                }
//
//                max_size = max(max_size, current_length);
//            }
//        }
//
//        cout << max_size << endl;
//        return max_size;
//    }
//};
//
//int main() {
//    Solution sol;
//    vector<int> array = {2, 20, 4, 10, 3, 4, 5};
//    sol.longestConsecutive(array); // Output should be 4 (sequence: 2, 3, 4, 5)
//
//    return 0;
//}
