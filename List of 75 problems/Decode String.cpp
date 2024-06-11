//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    string decodeString(string s) {
////3[a]2[bc]
//        // Check for invalid input: empty string or string without brackets
//        if (s.empty() || all_of(s.begin(), s.end(), ::isdigit)) {
//            return "";
//        }
//        int j=0;
//        stack<char> stack;
//        vector<char> full;
//        vector<char> temp_stack;
//        string new_string;
//        string number;
//        int digit;
//        int k=0;
//
//        for (int i=0;i<s.size();i++){
//            j=i;
//
//            if(s[i]!=']'){
//                stack.push(s[i]);
//            }
//            else if(s[i]==']'){
//                while(stack.top()!='['){
//                    temp_stack.push_back(stack.top());
//                    stack.pop();
//                }
//                if(stack.top()=='['){
//                    stack.pop();
//                }
//                while(!stack.empty() && isdigit(stack.top())){
//                    number+=stack.top();
//                    stack.pop();
//                }
//                reverse(number.begin(), number.end());
//                digit=stoi(number);
//                while(digit>0){
//                    for(int l=temp_stack.size()-1;l>=0;l--){
//                        stack.push(temp_stack[l]);
//
//                    }
//                    digit--;
//                }
//                number.clear();
//                digit=0;
//                temp_stack.clear();
//            }
//        }
//        int fixed=stack.size();
//        for (int i=0;i<fixed;i++){
//            new_string.push_back(stack.top());
//            cout<<new_string[i];
//            stack.pop();
//        }
//        cout<<endl;
//        std::reverse(new_string.begin(), new_string.end());
//        for (int i=0;i<fixed;i++){
//            cout<<new_string[i];
//        }
//        return new_string;
//
//
//
//
//
//    }
//};
//
//int main() {
//    Solution sol;
//
//    string s = "2[abc]3[cd]ef";
//
//    // Call the function with the initialized string
//    sol.decodeString(s);
//
//    return 0;
//}
