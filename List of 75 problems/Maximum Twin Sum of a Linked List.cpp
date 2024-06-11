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
////5,4,2,1
////5,3,2,1,0,6
//
////5->4    1->2
//
////5->3->2  6->0->1 if we can design a list like this, it would make sense
////step 1-> find the position we want to remove-> if we total/2,we land perfectly where the pointer needs to be placed
//
//class Solution {
//public:
//
//    int pairSum(ListNode* head) {
//        if (!head || !head->next) return 0;  // Edge case for empty list or single element list
//
//        ListNode* first_pointer = head;
//        ListNode* second_pointer = head;
//        ListNode* prev = nullptr;
//        ListNode* current;
//        ListNode* next;
//        int size = 0;
//        int mid = 0;
//
//        // Calculate the size of the linked list
//        while (first_pointer != nullptr) {
//            first_pointer = first_pointer->next;
//            size++;
//        }
//
//        // Reset first_pointer
//        first_pointer = head;
//
//        // Find the midpoint of the linked list
//        mid = size / 2;
//        while (mid > 0) {
//            second_pointer = second_pointer->next;
//            mid--;
//        }
//
//        // Reverse the second half of the linked list
//        current = second_pointer;
//        next = second_pointer;
//
//        while (current != nullptr) {
//            next = current->next;  // Save next node
//            current->next = prev;  // Reverse the link
//            prev = current;        // Move prev to current
//            current = next;        // Move to next node
//        }
//
//        // Now prev points to the head of the reversed second half
//        second_pointer = prev;
//
//        // Calculate the maximum twin sum
//        int max_sum = 0;
//        while (second_pointer != nullptr) {
//            int current_sum = first_pointer->val + second_pointer->val;
//            max_sum = max(max_sum, current_sum);
//            first_pointer = first_pointer->next;
//            second_pointer = second_pointer->next;
//        }
//
//        return max_sum;
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
//    vector<int> head_values = {5,4,2,1};
//    ListNode* head = sol.createLinkedList(head_values);
//    sol.printLinkedList(head);
//    sol.pairSum(head);
//
//
//    return 0;
//}
