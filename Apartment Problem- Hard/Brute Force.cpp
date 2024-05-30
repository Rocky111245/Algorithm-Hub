//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//// Define the struct to represent a block
//struct Block {
//    bool gym;
//    bool school;
//    bool store;
//};
//
//vector<int> Brute_Force(const vector<Block>& blocks);
//
//int main() {
//    // Initialize the vector of Block structures with the given number of elements
//    vector<Block> blocks = {
//            {false, true, false},
//            {true, false, false},
//            {true, true, false},
//            {false, true, false},
//            {false, true, true},
//            {true, true, true},
//            {false, false, false},
//
//
//
//    };
//
//    // Print the blocks to verify the contents
//    for (const auto& block : blocks) {
//        cout << "{ gym: " << boolalpha << block.gym
//             << ", school: " << block.school
//             << ", store: " << block.store << " }" << endl;
//    }
//
//    // Get the minimum distances to ensure all properties are true
//    vector<int> result = Brute_Force(blocks);
//
//    // Print the result
//    for (int i = 0; i < result.size(); ++i) {
//        cout << "Block " << i << ": " << result[i] << endl;
//    }
//
//    return 0;
//}
//
//// A brute force way to solve this problem would be to go through every solution
//vector<int> Brute_Force(const vector<Block>& blocks) {
//    size_t n = blocks.size();
//    vector<int> result(n, INT_MAX);
//
//    for (int i = 0; i < n; ++i) {
//        bool first_iteration= true;
//        int left_side = i;
//        int right_side = i;
//        int iterations = 0;
//        bool gymDone = false;
//        bool schoolDone = false;
//        bool storeDone = false;
//
//        while (!gymDone || !schoolDone || !storeDone) {
//
//            if(first_iteration){
//                if (blocks[i].gym) {
//                    gymDone = true;
//                }
//                if (blocks[i].school) {
//                    schoolDone = true;
//                }
//                if (blocks[i].store) {
//                    storeDone = true;
//                }
//                first_iteration= false;
//                continue;
//            }
//
//            if (left_side >= 1) {
//                if (blocks[left_side-1].gym) {
//                    gymDone = true;
//                }
//                if (blocks[left_side-1].school) {
//                    schoolDone = true;
//                }
//                if (blocks[left_side-1].store) {
//                    storeDone = true;
//                }
//                left_side--;
//            }
//
//            if (right_side < n - 1) {
//                if (blocks[right_side + 1].gym) {
//                    gymDone = true;
//                }
//                if (blocks[right_side + 1].school) {
//                    schoolDone = true;
//                }
//                if (blocks[right_side + 1].store) {
//                    storeDone = true;
//                }
//                right_side++;
//            }
//
//            iterations++;
//
//        }
//
//        // Store the minimum distance required to satisfy all properties
//        result[i] = iterations;
//    }
//
//    return result;
//}
