#include <iostream>

int main(){
    std::string name;

    std::cout <<"Enter your full name : ";
    std::getline(std::cin,name);
    
    


    // if(name.length()>12){
    //     std::cout<<"Your name can't be over 12 character\n";    
    // }
    // else{
    //     std::cout<<"Welcome "<< name;
    // }
    
    // if(name.empty()){
    //     std::cout<<"You didn't enter your name";
    // 
    // else{
    //     std::cout <<"Hello "<<name;
    // }
   
    //name.clear(); //clear name show only Hello
    //std::cout<<"Hello "<<name; 
    
    //name.append("@gmail.com");
    //std::cout<<"Your user name is now "<<name;

    // std::cout<<name.at(0);//show EX.Prang show P
    
    // name.insert(0,"@");
    // std::cout<<name;

    //std::cout<<name.find(' ');//count the position of character EX.space bar ('  ') 
    
    name.erase(0, 3);//Delete first 3 charater(Position to start delete , Last position to delete )
    std::cout<<name;

    return 0;
}