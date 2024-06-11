//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> nums_map; // Map to store frequency of each element
//        vector<pair<int, int>> map_values; // Vector to store map elements as pairs
//        vector<int> result; // Result vector to store the top k frequent elements
//
//        // Edge case: if k <= 0, return an empty result
//        if (k <= 0) {
//            return result;
//        }
//
//        // Count the frequency of each element in nums
//        for (int i : nums) {
//            nums_map[i]++;
//        }
//
//        // Edge case: if k is greater than the number of unique elements, adjust k
//        if (k > nums_map.size()) {
//            k = nums_map.size();
//        }
//
//        // Transfer the elements from the map to the vector as pairs
//        for (auto const& items : nums_map) {
//            map_values.emplace_back(items);
//        }
//
//        // Custom comparator for the heap to sort by frequency (second element of pair)
//        auto compare = [](const pair<int, int>& a, const pair<int, int>& b) {
//            return a.second < b.second; // Max-heap based on frequency
//        };
//
//        // Convert the vector to a max-heap using the custom comparator
//        make_heap(map_values.begin(), map_values.end(), compare);
//
//        // Optional: Display the heap for debugging
//        cout << "Heap contents:" << endl;
//        for (const auto& p : map_values) {
//            cout << "Key: " << p.first << ", Value: " << p.second << endl;
//        }
//
//        // Extract the top k frequent elements from the heap
//        for (int i = 0; i < k; i++) {
//            pop_heap(map_values.begin(), map_values.end(), compare); // Move max element to end
//            auto max_element = map_values.back(); // Get the max element
//            result.push_back(max_element.first); // Add the max element's key to the result
//            map_values.pop_back(); // Remove the max element from the heap
//        }
//
//        return result;
//    }
//};
//
//int main() {
//    int k = 2;
//    vector<int> nums = {7, 7};
//    Solution sol;
//    auto result = sol.topKFrequent(nums, k);
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i] << endl;
//    }
//
//    return 0;
//}
