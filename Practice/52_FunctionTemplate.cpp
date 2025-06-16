#include  <iostream>

// int max(int x,int y){
//     return (x > y) ? x : y;
// }
// double max(double x,double y){
//     return (x > y) ? x : y;
// }
// char max(char x,char y){
//     return (x > y) ? x : y;
// }
template <typename T, typename U>

// T max(T x,T y){
//     return (x > y) ? x : y;   //same data type
// }


auto max(T x,U y){ // different data type
    return (x > y) ? x : y;
}


int main (){
    // funtion template = describes what a function look like.
    //                    Can be use to generate a many overloaded functions
    //                    as need, ecah using different data type


    // std::cout<<max(5, 10)<<"\n"; // int
    // std::cout<<max(5.5, 10.5)<<"\n"; // double
    // std::cout<<max('a', 'b')<<"\n"; // char
    std::cout<<max(5, 10.5)<<"\n"; // int and double

    

    return 0;
}