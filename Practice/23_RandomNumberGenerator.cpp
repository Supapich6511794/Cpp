#include <iostream>
#include <ctime>//Future updates or stricter compilers will break your code.
int main()
{
    // pseudo-random = Not truly random (but close)

    srand(time(NULL));//initialize

    //int num = rand()%6;//0-5
    // int num = (rand()%100)+1;//1-100
    int num1 = (rand() % 6)+1;
    int num2 = (rand() % 6)+1;
    int num3 = (rand() % 6)+1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    
    return 0;
}