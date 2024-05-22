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
//    Binary_Tree* root = new Binary_Tree(10);
//
//    // Inserting new nodes
//    root = Create_Node(root, 5);
//    root = Create_Node(root, 15);
//    root = Create_Node(root, 3);
//    root = Create_Node(root, 7);
//    root = Create_Node(root, 9);
//    root = Create_Node(root, 11);
//
//    // Output some values to verify
//    std::cout << "Root data: " << root->data << std::endl;
//    Search(root,7);
//
//    return 0;
//}
