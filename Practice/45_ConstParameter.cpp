#include <iostream>

void printInfo(const std::string &name, const int &age);

int main(){
    //const parameter = parameter that is effectively read-only
    //                  code is more scure 7 coveys intent
    //                  useful for reference and pointters
    //                  no body can change
    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);


    return 0;
}
void printInfo(const std::string &name, const int &age){
 
    std::cout<< name <<'\n';
    std::cout << age <<'\n';
}