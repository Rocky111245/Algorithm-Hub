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
//
//class Solution {
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//
//        //O(k) time complexity which is negligible as K is fixed
//        unordered_map<char,bool> allowed_characters_map;
//        unordered_set<char> character_set;
//        allowed_characters_map['1']= true;
//        allowed_characters_map['2']= true;
//        allowed_characters_map['3']= true;
//        allowed_characters_map['4']= true;
//        allowed_characters_map['5']= true;
//        allowed_characters_map['6']= true;
//        allowed_characters_map['7']= true;
//        allowed_characters_map['8']= true;
//        allowed_characters_map['9']= true;
//        allowed_characters_map['.']= true;
//
//        for(int i=0;i<9;i++){
//            for (int j=0;j<9;j++){
//                if(check(board[i][j],allowed_characters_map)){
//                    if(board[i][j]!='.'){
//                        auto it=character_set.insert(board[i][j]);
//                        if(!it.second){
//                            cout<<"False"<<endl;
//                            return false;
//                        }
//                    }
//                }
//            }
//            character_set.clear();
//        }
//        for(int i=0;i<9;i++){
//            for (int j=0;j<9;j++){
//                if(check(board[j][i],allowed_characters_map)){
//                    if(board[j][i]!='.'){
//                        auto it=character_set.insert(board[j][i]);
//                        if(!it.second){
//                            cout<<"False"<<endl;
//                            return false;
//                        }
//                    }
//                }
//            }
//            character_set.clear();
//        }
//        for (int boxRow = 0; boxRow < 3; boxRow++) {
//            for (int boxCol = 0; boxCol < 3; boxCol++) {
//                unordered_set<char> box_set;
//                for (int i = 0; i < 3; i++) {
//                    for (int j = 0; j < 3; j++) {
//                        char current = board[boxRow * 3 + i][boxCol * 3 + j];
//                        if (current != '.') {
//                            if (box_set.find(current) != box_set.end()) {
//                                return false;
//                            }
//                            box_set.insert(current);
//                        }
//                    }
//                }
//            }
//        }
//
//
//
//        cout<<"True"<<endl;
//        return true;
//    }
//
//
//
//
//    //a function to check a character against the map
//    bool check(char c, const unordered_map<char,bool>& allowed_characters_map ){
//        //if character is in this map, we allow
//        if(allowed_characters_map.find(c)!= allowed_characters_map.end()){
//            return true;
//        }
//        else{
//            return false;
//        }
//    }
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
//int main(){
//
//
//    Solution sol;
//    vector<vector<char>> board=
//            {
//                    {'1', '2', '.', '.', '3', '.', '.', '.', '.'},
//                    {'4', '.', '.', '5', '.', '.', '.', '.', '.'},
//                    {'.', '9', '8', '.', '.', '.', '.', '.', '3'},
//                    {'5', '.', '.', '.', '6', '.', '.', '.', '4'},
//                    {'.', '.', '.', '8', '.', '3', '.', '.', '5'},
//                    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//                    {'.', '.', '.', '.', '.', '.', '2', '.', '.'},
//                    {'.', '.', '.', '4', '1', '9', '.', '.', '8'},
//                    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
//            };
//
//    sol.isValidSudoku(board);
//
//
//}