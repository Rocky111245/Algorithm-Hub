//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <set>
//#include <queue>
//
//using std::vector,std::string,std::cout,std::endl,std::to_string,std::stoi;
//
//class Solution {
//public:
//    string encode(vector<string>& strs) {
//        string encoded_string;
//        int string_size=0;
//
//        for(int i=0;i<strs.size();i++){
//            string_size=strs[i].size();
//            string temp=to_string(string_size);
//            encoded_string.append(temp);
//            encoded_string.append("#");
//            encoded_string.append(strs[i]);
//        }
//        return encoded_string;
//
//    }
//
//    vector<string> decode(string s) {
//        vector<string>decoded_string;
//        string temp;
//        int string_size;
//        string digit;
//        for(int i=0;i<s.size();i++){
//            while(s[i]!='#'){
//                digit.push_back(s[i]);
//                i++;
//            }
//            i++;
//            string_size=stoi(digit);
//            while(string_size>0){
//                temp.push_back(s[i]);
//                string_size--;
//                i++;
//            }
//            decoded_string.push_back(temp);
//            temp.clear();
//            digit.clear();
//            i--;
//        }
//        return decoded_string;
//    }
//};
//
//
//int main() {
//    int k = 2;
//    vector<string> s = {};
//    Solution sol;
//    auto result = sol.encode(s);
//    vector<string> final=sol.decode(result);
//
//
//
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i] << endl;
//    }
//
//    return 0;
//}
