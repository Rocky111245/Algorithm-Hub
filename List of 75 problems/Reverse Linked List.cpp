//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(nullptr) {}
//};
//
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        // Initialize previous, current, and next pointers.
//        ListNode* previous = nullptr;
//        ListNode* current = head;
//        ListNode* next = nullptr;
//
//        // Traverse the list and reverse the pointers.
//        while (current != nullptr) {
//            next = current->next;    // Store next node
//            current->next = previous; // Reverse current node's pointer
//            previous = current;       // Move previous to current node
//            current = next;           // Move current to next node
//        }
//
//        // At the end, previous will be the new head of the reversed list.
//        return previous;
//    }
//
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
//
//};
//
//int main() {
//    Solution sol;
//
//    vector<int> head_values = {1, 2, 3, 4, 5};
//    ListNode* head = sol.createLinkedList(head_values);
//    sol.printLinkedList(head);
//    sol.reverseList(head);
//
//
//    return 0;
//}
