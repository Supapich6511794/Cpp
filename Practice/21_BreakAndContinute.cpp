#include <iostream>
int main()
{
    // break = break out of a loop
    // continute = skrip current interation
    for (int i=1; i<=20; i++){
        if(i == 13){
            // break;
            continue; // no 13 lose and contunute
        }
        
        std::cout<<i<<'\n';

    }



    return 0;
}