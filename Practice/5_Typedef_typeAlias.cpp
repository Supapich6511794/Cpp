#include <iostream>
#include <vector>

// typedef = create new name for data type
// typedef std::vector<std::pair<std::string, int>> pairlits_t;
typedef std::string text_t;
typedef int number_t;
////////////////////same/////////////////////
// using text_t = std::string;
// using number_t= int;

int main(){

    text_t FirstName="Bro";
    number_t age = 21;

    std:: cout <<FirstName<< '\n';
    std:: cout <<age<< '\n';

    return 0;  
}
