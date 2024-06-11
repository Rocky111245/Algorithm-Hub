//#include <iostream>
//#include <vector>
//#include <limits>
//#include <set>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int equalPairs(vector<vector<int>>& grid) {
//        int rows=3;
//        int column=3;
//        vector<int>r(3,0);
//        vector<int>c(3,0);
//        int j_column=0;
//        int i_row=0;
//        int index=0;
//        int count=0;
//
//        //brute force approach
//        for (i_row=0;i_row<column;i_row++){
//            r[index]=(grid[i_row][j_column]);
//            index++;
//        }
//        index=0;
//        i_row=0;
//        j_column=0;
//
//        for (int j=0;j<column;j++){
//            for (int i=0;i<rows;i++){
//                r[index]=(grid[i][j]);
//            }
//            if(r==c){
//                count++;
//            }
//            index=0;
//
//        }
//
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
//
//
//
//int main() {
//    Solution sol;
//
//    // Initializing the 2D vector with specific values
//    vector<vector<int>> grid = {
//            {3, 2, 1},
//            {1, 7, 6},
//            {2, 7, 7}
//    };
//
//    // Call the function with the initialized grid
//    int result = sol.equalPairs(grid);
//
//    // Print the result (for demonstration purposes)
//    cout << "Result: " << result << endl;
//
//    return 0;
//}