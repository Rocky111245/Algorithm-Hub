//#include <iostream>
//#include <vector>
//#include <limits>
//#include <set>
//#include <unordered_map>
//#include <algorithm> // Include the algorithm header for std::sort
//
//using namespace std;
//
//class Solution {
//public:
//    bool closeStrings(string word1, string word2) {
//        vector<int>first_map_vector;
//        vector<int>second_map_vector;
//
//
//        if(word1.size()!=word2.size()){
//            cout<<"False"<<endl;
//            return false;
//        }
//        if(!can_be_close(word1,word2)){
//           return false;
//        }
//        unordered_map<char,int> first_map;
//        auto iterator_first=first_map.begin();
//
//        unordered_map<char,int> second_map;
//        auto iterator_second=second_map.begin();
//
//
//        for (const auto&characters:word1){
//            first_map[characters]++;
//        }
//
//        for (const auto&characters:word2){
//            second_map[characters]++;
//        }
//
//        for (const auto& pair : first_map) {
//            first_map_vector.push_back(pair.second);
//        }
//        for (const auto& pair : second_map) {
//            second_map_vector.push_back(pair.second);
//        }
//
//
//        sort(first_map_vector.begin(), first_map_vector.end());
//        sort(second_map_vector.begin(), second_map_vector.end());
//
//        if (first_map_vector == second_map_vector) {
//            cout << "They are close strings" << endl;
//            return true;
//        } else {
//            cout << "They are NOT close strings" << endl;
//            return false;
//        }
//
//    }
//
//
//
//    //we simply use this set to weed out any such combinations where there aren't the same characters.
//    bool can_be_close(string first,string second){
//        set<char>w1;
//        set<char>w2;
//
//        for (const auto &characters:first){
//            w1.insert(characters);
//        }
//        for (const auto &characters:second){
//            w2.insert(characters);
//        }
//        for (const auto& chr : w1) {
//            cout  <<chr;
//        }
//        cout << endl;
//        for (const auto& chr : w1) {
//            cout  << chr;
//        }
//        cout << endl;
//
//        // Compare set1 and set2
//        if (w1 == w2) {
//            cout << "set1 and set2 contain the same elements so we can proceed" << endl;
//            return true;
//        } else {
//            cout << "set1 and set2 do not contain the same elements" << endl;
//            return false;
//        }
//    }
//
//};
//
//
//int main() {
//    Solution sol;
//    string s1="abc";
//    string s2="bca";
//
//    sol.closeStrings(s1,s2);
//    return 0;
//}
