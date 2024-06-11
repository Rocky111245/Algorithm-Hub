//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<string> findRepeatedDnaSequences(string s) {
//        vector<string> results;
//        unordered_map<string, int> map;
//        int size = s.size();
//        int k = 10;
//
//        if (size < k) {
//            return results;
//        }
//
//        // Establish the first window
//        string temp = s.substr(0, k);
//        map[temp]++;
//
//        // Slide the window across the string
//        for (int i = k; i < size; i++) {
//            temp.erase(0, 1); // Remove the first character
//            temp.push_back(s[i]); // Add the new character at the end
//            map[temp]++;
//        }
//
//        // Collect results
//        for (const auto& item : map) {
//            if (item.second > 1) {
//                results.push_back(item.first);
//            }
//        }
//
//        // Print results
//        for (const auto& item : results) {
//            cout << item << endl;
//        }
//
//        return results;
//    }
//};
//
//int main() {
//    string s = "AAAAAAAAAAAAA";
//    Solution sol;
//    sol.findRepeatedDnaSequences(s);
//    return 0;
//}
