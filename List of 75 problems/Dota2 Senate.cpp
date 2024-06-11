//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <numeric>
//#include <queue>
//
//using namespace std;
//
//
//class Solution {
//public:
//    string predictPartyVictory(string senate) {
//        queue<char> senator;
//        int count=0;
//
//        for(int i=0;i<senate.size();i++){
//            if(i==0){
//                senator.push(senate[i]);
//            }
//
//            if(senator.front()==senate[i]){
//                senator.push(senate[i]);
//            }
//            else if(senator.front()!=senate[i]){
//                senator.push(senate[i]);
//                senator.pop();
//            }
//        }
//        if (senator.front()=='R'){
//            cout<<"Radiant"<<endl;
//            return "Radiant";
//        }
//        if (senator.front()=='D'){
//            cout<<"Dire"<<endl;
//            return "Dire";
//        }
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
//int main(){
//    Solution sol;
//
//    string s="RDRDDR";
//
//    sol.predictPartyVictory(s);
//
//
//
//
//}
//
//
//
//
//
//
//
//
