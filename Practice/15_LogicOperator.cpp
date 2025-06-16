#include <iostream>

int main()
{ 
    // && = check if two condition are true 
    // || = check if at lest one of two condition is true
    // ! = not,reverses 

    int temp;

    std::cout <<"Enter the temperature: ";
    std::cin>>temp;

    // if(temp > 0 && temp <30 ){
    //     std:: cout << "The temperature is good!";
    // }
    // else{
    //     std:: cout<<"The temperature is bad!";
    // }
   

    if(temp <= 0 || temp >=30 ){
        std:: cout << "The temperature is bad!\n";
    }
    else{
        std:: cout<<"The temperature is good!\n";
    }

    bool sunny = true;

    if(!sunny){//false
        std:: cout << "This is sunny outside!";
    }
    else{ //true
        std:: cout<<"It is cloudy outside!";
    }
    
    return 0;

}