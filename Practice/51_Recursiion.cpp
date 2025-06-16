#include <iostream>

// void walk (int steps);

// int main(){
//     // Recursion = a programming technique where a function 
//     //             invokes itself from within
//     //             breck a complex concept ionto repeatable single step

//     //(iterative vs recursive)

//     // advancetage = less code and cleaner
//     //               useful for sorting and searching algorithms

//     //distadvantage = uses more memory and slower

//     walk(100);


//     return 0;
// }
// void walk (int steps){
//     //if (steps > 0){
//         std::cout<<"You take a step!\n  ";
//         walk(steps - 1); // recursive call
//    // }
// }

int factorial(int num);

int main(){
    // Factorial = the product of all positive integers less than or equal to n
    //             n! = n * (n-1)!
    //             5! = 5 * 4 * 3 * 2 * 1 = 120
    //             0! = 1

    std::cout<<factorial(5);

    return 0;
}
int factorial(int num){
    if (num > 1){
        return num * factorial(num - 1); // recursive call
    }
    else{
        return 1; // base case}
    }
}