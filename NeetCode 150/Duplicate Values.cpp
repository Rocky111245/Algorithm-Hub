//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    bool hasDuplicate(vector<int>& nums) {
//        unordered_set<int> array_set;
//        for (int i = 0; i < nums.size(); i++) {
//            if (array_set.find(nums[i]) != array_set.end()) {
//                std::cout << "True" << std::endl;
//                return true;
//            }
//            array_set.insert(nums[i]);
//        }
//        std::cout << "False" << std::endl;
//        return false;
//    }
//};
//
//
////today I learnt that the set insert method returns an obejct with the iterator to the element and a bool to check if it has bene isnerted.
//
//
//
//
//
//int main(){
//
//    vector<int>array={1, 2, 3, 4};
//    Solution sol;
//    sol.hasDuplicate(array);
//
//}
