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
//    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//        int size=flowerbed.size();
//        int number_of_ones=0;
//
//        for (int i=0;i<size;i++){
//            if(flowerbed[i]==1){
//                number_of_ones++;
//            }
//        }
//        int total_flowers=number_of_ones+n;
//
//        if(size>=(total_flowers*2) || size>=((total_flowers*2))-1){
//            cout<<"true"<<endl;
//            return true;
//        }
//        else{
//            cout<<"false"<<endl;
//            return false;
//        }
//
//
//    }
//};
//
//
//
//
////1 0-> 1 space
////2 0> 1space
////3 0-> 2 space
////4 0-> 2space
////5 0-> 3 space
////6 0-> 3space
////7 0-> 4 space
////{0,0,0,0,0,0}
//
//
//
//
//
//int main(){
//    Solution solution;
//    vector<int> flowers={0,1,0};
//    solution.canPlaceFlowers(flowers,1);
//
//}
