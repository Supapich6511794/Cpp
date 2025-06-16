#include <iostream>

int main(){
    // pointer = variable that stores the address of another variable
    //           useful for dynamic memory allocation, arrays, and functions
    //           can be dereferenced to access the value at the address
    //           can be null (0) or point to a specific address
    //pointer = variable thet store a memory addressof another variable
    //          sometime it's easier to work with an address 

    //pointer syntax
    // type *pointerName = &variableName; // pointer to variable
    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] ={"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"}; // array of strings

    std::string *pName = &name; // pointer to name
    int *pAge = &age; // pointer to age
    std::string *pFreePizzas = freePizzas; // pointer to array of strings

    std::cout <<  *pName <<'\n'; // display name
    std::cout <<  *pAge<<'\n' ; // display age
    std::cout<< *pFreePizzas <<'\n'; // display first pizza

    return 0;
}
// In conclusion, pointers are a powerful feature in C++ that allow you to work with memory directly.   