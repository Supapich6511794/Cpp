#include <iostream>

// void happyBirthDay(){ //b4 main function
//     std :: cout<< "Happy Birthday to you!\n";
//     std :: cout<< "Happy Birthday to you!\n";
//     std :: cout<< "Happy Birthday dear you!\n";
//     std :: cout<< "Happy Birthday to you!\n";
// }
// int main(){
//     // function = a block of reusable cade
//     happyBirthDay();
//     happyBirthDay();
    
    

//     return 0;

// }

void happyBirthDay(std::string name,int age);


int main(){
    // function = a block of reusable cade

    std:: string name ="Bro";
    int age =21;

    happyBirthDay(name, age);
    happyBirthDay(name, age);


    return 0;
}
void happyBirthDay(std::string name,int age){ // The varilable can change
    std :: cout<< "Happy Birthday to "<< name <<'\n';
    std :: cout<< "Happy Birthday to "<< name <<'\n';
    std :: cout<< "Happy Birthday dear "<< name <<'\n';
    std :: cout<< "Happy Birthday to "<< name <<'\n';
    std :: cout<< "You are "<< age <<" year old!\n";
}