//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int left_pointer = 0;
//        int right_pointer = height.size() - 1;
//        int max_area = 0;
//
//        if (height.size() == 2) {
//            max_area = min(height[0], height[1]);
//            cout << max_area << endl;
//            return max_area;
//        }
//
//        while (left_pointer < right_pointer) {
//            int distance = right_pointer - left_pointer;
//            int current_area = min(height[left_pointer], height[right_pointer]) * distance;
//            max_area = max(max_area, current_area);
//
//            if (height[left_pointer] < height[right_pointer]) {
//                left_pointer++;
//            } else {
//                right_pointer--;
//            }
//        }
//
//        cout << max_area << endl;
//        return max_area;
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> height = {1, 1,7};
//
//    solution.maxArea(height);
//
//    return 0;
//}
