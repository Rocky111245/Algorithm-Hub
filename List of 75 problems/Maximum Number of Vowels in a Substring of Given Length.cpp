//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxVowels(string s, int k) {
//        int count = 0;
//        int max_count = 0;
//
//        if (s.size() < k) {
//            return 0; // Handle case where the string size is less than k
//        }
//
//        // Initialize the first window
//        for (int i = 0; i < k; i++) {
//            if (checkVowel(s[i])) {
//                count++;
//            }
//        }
//        max_count = count;
//
//        // Slide the window
//        for (int i = k; i < s.size(); i++) {
//            if (checkVowel(s[i])) {
//                count++;
//            }
//            if (checkVowel(s[i - k])) {
//                count--;
//            }
//            max_count = std::max(max_count, count);
//        }
//
//        cout << max_count << endl;
//        return max_count;
//    }
//
//    bool checkVowel(char character) {
//        return character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u';
//    }
//};
//
//int main() {
//    Solution sol;
//    string s = "weallloveyou";
//    int k = 7;
//    int result = sol.maxVowels(s, k);
//    cout << "Maximum number of vowels in any substring of length " << k << " is: " << result << endl;
//    return 0;
//}
