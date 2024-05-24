//#include <iostream>
//#include <vector>
//
////naive Fibonacci approach
//
//
//int Fibonacci_Naive(int iterations){
//
//    if(iterations<=0){
//        return 0;
//    }
//    if (iterations==1){
//        return 1;
//    }
//
//    int first_result= Fibonacci_Naive(iterations-1);
//
//    int second_result= Fibonacci_Naive(iterations-2);
//
//    int total=first_result+second_result;
//
//    return total;
//
//
//
//}
//
//
//int Fibonacci_Dynamic(std::vector<int>&memo,int iterations){
//
//    if(memo[iterations]!=0){
//        return memo[iterations];
//    }
//
//    if(iterations<=0){
//        return 0;
//    }
//
//    if (iterations==1){
//        return 1;
//    }
//
//    int first_result= Fibonacci_Dynamic(memo,iterations-1);
//
//    int second_result= Fibonacci_Dynamic(memo,iterations-2);
//
//    int total=first_result+second_result;
//
//    memo[iterations]=total;
//
//    return total;
//
//
//
//}
//
//
//
//int main() {
//    int iterations=100;
//
//    std::vector<int> array(iterations+1,0);
//
//   int n = Fibonacci_Dynamic(array,iterations);
// //   int n= Fibonacci_Naive(iterations);
////    int x= Factorial(n);
//    std::cout << "Fibonacci is " << n << std::endl;
//
//    return 0;
//}