//#include <iostream>
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
//Binary_Tree* Create_Node(Binary_Tree* tree, int data) {
//    if (tree == nullptr) {
//        return new Binary_Tree(data);
//    }
//
//    if (data < tree->data) {
//        tree->left_node = Create_Node(tree->left_node, data);
//    } else if (data > tree->data) {
//        tree->right_node = Create_Node(tree->right_node, data);
//    }
//
//    return tree;
//}
//
//
//Binary_Tree* Search(Binary_Tree* tree, int data) {
//    if (tree == nullptr) {
//        std::cout << "Data not found" << std::endl;
//        return nullptr;
//    }
//
//    if (tree->data == data) {
//        std::cout << "Found data: " << tree->data << std::endl;
//        return tree;
//    }
//
//    else if (data < tree->data) {
//        return Search(tree->left_node, data);  // Traverse left subtree
//    }
//    else {
//        return Search(tree->right_node, data);  // Traverse right subtree
//    }
//}
//
//
//// Function to insert data iteratively into the binary tree
//Binary_Tree* Binary_Tree_Iterative(Binary_Tree* pointer_to_tree, int data) {
//    // If the tree is empty, create a new root node
//    if (pointer_to_tree == nullptr) {
//        return new Binary_Tree(data);
//    }
//
//    // Start at the root of the tree
//    Binary_Tree* root_pointer = pointer_to_tree;
//    Binary_Tree* parent_pointer = nullptr;
//
//    // Traverse the tree to find the correct insertion point
//    while (pointer_to_tree != nullptr) {
//        parent_pointer = pointer_to_tree; // Keep track of the parent node
//
//        if (data > pointer_to_tree->data) {
//            pointer_to_tree = pointer_to_tree->right_node;
//        } else if (data < pointer_to_tree->data) {
//            pointer_to_tree = pointer_to_tree->left_node;
//        } else {
//            // Data is already in the tree; do nothing (assuming no duplicates)
//            return root_pointer;
//        }
//    }
//
//    // Insert the new node at the correct position
//    if (data > parent_pointer->data) {
//        parent_pointer->right_node = new Binary_Tree(data);
//    } else {
//        parent_pointer->left_node = new Binary_Tree(data);
//    }
//
//    // Return the unchanged root pointer
//    return root_pointer;
//}
//
//
//
//
//
//
//void Print_Tree_PreOrder(Binary_Tree* tree) {
//    if (tree == nullptr) {
//        return;
//    }
//
//    std::cout << "Node is: " << tree->data << std::endl;
//    Print_Tree_PreOrder(tree->left_node);
//    Print_Tree_PreOrder(tree->right_node);
//}
//
//
//int main() {
//    // Creating the root node
////    Binary_Tree* root = new Binary_Tree(10);
//
//    // Inserting new nodes
//    Binary_Tree* root = Binary_Tree_Iterative(root, 10);
//    root = Binary_Tree_Iterative(root, 5);
//    root = Binary_Tree_Iterative(root, 15);
//    root = Binary_Tree_Iterative(root, 3);
////    root = Create_Node(root, 7);
////    root = Create_Node(root, 9);
////    root = Create_Node(root, 11);
//
//    // Output some values to verify
//
//
//    return 0;
//}
