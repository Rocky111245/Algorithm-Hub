//#include <iostream>
//#include <string>
//
//class Solution {
//public:
//    std::string mergeAlternately(std::string word1, std::string word2) {
//        size_t word1_length = word1.length();
//        size_t word2_length = word2.length();
//        size_t total_length = word1_length + word2_length;
//        std::string merged_string;
//        merged_string.reserve(total_length); // Reserve memory but not change the size
//
//        size_t i = 0, j = 0;
//        while (i < word1_length || j < word2_length) {
//            if (i < word1_length) {
//                merged_string.push_back(word1[i]);
//                i++;
//            }
//            if (j < word2_length) {
//                merged_string.push_back(word2[j]);
//                j++;
//            }
//        }
//        std::cout << merged_string << std::endl;
//        return merged_string;
//    }
//};
//
//int main() {
//    Solution sol;
//    sol.mergeAlternately("abc", "pqrs");
//    return 0;
//}
