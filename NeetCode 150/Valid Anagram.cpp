//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        unordered_map<char,int> anagram_map_s;
//        unordered_map<char,int> anagram_map_t;
//        if(s.size()!=t.size()){
//            return false;
//        }
//        for(char i : s){
//            anagram_map_s[i]++;
//        }
//        for(char i : t){
//            anagram_map_t[i]++;
//        }
//        if(anagram_map_s!=anagram_map_t){
//            cout<<"false"<<endl;
//            return false;
//        }
//        else{
//            cout<<"true"<<endl;
//            return true;
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
//int main(){
//
//    string s="jar";
//    string t="jam";
//    Solution sol;
//    sol.isAnagram(s,t);
//
//}
