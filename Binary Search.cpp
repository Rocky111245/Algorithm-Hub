//#include <iostream>
//#include <vector>
//#include <queue>
//
//int Binary_Search_Iterative(int low, int high, std::vector<int>& array, int search_data);
//int Binary_Search_Recursive(int low, int mid, int high, std::vector<int>&array, int search_data);
//
//int main() {
//    std::vector<int> array = {
//            10, 22, 35, 47, 59, 63, 77, 89, 95, 101, 112, 123, 135, 147, 159,
//            160, 172, 185, 199, 200, 213, 225, 236, 247, 259, 271, 283, 294,
//            305, 317, 328, 339, 351, 363, 375, 387, 399, 410, 423, 435, 447,
//            459, 471, 483, 495, 507, 519, 531, 543, 555, 567, 579, 591, 603,
//            615, 627, 639, 651, 663, 675, 687, 699, 711, 723, 735, 747, 759,
//            771, 783, 795, 807, 819, 831, 843, 855, 867, 879, 891, 903, 915,
//            927, 939, 951, 963, 975, 987, 999
//    };
//
//    int search_data = 317;
//    int low=0;
//    int high=array.size()-1;
//    int mid=(low+high)/2;
//    //int result = Binary_Search_Iterative(0, array.size() - 1, array, search_data);
//    int result = Binary_Search_Recursive(0,mid ,high, array, search_data);
//
//    std::cout<<"Result is : "<<result<<std::endl;
//
//    return 0;
//}
//
//int Binary_Search_Iterative(int low, int high, std::vector<int>& array, int search_data) {
//    while (low <= high) {
//        int mid = (low + high) / 2;
//
//        if (array[mid] == search_data) {
//            std::cout << "Found it at array position: " << mid << std::endl;
//            return mid;
//        }
//
//        if (array[low] == search_data) {
//            std::cout << "Found it at array position: " << low << std::endl;
//            return low;
//        }
//
//        if (array[high] == search_data) {
//            std::cout << "Found it at array position: " << high << std::endl;
//            return high;
//        }
//
//        if (search_data < array[mid]) {
//            high = mid - 1;
//        } else {
//            low = mid + 1;
//        }
//    }
//
//    return -1;
//}
//
//int Binary_Search_Recursive(int low, int mid, int high, std::vector<int>&array, int search_data){
//    //the base case is when the value is found
//
//    if(low<=high) {
//        mid = (high + low) / 2;
//        if (search_data == array[mid]) {
//            std::cout << "Value has been found" << std::endl;
//            return mid;
//        }
//
//        if (search_data < array[mid]) {
//            return Binary_Search_Recursive(low, mid, mid - 1, array, search_data);
//        } else  {
//            return Binary_Search_Recursive(mid + 1, mid, high, array, search_data);
//        }
//    }
//    return -1;
//}
//
////make a quene of length 10 and initialize it with 0
//std::queue<int> q();