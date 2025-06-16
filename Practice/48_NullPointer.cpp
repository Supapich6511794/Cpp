#include <iostream>

int main(){

    // Null pointer = a specific value that something has no value.
    //                when a pointer is not holding a null value,
    //                that pointer is not pointing to anything.(null pointer)
    
    //nullptr = key word represent a null pointer literal
    
    // nullptr are helpful when determining if an address
    //was successfully assigned to a pointer.

    //When using pointer, be careful that your code isn't 
    //dereferencing null or pointing to free memory.
    //this will case undefined behavior.
    //Undefined behavior = when the program does something unexpected.

    int *ptr = nullptr; // ptr is a null pointer
    int x = 123;

    ptr = &x; // ptr now points to x

    if (ptr == nullptr){
        std::cout << "Address was not assigned!\n" ;
    }
else{
        std::cout << "Address was assigned!\n" ;
        std ::cout<<  *ptr ; // Dereferencing ptr to get the value of x
        // Dereferencing = accessing the value at the address the pointer is pointing to.
    }

    return 0;
}