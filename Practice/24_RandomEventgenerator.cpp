#include <iostream> 
#include <ctime>//Future updates or stricter compilers will break your code.
int main(){

    srand(time(0));
    
    int  ranNum =rand() % 5 +1;
    
    switch (ranNum){
        case 1: std:: cout << "You win a bumper striker!\n ";
                break;//if no break it may get many one or two or tree or all prize
        case 2: std:: cout << "You win a t-shirt!\n ";
                break;
        case 3: std:: cout << "You win a free lunch!\n ";
                 break;
        case 4: std:: cout << "You win a bumper gift card!\n ";
                break;
        case 5: std:: cout << "You win concert tickets!\n ";
                break;
    }

    return 0;
}