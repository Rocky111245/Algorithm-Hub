//#include <iostream>
//#include <vector>
//
//// Function to merge two halves
//void merge(std::vector<int>& array, int left, int mid, int right) {
//    int n1 = mid - left + 1;
//    int n2 = right - mid;
//    std::vector<int> leftArray(n1);
//    std::vector<int> rightArray(n2);
//
//    for (int i = 0; i < n1; ++i) leftArray[i] = array[left + i];
//    for (int i = 0; i < n2; ++i) rightArray[i] = array[mid + 1 + i];
//
//    int i = 0, j = 0, k = left;
//    while (i < n1 && j < n2) {
//        if (leftArray[i] <= rightArray[j]) {
//            array[k] = leftArray[i];
//            ++i;
//        } else {
//            array[k] = rightArray[j];
//            ++j;
//        }
//        ++k;
//    }
//
//    while (i < n1) {
//        array[k] = leftArray[i];
//        ++i;
//        ++k;
//    }
//
//    while (j < n2) {
//        array[k] = rightArray[j];
//        ++j;
//        ++k;
//    }
//}
//
//// Recursive function to implement merge sort
//void mergeSort(std::vector<int>& array, int left, int right) {
//    if (left < right) {
//        int mid = left + (right - left) / 2;
//        mergeSort(array, left, mid);
//        mergeSort(array, mid + 1, right);
//
//    }
//}
//
//// Helper function to print the array
//void printArray(const std::vector<int>& array) {
//    for (int num : array) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    std::vector<int> array = {38, 27, 43, 3, 9, 82, 10};
//    std::cout << "Original array: ";
//    printArray(array);
//    mergeSort(array, 0, array.size() - 1);
//    std::cout << "Sorted array: ";
//    printArray(array);
//    return 0;
//}
