#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;

        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1}; // return 1-indexed positions
            } else if (sum < target) {
                ++low;
            } else {
                --high;
            }
        }

        return {}; // return an empty vector if no solution is found
    }
};

int main() {
    Solution sol;
    vector<int> array = {2, 3, 4};
    int target = 6;
    vector<int> result = sol.twoSum(array, target);

    // Output the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
////this problem can also sue binary search but the time complexity would be a bit high O(nlogn).