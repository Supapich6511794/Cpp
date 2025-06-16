#include <iostream>

int main()
{
    // ternary operator?: = replacement to an if/else statement
    //condition? expresstion1 : expresstion2;

    //int grade =55;
    // if (grade >=60)
    // {
    //     std::cout<<"You PASS!"; 
    // }
    // else{
    //     std::cout << "You FAILED!";
    // }

   // grade >= 60 ? std::cout <<"You PASS!" : std::cout << "You FAILED!";


   //int num = 10;
   //num % 2 ==1 ? std::cout<<"ODD" :std::cout <<"EVENT";
   //num % 2  ? std::cout<<"ODD" :std::cout <<"EVENT";//1=true ,0= fault

   bool hungry =true;
//    hungry ? std::cout << "You are hungry" : std::cout << "You are full" ;
      std::cout <<(hungry? "You are hungry":"you are full");
    return 0;
}