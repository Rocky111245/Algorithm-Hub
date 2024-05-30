//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//
//
//class Solution {
//public:
//    string gcdOfStrings(string str1, string str2) {
//
//        size_t length_of_large_string=str1.length();
//        size_t length_of_short_string=str2.length();
//
//        string resultant_string;
//        int iterator;
//
//
//        if(str1.find(str2)!=string::npos && str1.find(str2)==0){
//            if(str1[length_of_short_string]!=str2[0]) return "";
//            for(iterator=length_of_short_string;iterator<length_of_large_string;iterator++){
//                resultant_string.push_back(str1[iterator]);
//            }
//            cout<<resultant_string<<endl;
//            return resultant_string;
//        }
//        else{
//            return "";
//        }
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
//
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
//Solution solution;
//solution.gcdOfStrings("ABABAB","ABAB");
//
//}
