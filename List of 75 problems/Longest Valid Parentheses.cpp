//#include <iostream>
//#include <stack>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int longestValidParentheses(string s) {
//        stack<int> bracket_stack; // stack to store indices
//        int max_count = 0;
//
//        // Push -1 to the stack to handle edge case for the first valid substring
//        bracket_stack.push(-1);
//
//        for (int i = 0; i < s.size(); ++i) {
//            if (s[i] == '(') {
//                bracket_stack.push(i); // push index of '('
//            }
//            else {
//                bracket_stack.pop(); // pop the top of the stack
//                if (bracket_stack.empty()) {
//                    bracket_stack.push(i); // push current index as a base for next valid substring
//                } else {
//                    // Calculate the length of the current valid substring
//                    max_count = max(max_count, i - bracket_stack.top());
//                }
//            }
//        }
//
//        cout << max_count << endl;
//        return max_count;
//    }
//};
//
//int main() {
//    Solution sol;
//    string s = "((()))";
//    sol.longestValidParentheses(s); // Output: 6
//
//    string s2 = ")()())";
//    sol.longestValidParentheses(s2); // Output: 4
//
//    string s3 = ")()()(";
//    sol.longestValidParentheses(s3); // Output: 4
//
//    string s4 = "(()())";
//    sol.longestValidParentheses(s4); // Output: 6
//
//    string s5 = "(()()(";
//    sol.longestValidParentheses(s5); // Output: 4
//
//    return 0;
//}
