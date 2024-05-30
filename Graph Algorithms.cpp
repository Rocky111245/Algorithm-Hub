//#include <iostream>
//#include <vector>
//#include <string>
//
////first design a hash table to store the strings as keys
//
//
//
//
//
////setup an open-addressed hashmap that will just map the strings as keys to values
//class HashTable{
//
//public:
//
//    HashTable(int size_of_table){
//        this->size_of_table=size_of_table;
//        reserve_resize();
//    }
//    void Add_Indices(const std::string& key){
//
//        int ascii_value=0;
//
//        for(char S:key){
//            ascii_value=ascii_value+S;
//        }
//
//        int index=ascii_value%size_of_table;
//
//        if(key==Indices[index]){
//            std::cout<<"Cannot enter duplicate value "<<std::endl;
//            return;
//        }
//
//        while(Indices[index]!="O") {
//            index++;
//            if(index>=size_of_table){
//                index=0;//reset index to 0 and let it find the empty space
//            }
//        }
//
//        Indices[index]=key;//the key will be mapped to an index with a value which will represent that vertex.
//
//    }
//
//    int Find_Vertex(const std::string& key){
//        int ascii_value=0;
//
//        for(char S:key){
//            ascii_value=ascii_value+S;
//        }
//
//        int index=ascii_value%size_of_table;
//        int i=0;
//        int start_index=index;
//
//        while (Indices[index] != key) {
//            if (Indices[index] == "O" || index == start_index) {
//                std::cout << "No Key with name [" << key << "] has been found" << std::endl;
//                return -1;
//            }
//            index++;
//            if (index >= size_of_table) {
//                index = 0; // Reset index to 0
//            }
//        }
//        std::cout<<"Index has been found for ["<<key<<"] with a unique value of "<<index<<std::endl;
//        return index;
//
//    }
//
//    void Remove_Vertex(const std::string& key) {
//        int ascii_value = 0;
//
//        for (char S: key) {
//            ascii_value = ascii_value + S;
//        }
//
//        int index = ascii_value % size_of_table;
//        int i = 0;
//        int start_index = index;
//
//        while (Indices[index] != key) {
//            if (Indices[index] == "O" || index == start_index) {
//                std::cout << "No Key with name [" << key << "] has been found" << std::endl;
//                return ;
//            }
//            index++;
//            if (index >= size_of_table) {
//                index = 0; // Reset index to 0
//            }
//        }
//        std::cout << "Index has been found for [" << key << "] with a unique value of " << index << "and removed" <<std::endl;
//        Indices[index]="O";
//        std::cout <<Indices[index]<<std::endl;
//    }
//
//        void Print_HashTable(){
//        for (int i=0;i<size_of_table;i++){
//            if(Indices[i]=="O"){
//                std::cout<<" No key has been inserted here at index : "<<i<<std::endl;
//            }
//            else{
//                std::cout<<" This index is storing the key-> ["<<Indices[i]<<"] which has a unique value of "<< i<<std::endl;
//            }
//
//        }
//    }
//
//private:
//    int size_of_table;
//    std::vector<std::string> Indices;
//
//    void reserve_resize(){
//        Indices.reserve(size_of_table);
//        Indices.resize(size_of_table,"O");
//    }
//
//};
//
//
//
//
//
//
//
//int main(){
//    HashTable newTable= HashTable(26);
//    newTable.Add_Indices("Canada");
//    newTable.Add_Indices("America");
//    newTable.Add_Indices("New Zealand");
//    newTable.Add_Indices("China");
//    newTable.Add_Indices("Hong Kong");
//    newTable.Find_Vertex("China");
//    newTable.Find_Vertex("Hong Kong");
//    newTable.Find_Vertex("Hong ");
//    newTable.Add_Indices("Hong Kong");
//    newTable.Remove_Vertex("Hong ");
//    newTable.Remove_Vertex("Hong Kong");
//    newTable.Print_HashTable();
//}
//
//
//void Create_Node(){
//
//
//
//}
