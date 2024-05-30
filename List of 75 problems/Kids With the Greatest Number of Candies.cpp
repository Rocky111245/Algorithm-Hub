//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//
//using namespace std;
//
//
//
//class Solution {
//public:
//    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//
//        int size=candies.size();
//        auto maximum=std::max_element(candies.begin(),candies.end());
//        int max_candies=*maximum;
//        vector<bool> truth_table;
//
//        for (int i=0;i<size;i++){
//            if(candies[i]+extraCandies>=max_candies) {
//                truth_table.push_back(true);
//            }
//            else{
//                truth_table.push_back(false);
//            }
//        }
//        for (int i=0;i<size;i++){
//            cout<<truth_table[i]<<endl;
//        }
//
//        return truth_table;
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
//    Solution solution;
//    vector<int> candies={2,3,5,1,3};
//    solution.kidsWithCandies(candies,3);
//
//}
