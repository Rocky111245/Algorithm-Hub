//#include <iostream>
//#include "queue"
//
//class Binary_Tree {
//public:
//    int data;
//    Binary_Tree* left_node;
//    Binary_Tree* right_node;
//
//    Binary_Tree(int data) {
//        this->data = data;
//        this->left_node = nullptr;
//        this->right_node = nullptr;
//    }
//};
//
//Binary_Tree* Create_Symmetry(Binary_Tree* tree_pointer, int data,std::queue<int> &right_queue, std::queue<int> &left_queue){
//    Binary_Tree* parent;
//    if(tree_pointer== nullptr){
//
//        return tree_pointer=new Binary_Tree(data);
//
//    }
//
//    //imbalance of queue will determine which side the pointer will move.
//
//
//    parent=new Binary_Tree(data);
//    if(left_queue.size()-right_queue.size()==0) {
//
//        while (tree_pointer != nullptr) {
//            parent = tree_pointer;
//            tree_pointer = tree_pointer->left_node;
//        }
//        tree_pointer=new Binary_Tree(data);
//
//    }
//
//    else if(right_queue.size()-left_queue.size()!=0) {
//        right_queue.push(1);
//
//        while (tree_pointer != nullptr) {
//            parent = tree_pointer;
//            tree_pointer = tree_pointer->right_node;
//        }
//        tree_pointer=new Binary_Tree(data);
//
//    }
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
//}
//
//
//int main(){
//    std::queue<int> right_queue;
//    std::queue<int> left_queue;
//
//
//
//}