//#include <iostream>
//#include <queue>
//
//class RecentCounter {
//private:
//    std::queue<int> q;
//public:
//    RecentCounter() {
//        // Initialize the counter with zero recent requests.
//    }
//
//    int ping(int t) {
//        // Add the new ping to the queue.
//        q.push(t);
//
//        // Remove pings that are older than t - 3000.
//        while (!q.empty() && q.front() < t - 3000) {
//            q.pop();
//        }
//
//        // The size of the queue represents the number of pings in the last 3000 ms.
//        return q.size();
//    }
//};
//
//int main() {
//    RecentCounter recentCounter;
//    std::cout << recentCounter.ping(1) << std::endl;    // Expected output: 1
//    std::cout << recentCounter.ping(100) << std::endl;  // Expected output: 2
//    std::cout << recentCounter.ping(3001) << std::endl; // Expected output: 3
//    std::cout << recentCounter.ping(3002) << std::endl; // Expected output: 3
//    return 0;
//}
