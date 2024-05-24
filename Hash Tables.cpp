//#include <iostream>
//#include <string>
//#include <utility>
//
//class key_value_pair {
//public:
//    std::string key;
//    int data;
//    key_value_pair* pointer_to_next_node; // This is a pointer to an object of this class
//
//    key_value_pair(std::string key, int data) {
//        this->key = std::move(key);
//        this->data = data;
//        pointer_to_next_node = nullptr;
//    }
//    key_value_pair() {
//        this->key = "Nothing";
//        this->data = 0;
//        pointer_to_next_node = nullptr;
//    }
//};
//
//int Hash_Function(const key_value_pair& data, int hash_table_size) {
//    int total_of_ascii = 0;
//
//    for (char characters : data.key) {
//        total_of_ascii += characters;
//    }
//
//    int value = total_of_ascii % hash_table_size;
//    std::cout << "Value is: " << value << std::endl;
//    return value;
//}
//
//void insertion(key_value_pair array[], int array_size, const key_value_pair& data) {
//    int index = Hash_Function(data, array_size);
//
//    if (array[index].key == "Nothing") {
//        array[index] = data;
//    } else {
//        key_value_pair* current = &array[index];
//        while (current->pointer_to_next_node != nullptr) {
//            current = current->pointer_to_next_node;
//        }
//        current->pointer_to_next_node = new key_value_pair(data.key, data.data);
//        std::cout << "Value of " << data.key << " entered inside " << current->pointer_to_next_node->key << " entered at hash table index " << index << std::endl;
//    }
//
//    std::cout << "Value of " << data.key << " entered at hash table index " << index << std::endl;
//}
//
//int main() {
//    key_value_pair initial("Rakib", 1996);
//    key_value_pair second("Sumaiya", 1996);
//    key_value_pair third("Nilufar", 1996);
//    key_value_pair fourth("Nabila", 1996);
//
//    key_value_pair array[10];
//
//    insertion(array, 10, initial);
//    insertion(array, 10, second);
//    insertion(array, 10, third);
//    insertion(array, 10, fourth);
//
//    // Cleanup dynamically allocated memory
//    for (int i = 0; i < 10; ++i) {
//        key_value_pair* current = array[i].pointer_to_next_node;
//        while (current != nullptr) {
//            key_value_pair* to_delete = current;
//            current = current->pointer_to_next_node;
//            delete to_delete;
//        }
//    }
//
//    return 0;
//}
