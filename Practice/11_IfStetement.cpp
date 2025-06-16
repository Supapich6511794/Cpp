#include <iostream>

int main()
{
    // if statement = do something if condition is true.
    // if not, then don't do it.

    int age;

    std::cout<<"Enter your ege: ";
    std::cin>> age;

    if(age >= 100){

        std::cout << "You are too old";

    }
    else if (age <0){
        std:: cout << "you haven't born yet";

    }
    else if (age >= 18){
        std::cout << "Welcome to the site! ";
    }
    else {
        std::cout <<"You are not old enough to enter! ";
    }


    return 0;
}