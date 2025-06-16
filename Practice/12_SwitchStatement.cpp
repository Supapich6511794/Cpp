#include <iostream>

int main(){
    // switch = alternaive to using "if else" stateomments
    //          compare to value against matching cases

    // int month;

    // std::cout << "Enter number of month : ";
    // std::cin >> month;

    // switch (month)
    // {
    // case 1:
    //     std:: cout<< "It is january";
    //     break;
    // case 2 :
    //     std:: cout<< "It is Fabuary";
    //     break;
    // case 3 : 
    //     std:: cout<< "it is March";
    //     break;
    // case 4 :
    //     std::cout << "It is April";
    //     break;
    // case 5 : 
    //     std::cout << "It is May";
    //     break;
    // case 6 : 
    //     std:: cout << "it is June";
    //     break;
    // case 7 :
    //     std:: cout<< "It is July";
    //     break;
    // case 8:
    //     std::cout<< "It is August";
    //     break;
    // case 9 :
    //     std:: cout << "it is Sebtember";
    //     break;
    // case 10 :
    //     std:: cout <<"it is October";
    //     break;
    // case 11 :
    //     std ::cout<< "It is November";
    //     break;
    // case 12 :
    //     std::cout<<"it is December";
    //     break;
    
    // default:
    //     std::cout<< "Please enter in only number (1-12) ";
    //     // break;
    // }

    char grade;

    std::cout<<"What letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std:: cout <<"You did great!";
            break;
        case 'B':
            std::cout<< "You did good!";
            break;
        case 'C':
            std::cout <<"You did Okay";
            break;
        case 'D':
            std::cout <<"You did not do good";
            break;
        case 'F':
            std:: cout << "You FAILED!";
            break;
        default :
            std::cout << "Please enter only letter grade (A-F)";
    }
    return 0; 
}