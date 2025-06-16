#include <iostream>

int main(){
    // While = continue check untill it true
    //(executes code as long as a specified condition remains true, 
    //checking the condition before each iteration.)
    std::string name;
    while(name.empty()){
        std::cout<<"Enter your name: ";
        std::getline(std::cin,name);
    }

    // while(1==1){ // continue say Hi
    //     std::cout<<"Hi";
        
    // }

    std:: cout<< "Hello " <<name;
    return 0;
}
