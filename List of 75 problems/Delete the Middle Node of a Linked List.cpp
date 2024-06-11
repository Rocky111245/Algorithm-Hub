//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <numeric>
//#include <queue>
//
//
//using namespace std;
//
//
//
//
//struct ListNode {
//    int val; // Value stored in the node
//    ListNode *next; // Pointer to the next node in the list
//
//    // Default constructor: initializes val to 0 and next to nullptr
//    ListNode() : val(0), next(nullptr) {}
//
//    // Constructor that initializes val to a given integer x and next to nullptr
//    ListNode(int x) : val(x), next(nullptr) {}
//
//    // Constructor that initializes val to a given integer x and next to a given pointer next
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//
//
//
//class Solution {
//public:
//    ListNode* deleteMiddle(ListNode* head) {
//        int size=0;
//        ListNode* current=head;
//        ListNode* prev = nullptr;
//        while(current!= nullptr){
//            current=current->next;
//            size++;
//        }
//        current=head;   //reset
//        int mid_index= tolower(size/2);
//
//        while(mid_index>0){
//            prev=current;
//            current=current->next;
//            mid_index--;
//        }
//        prev->next=current->next;
//        return head;
//    };
//
//
//    ListNode* createLinkedList(const std::vector<int>& values) {
//        if (values.empty()) return nullptr;
//        ListNode* head = new ListNode(values[0]);
//        ListNode* current = head;
//        for (size_t i = 1; i < values.size(); ++i) {
//            current->next = new ListNode(values[i]);
//            current = current->next;
//        }
//        return head;
//    }
//
//    void printLinkedList(ListNode* head) {
//        ListNode* current = head;
//        while (current != nullptr) {
//            std::cout << current->val << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//};
//
//
//
//
//
//
//
//
//
//
//int main(){
//    Solution sol;
//
//    vector<int>head={1,3,4,7,1,2,6};
//    ListNode* news=sol.deleteMiddle(sol.createLinkedList(head));
//    sol.printLinkedList( news);
//
//
//
//
//
//
//
//
//
//}