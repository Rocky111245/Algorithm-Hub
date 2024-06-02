//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isSubsequence(string s, string t) {
//        int j = 0;
//        int size_s = s.size();
//        int size_t = t.size();
//
//        // If the subsequence is empty, it is always a subsequence
//        if (size_s == 0) {
//            cout << "true" << endl;
//            return true;
//        }
//
//        // If the main string is empty and the subsequence is not, it cannot be a subsequence
//        if (size_t == 0) {
//            cout << "false" << endl;
//            return false;
//        }
//
//        for (int i = 0; i < size_t; i++) {
//            if (s[j] == t[i]) {
//                j++;
//            }
//            if (j == size_s) {
//                cout << "true" << endl;
//                return true;
//            }
//        }
//        cout << "false" << endl;
//        return false;
//    }
//};
//
//
//
//
//
//
//
//int main() {
//    Solution solution;
//    string array1 = {""};
//    string array2 = {""};
//
//    solution.isSubsequence(array1,array2);
//
//
//
//    return 0;
//}