//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string longestPalindromeBruteForce(string s) {
//        int size = s.size();
//        if (size <= 1) {
//            return s; // Single character or empty string is already a palindrome
//        }
//
//        string longest_string;
//
//        for (int i = 0; i < size; i++) {
//            for (int j = i; j < size; j++) {
//                string comparison = s.substr(i, j - i + 1); // Get the substring
//                string temp = comparison;
//                reverse(temp.begin(), temp.end());
//                if (temp == comparison && comparison.size() > longest_string.size()) {
//                    longest_string = comparison;
//                }
//            }
//        }
//
//        if (longest_string.empty()) {
//            longest_string = s[0];
//        }
//
//        return longest_string;
//    }
//
//    string longestPalindromeExpandFromCenter(string s) {
//        if (s.empty()) return "";
//
//        int start = 0, end = 0;
//        for (int i = 0; i < s.size(); i++) {
//            int len1 = expandAroundCenter(s, i, i); // Odd length palindromes
//            int len2 = expandAroundCenter(s, i, i + 1); // Even length palindromes
//            int len = max(len1, len2);
//            if (len > end - start) {
//                start = i - (len - 1) / 2;
//                end = i + len / 2;
//            }
//        }
//
//        return s.substr(start, end - start + 1);
//    }
//
//private:
//    int expandAroundCenter(const string& s, int left, int right) {
//        while (left >= 0 && right < s.size() && s[left] == s[right]) {
//            left--;
//            right++;
//        }
//        return right - left - 1; // Length of the palindrome
//    }
//};
//
//int main() {
//    Solution solution;
//    string input = "cbbd"; // "bb"
//    cout << "Longest palindromic substring of " << input << " is: " << solution.longestPalindromeExpandFromCenter(input) << endl;
//    return 0;
//}
