#include <iostream>

int main(){

    // memory address = location in memory where data is stored
    // a memmory address can accressed with & (address-of operator) 

    std::string name = "Bro";
    int age = 21;
    bool student = true;


    //memory address show in hexcimal
    std::cout << &name<< '\n';
    std::cout << &age<< '\n';
    std::cout << &student<< '\n';     

    return 0;
}