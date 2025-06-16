#include <iostream>

//count <<(insertion operator)
//cin >> (extraction operator)

int main(){
    std::string name;
    int age;
    
    std::cout<<"What is your age? :";
    std::cin>>age;//problem cin not except the new line charlecter

    std::cout <<"What is your full name? :";
    // std::cin>>name;
    // std::getline(std::cin, name);// For input full name including the space ***before cin
    std::getline(std:: cin >> std::ws, name );//New libe
   

    std::cout <<"Hello " <<name<<'\n';
    std::cout << "Age "<<age<<" year old";

    return 0;
}