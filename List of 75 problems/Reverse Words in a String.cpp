//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <cctype> // for std::isspace
//
//using namespace std;
//
//
//
//class Solution {
//public:
//    string reverseWords(const string& s) {
//        vector<string> new_string;
//        vector<string> result_string;
//        int iterator=0;
//        int length=s.length();
//        new_string.resize(length);
//
//        for (int i=0;i<length;i++){
//
//            if(!std::isspace(s[i])){
//                new_string[iterator]+=(s[i]);
//            }
//            else if(i-1>=0 && !std::isspace(s[i-1]) && std::isspace(s[i])){
//                iterator++;
//            }
//
//        }
//
//        auto indicator = std::find(new_string.begin(), new_string.end(), "");;
//        int index = std::distance(new_string.begin(), indicator);
//
//        result_string.resize(index);
//        int j=0;
//        for (int i= index-1;i>=0;i--){
//
//            if(i==0){
//                result_string[j++]=(new_string[i]);
//            }
//            else{
//                result_string[j++]=(new_string[i]+" ");
//            }
//
//        }
//        int size_new=result_string.size();
//        string result;
//        for (int i=0;i< size_new;i++){
//            result.append(result_string[i]);
//        }
//
//        cout<<result<<endl;
//        return result;
//    }
//};
//
//
//
//
//
//
//
//
//
//int main(){
//    Solution solution;
//
//    solution.reverseWords("a good   example");
//
//}
