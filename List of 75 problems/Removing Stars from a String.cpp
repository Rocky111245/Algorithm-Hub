//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//
//class Solution {
//public:
//    std::string removeStars(const std::string& s) {
//        std::stack<char> charStack;
//
//        // Process each character in the string
//        for (char ch : s) {
//            if (ch == '*') {
//                if (!charStack.empty()) {
//                    charStack.pop();  // Remove the top character
//                }
//            } else {
//                charStack.push(ch);  // Push non-star characters
//            }
//        }
//
//        // Construct the resulting string from the stack
//        std::string result;
//        while (!charStack.empty()) {
//            result.push_back(charStack.top());
//            charStack.pop();
//        }
//
//        // The characters are in reverse order, so we need to reverse the string
//        std::reverse(result.begin(), result.end());
//
//        return result;
//    }
//};
//
//int main() {
//    Solution sol;
//
//    std::string s = "abb*cdfg*****x*";
//
//    // Call the function with the initialized string
//    std::string result = sol.removeStars(s);
//
//    // Print the result
//    std::cout << "Resulting string: " << result << std::endl;  // Expected output: "a"
//
//    return 0;
//}
