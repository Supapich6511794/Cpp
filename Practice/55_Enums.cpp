#include <iostream>

enum Day {
    Sunday =0 ,
    Monday =1,
    Tuesday =2,
    Wednesday  =3,
    Thursday =4,
    Friday =5,
    Saturday =6
};

int main() {
  
    //enum = a user defined data type that consist 
    //        of paired named-integer constants.
    //        GREAT if you have a set of potential options.

   Day today = Sunday;

    switch (today) {
        case Sunday:
            std::cout << "Sunday" << '\n';
            break;
        case Monday :
            std::cout << "Monday" << '\n';
            break;
        case Tuesday :
            std::cout << "Tuesday" << '\n';
            break;
        case Wednesday :
            std::cout << "Wednesday" << '\n';
            break;
        case Thursday :
            std::cout << "Thursday" << '\n';
            break;
        case Friday :
            std::cout << "Friday" << '\n';
            break;
        case Saturday :
            std::cout << "Saturday" << '\n';
            break;
        default:
            std::cout << "Invalid day" << '\n';
    }

    return 0;
}