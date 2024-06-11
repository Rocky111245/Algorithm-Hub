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
//    ListNode* oddEvenList(ListNode* head) {
//        if (!head || !head->next) return head;
//
//        ListNode* odd_pointer = head;
//        ListNode* even_pointer = head->next;
//        ListNode* even_head = even_pointer;
//
//        // Traverse the list and rearrange odd and even nodes
//        while (even_pointer && even_pointer->next) {
//            odd_pointer->next = even_pointer->next;
//            odd_pointer = odd_pointer->next;
//            even_pointer->next = odd_pointer->next;
//            even_pointer = even_pointer->next;
//        }
//
//        // Connect the end of odd list to the head of even list
//        odd_pointer->next = even_head;
//
//        return head;
//    }
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
//int main() {
//    Solution sol;
//
//    vector<int> head_values = {1, 2, 3, 4, 5};
//    ListNode* head = sol.createLinkedList(head_values);
//    sol.printLinkedList(head);
//
//    head = sol.oddEvenList(head);
//    sol.printLinkedList(head);
//
//    return 0;
//}
