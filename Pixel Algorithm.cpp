//#include <iostream>
//
//const int ROWS = 6;
//const int COLS = 6;
//
////1->black
////0->white
//
////remove all 1s that is not vertically or horizontally attached to the border of the image
//
////steps->
////1) We will ignore the borders and only check it under certain conditions.
////2) concentrate on one element at a time.
////3) We can check if an element has horizontal or vertical connections.
////4) two for loops iterating from 1 and ending at 4.
////5) No fancy algorithms required
//
//
//
//void check_and_remove(int array[6][6]) {
//    int row = 4;
//    int column = 4;
//    for (int i = 1; i < row + 1; i++) {
//        for (int j = 1; j < column + 1; j++) {
//
//            if (array[i][j] == 1) {
//                // Handle situation when they are not connected
//                if ((i + 1 < 6 && array[i + 1][j] == 0) && (i - 1 >= 0 && array[i - 1][j] == 0) &&
//                    (j + 1 < 6 && array[i][j + 1] == 0) && (j - 1 >= 0 && array[i][j - 1] == 0)) {
//                    array[i][j] = 0;
//                }
//
//                // Handle situation where they are horizontally connected
//                if ((j + 1 < 6 && array[i][j + 1] == 1) || (j - 1 >= 0 && array[i][j - 1] == 1)) {
//                    bool non_connected=true;
//                    if (j + 1 < 6 && array[i][j + 1] == 1) {
//                        int k = 1;
//                        while (j + k < 6) {
//                            if (array[i][j + k] != 1) {
//                                // Remove it, it won't be useful
//                                array[i][j] = 0;
//                                non_connected=false;
//                            }
//                            k++;
//                        }
//                    }
//                    if(!non_connected){
//                        if (j - 1 >= 0 && array[i][j - 1] == 1) {
//                            int k = 1;
//                            while (j - k >= 0) {
//                                if (array[i][j - k] != 1) {
//                                    // Remove it, it won't be useful
//                                    array[i][j] = 0;
//                                }
//                                k++;
//                            }
//                        }
//                    }
//                    if( array[i][j]==1){
//                        continue;
//                    }
//                }
//
//                // Handle situation where they are vertically connected
//                if ((i + 1 < 6 && array[i + 1][j] == 1) || (i - 1 >= 0 && array[i - 1][j] == 1)) {
//                    if (i + 1 < 6 && array[i + 1][j] == 1) {
//                        int k = 1;
//                        while (i + k < 6) {
//                            if (array[i + k][j] != 1) {
//                                // Remove it, it won't be useful
//                                array[i][j] = 0;
//                            }
//                            k++;
//                        }
//                    }
//                    if (i - 1 >= 0 && array[i - 1][j] == 1) {
//                        int k = 1;
//                        while (i - k >= 0) {
//                            if (array[i - k][j] != 1) {
//                                // Remove it, it won't be useful
//                                array[i][j] = 0;
//                            }
//                            k++;
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//
//
//void PrintArray(int arr[ROWS][COLS]) {
//    for (int i = 0; i < ROWS; ++i) {
//        std::cout << "[" ;
//        for (int j = 0; j < COLS; ++j) {
//            std::cout << arr[i][j] << " "; // Original value
//        }
//        std::cout << "]" << std::endl;
//    }
//}
//
//
//int main(){
//
//    int image_array[ROWS][COLS] = {
//            {1, 0, 0, 0, 0, 0},
//            {0, 1, 0, 1, 1, 1},
//            {0, 0, 1, 0, 1, 0},
//            {1, 1, 0, 1, 0, 0},
//            {1, 0, 1, 1, 0, 0},
//            {1, 0, 0, 0, 0, 1}
//    };
//
//    check_and_remove(image_array);
//    PrintArray(image_array);
//
//
//
//}
//
