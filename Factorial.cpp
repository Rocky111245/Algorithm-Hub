//#include <iostream>
//#include <vector>
//
//int Factorial(int number){
//    if(number==1){
//        return 1;
//    }
//    int factorial_value=Factorial(number-1);
//    number=number*factorial_value;
//    std::cout<<number<<std::endl;
//    return number;
//}
//
//int Fibonacci(int iterations){
//    if(iterations <= 1 ){
//        return 1;
//    }
//    int first_value= Fibonacci(iterations-1);
//    int second_value= Fibonacci(iterations-2);
//    int total=first_value+second_value;
//    return total;
//
//}
//
//void Fibonacci_Iterative(std::vector<int>&array, int iterations) {
//
//    array[0]=0;
//
//    array[1]=1;
//
//    if(iterations==0 || iterations==1){
//        return;
//    }
//    int i;
//    for (i=2; i <iterations; i++) {
//
//        array[i]=array[i-1]+array[i-2];
//
//    }
//    std::cout<<array[i-1]<<std::endl;
//}
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
//
//int main(){
//    int n=8;
//    std::vector<int> array(n,0);
//    Fibonacci_Iterative(array, n);
//
//
//
//}
//
//
//
