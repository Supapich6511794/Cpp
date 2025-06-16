#include <iostream>
#include <ctime>//Future updates or stricter compilers will break your code.

int main(){
    int num;
    int guess;
    int tries = 0 ;

    srand(time(NULL));
    num = rand()% 100 +1;

    std :: cout<< "********Number guessing game********\n";
    

    do{
        std::cout << "Enter a guess between 1-100 number "<<tries+1<<" : ";
        std::cin>>guess;
        tries++; //count number of tries, increase after showing the prompt

        if(guess>num){
            std:: cout << "Too hight! \n";
        }
        else if (guess<num)
        {
           std::cout<< "Too low!\n";   
        }
        else
        {
            std :: cout<<"CORRECT! # of tries: "<<tries<<'\n';
        }
        
    }
    while (guess!=num);
  
    
   return 0; 

}
