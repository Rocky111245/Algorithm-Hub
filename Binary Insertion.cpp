//#include <iostream>
//#include <vector>
//
//
//
//void Binary_Insert(int *array1,const int *array2, const int array2_size,  int *store, int low, int high);
//
//int main(){
//
//    int array1[]={1, 2, 4, 5, 7, 8};
//    int array2[]={6};
//
//    int size_of_array1=sizeof(array1)/sizeof(array1[0]);
//    int size_of_array2=sizeof(array2)/sizeof(array2[0]);
//
//    int array_location_store[size_of_array2];
//
//    int high=size_of_array1-1;
//    int low=0;
//    int mid=(high+low)/2;
//    Binary_Insert(array1, array2, size_of_array2, array_location_store, low, high);
//    std::cout<<array_location_store[0]<<std::endl;
//    std::cout<<array_location_store[1]<<std::endl;
//    bool isEven;
//
//    if((size_of_array1+size_of_array2)%2!=0){
//        isEven=true;
//    }
//    else{
//        isEven= false;
//    }
//    if(isEven){
//        int middle=(size_of_array1+size_of_array2)/2;
//        int low_position=middle-1;
//        int high_position=middle;
//
//    }
//
//
//}
//
//void Binary_Insert(int *array1,const int *array2, const int array2_size,  int *store, int low, int high){
//    int j=0;
//    int mid;
//
//    while(low<high){
//        mid=(high+low)/2;
//        if(array2[j]<array1[mid]){
//            high=mid-1;
//        }
//        else if(array2[j]>array1[mid]){
//            low=mid+1;
//        }
//
//    }
//    int insertion_position=low;
//
//    if(array2[j]>array1[low]) store[j++]=insertion_position+1;
//    else store[j++]=insertion_position;
//
//}
//
//
//
//
