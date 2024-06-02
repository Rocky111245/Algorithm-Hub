//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//class Solution {
//public:
//    double findMaxAverage(vector<int>& nums, int k) {
//        if (nums.size() < k) {
//            return 0; // If the size of nums is less than k, return 0 or handle it appropriately
//        }
//
//        double max_average = -std::numeric_limits<double>::infinity(); // Initialize to the smallest possible value
//        double rolling_sum = 0; // Maintain a rolling sum
//        int count = 0;
//
//        for (int i = 0; i < nums.size(); i++) {
//            rolling_sum += nums[i]; // Add the current element to the rolling sum
//            count++;
//
//            // When the window size reaches k
//            if (count == k) {
//                max_average = max(max_average, rolling_sum / k); // Update max average
//                rolling_sum -= nums[i - k + 1]; // Subtract the element that is sliding out of the window
//                count--; // Keep the window size at k
//            }
//        }
//
//        cout << max_average << endl;
//        return max_average;
//    }
//};
//
//int main() {
//    Solution sol;
//    vector<int> array = {1, 12, -5, -6, 50, 3};
//    int k = 4;
//    sol.findMaxAverage(array, k);
//    return 0;
//}
