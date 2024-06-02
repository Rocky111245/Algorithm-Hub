//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    int compress(vector<char>& chars) {
//        int size = chars.size();
//        int pointer = 0;  // Pointer to the current position for writing
//
//        int count = 1;  // This will maintain a count of characters, count starts from 1
//
//        if (size == 1) {
//            return 1;
//        }
//
//        for (int i = 1; i <= size; i++) {  // Start from 1 to compare with the first character
//            if (i < size && chars[pointer] == chars[i]) {
//                count++;
//            } else {
//                if (count > 1) {
//                    string countStr = to_string(count);
//                    for (char c : countStr) {
//                        chars[++pointer] = c;
//                    }
//                }
//                pointer++;  // Move pointer to the next position for writing
//                if (i < size) {
//                    chars[pointer] = chars[i];  // Write the next character
//                    count = 1;  // Reset count
//                }
//            }
//        }
//
//        // Resize the vector to the new length
//        chars.resize(pointer);
//
//        // Output for debugging purposes
//        for (char c : chars) {
//            cout << c;
//        }
//        cout << endl;
//
//        return pointer;
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<char> array = {'a', 'a', 'a', 'b', 'b', 'a', 'a'};
//    int length = solution.compress(array);
//
//    cout << length << endl;
//    for (int i = 0; i < length; i++) {
//        cout << array[i];
//    }
//    cout << endl;
//
//    return 0;
//}
