#include <iostream>

void swap(std::string &x, std::string &y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x,y);

    std:: cout<<"X: "<< &x << '\n'; //display address
    std:: cout<<"Y: "<< &y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y ){ // if pust & all = same address
    // std::string temp;
    // temp = x;
    // x = y;
    // y = temp;
    std:: cout<<"X: "<< &x << '\n'; //display address
    std:: cout<<"Y: "<< &y << '\n';


}
// In conclusion, The difference between pass-by-reference and 
//pass-by-value is that modifications made to arguments 
//passed in by reference in the called function have effect 
//in the calling function, whereas modifications made to arguments 
//passed in by value in the called function can not affect the calling function.
