#include <iostream>

int main()
{
    //do while loop = do some block of code first,
    //              Then repeat again if codition is true
    
    int number;
    
    // std :: cout<<"Enter positive #: ";
    // std::cin>>number;
    
    //while (number<0){
    //     std :: cout<<"Enter positive #: ";
    //     std::cin>>number;
    // }
    do{
        std :: cout<<"Enter positive #:  ";
        std::cin>>number;
     }while(number<0); 
    
    

    std::cout<< "The # is : "<<number;
    return 0;
}