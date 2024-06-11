//#include <iostream>
//#include <unordered_map>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int longestSubstring(string s, int k) {
//        return longestSubstringHelper(s, 0, s.size(), k);
//    }
//
//private:
//    int longestSubstringHelper(const string& s, int start, int end, int k) {
//        if (end - start < k) {
//            return 0;
//        }
//
//        unordered_map<char, int> charCount;
//        for (int i = start; i < end; ++i) {
//            charCount[s[i]]++;
//        }
//
//        for (int mid = start; mid < end; ++mid) {
//            if (charCount[s[mid]] >= k) continue;
//            int midNext = mid + 1;
//            while (midNext < end && charCount[s[midNext]] < k) {
//                midNext++;
//            }
//            return max(longestSubstringHelper(s, start, mid, k),
//                       longestSubstringHelper(s, midNext, end, k));
//        }
//
//        return end - start;
//    }
//};
//
//int main() {
//    Solution sol;
//    string s1 = "aaabb";
//    int k1 = 3;
//    cout << "Longest substring length for s1: " << sol.longestSubstring(s1, k1) << endl; // Output: 3
//
//    string s2 = "ababbc";
//    int k2 = 2;
//    cout << "Longest substring length for s2: " << sol.longestSubstring(s2, k2) << endl; // Output: 5
//
//    string s3 = "aabcdccdbfhaadbbcc";
//    int k3 = 2;
//    cout << "Longest substring length for s3: " << sol.longestSubstring(s3, k3) << endl; // Output: 9
//
//    return 0;
//}
