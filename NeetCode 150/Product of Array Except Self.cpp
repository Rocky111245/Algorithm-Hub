//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> result(n, 1);
//
//        // Compute prefix products
//        int prefixProduct = 1;
//        for (int i = 0; i < n; ++i) {
//            result[i] = prefixProduct;
//            prefixProduct *= nums[i];
//        }
//
//        // Compute suffix products and final result
//        int suffixProduct = 1;
//        for (int i = n - 1; i >= 0; --i) {
//            result[i] *= suffixProduct;
//            suffixProduct *= nums[i];
//        }
//
//        return result;
//    }
//};
//
//int main() {
//    Solution sol;
//    vector<int> array = {-1, 0, 1, 2, 3};
//    vector<int> result = sol.productExceptSelf(array);
//
//    // Output the result
//    for (int num : result) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
