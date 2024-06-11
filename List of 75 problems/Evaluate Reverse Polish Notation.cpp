//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <numeric>
//
//using namespace std;
////{"4","13","5","/","+"}
//class Solution {
//public:
//    int evalRPN(vector<string>& tokens) {
//        stack<int> values;
//        vector<int> num_array;
//
//        for (int i=0;i<tokens.size();i++){
//            if(is_it_digit(tokens[i])){
//                values.push(stoi(tokens[i]));
//            }
//            else{//it will meet an operator
//                //{"4","13","5","/","+"}
//                for(int j=0;j<2;j++){
//                    num_array.push_back(values.top());
//                    values.pop();
//                }
//                reverse(num_array.begin(),num_array.end());
//                if(tokens[i]=="+"){
//                    int expression= sumArray(num_array);
//                    values.push(expression);
//                    num_array.clear();
//                }
//                else if(tokens[i]=="-"){
//                    int expression= subtractArray(num_array);
//                    values.push(expression);
//                    num_array.clear();
//                }
//                else if(tokens[i]=="/"){
//                    int expression= divideArray(num_array);
//                    values.push(expression);
//                    num_array.clear();
//                }
//                else if(tokens[i]=="*"){
//                    int expression= productArray(num_array);
//                    values.push(expression);
//                    num_array.clear();
//                }
////{"4","13","5","/","+"}
//            }
//
//        }
//        cout<<values.top()<<endl;
//        return values.top();
//
//
//    }
//
//    int sumArray(const std::vector<int>& arr) {
//        int sum = 0;
//        for (int num : arr) {
//            sum += num;
//        }
//        return sum;
//    }
//
//    int productArray(const std::vector<int>& arr) {
//        int product = 1;
//        for (int num : arr) {
//            product *= num;
//        }
//        return product;
//    }
//    double divideArray(const std::vector<int>& arr) {
//        if (arr.empty()) return 0; // Handle empty array case
//
//        double result = static_cast<double>(arr[0]);
//        for (size_t i = 1; i < arr.size(); ++i) {
//            if (arr[i] == 0) {
//                std::cerr << "Error: Division by zero" << std::endl;
//                return 0;
//            }
//            result /= arr[i];
//        }
//        tolower(result);
//        return result;
//    }
//    int subtractArray(const std::vector<int>& arr) {
//        if (arr.empty()) return 0; // Handle empty array case
//
//        int result = arr[0];
//        for (size_t i = 1; i < arr.size(); ++i) {
//            result -= arr[i];
//        }
//        return result;
//    }
//
//
//
//    bool is_it_digit(const string& s){
//        for (auto const& characters:s){
//            if(isdigit(characters)) return true;
//        }
//        return false;
//    }
//};
//
//
//int main() {
//    Solution sol;
//    int number=0;
//
//    vector<string>tokens={"42"};
//
//    // Call the function with the initialized string
//    sol.evalRPN(tokens);
//
//    return 0;
//}
