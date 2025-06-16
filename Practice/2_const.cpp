#include <iostream>

int main(){
//const  = constant value(read-only)
    const double pi =3.14159;
    // pi = 30;
    double raduis = 5;
    raduis=100;
    double circumference = 2*pi*raduis;

    std::cout <<circumference;

    return 0;
}