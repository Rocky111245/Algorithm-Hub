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
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string,vector<int>> string_map;
//        vector<vector<string>> result;
//        vector<string>temp;
//        vector<string> string_copy;
//        string_copy=strs;
//
//        if (strs.empty()) {
//            return result;
//        }
//
//        for(auto & items:string_copy){
//            sort(items.begin(),items.end());
//        }
//        for(int i=0;i<string_copy.size();i++){
//            string_map[string_copy[i]].push_back(i);
//        }
//
//        // Extract values from the map and insert into the vector using traditional for loops
//        for(auto const&it:string_map){
//            for(int i=0;i<it.second.size();i++){
//                temp.push_back(strs[it.second[i]]);
//            }
//            result.push_back(temp);
//            temp.clear();
//        }
//        return result;
//
//
//
//
//
//
//
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
//int main(){
//
//
//    Solution sol;
//    vector<string> strs={""};
//    sol.groupAnagrams(strs);
//
//
//}
