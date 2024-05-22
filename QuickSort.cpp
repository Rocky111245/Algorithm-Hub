//#include <iostream>
//
//int partitioner (int unsorted_array[], int low, int high);
//void printArray(int array[], int size);
//void Quick_Sort(int unsorted_array[], int low, int high);
//
//int main(){
//    int unsorted_array[]={6,3,5,10,1,23,10,4};
//    int size=sizeof(unsorted_array)/sizeof(unsorted_array[0]);
//    int low=0;
//    int high=size-1;
//    Quick_Sort(unsorted_array,low,high);
//    printArray(unsorted_array,size);
//}
//
//int partitioner (int unsorted_array[], int low, int high){
//    //increment i until you find element greater than 10
//    //decrease j until you find element smaller than 10
//    //if found then swap i and j until i>j
//    int pivot = low;
//    int pivot_value=unsorted_array[pivot];
//    int i = low;
//    int j = high;
//
//    while(i<j){
//        while(unsorted_array[i]<=unsorted_array[pivot] && i<high){
//            i++;
//        }
//        while(unsorted_array[j]>=unsorted_array[pivot] && j>=low){
//            j--;
//        }
//        // If i is still less than j, swap elements
//        if (i < j) {
//            int temp = unsorted_array[i];
//            unsorted_array[i] = unsorted_array[j];
//            unsorted_array[j] = temp;
//        }
//    }
//
//    // Swap the pivot element with the element at j
//    int temp=0;
//    temp=pivot_value;
//    unsorted_array[pivot]=unsorted_array[j];
//    unsorted_array[j]=temp;
//    return j; // Return the pivot index
//
//}
//
//
//void printArray(int array[], int size) {
//    for (int i = 0; i < size; i++) {
//        std::cout << array[i] << std::endl;
//    }
//    std::cout<<std::endl;
//}
//
//
//void Quick_Sort(int unsorted_array[], int low, int high) {
//    if (low < high) {
//        int pivot = partitioner(unsorted_array, low, high);
//        Quick_Sort(unsorted_array, low, pivot - 1);
//        Quick_Sort(unsorted_array, pivot + 1, high);
//    }
//}