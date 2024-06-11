//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> asteroidCollision(vector<int>& asteroids) {
//        stack<int> asteroid_stack;
//
//        for (int i = 0; i < asteroids.size(); i++) {
//            int asteroid = asteroids[i];
//
//            if (asteroid_stack.empty() || asteroid > 0) {
//                asteroid_stack.push(asteroid);
//            }
//            else {
//                // Handle collisions
//                while (!asteroid_stack.empty() && asteroid_stack.top() > 0 && asteroid_stack.top() < abs(asteroid)) {
//                    asteroid_stack.pop();
//                }
//
//                if (!asteroid_stack.empty() && asteroid_stack.top() == abs(asteroid)) {
//                    asteroid_stack.pop();  // Both asteroids explode
//                } else if (asteroid_stack.empty() || asteroid_stack.top() < 0) {
//                    asteroid_stack.push(asteroid);  // No collision or current asteroid survives
//                }
//            }
//        }
//
//        vector<int> result(asteroid_stack.size());
//        for (int i = asteroid_stack.size() - 1; i >= 0; i--) {
//            result[i] = asteroid_stack.top();
//            asteroid_stack.pop();
//        }
//
//        for (int i = 0; i < result.size(); i++) {
//            cout << result[i] << endl;
//        }
//
//        return result;
//    }
//};
//
//int main() {
//    Solution sol;
//
//    vector<int> array = {-2, -2, 1, -2};
//
//    // Call the function with the initialized string
//    sol.asteroidCollision(array);
//
//    return 0;
//}
