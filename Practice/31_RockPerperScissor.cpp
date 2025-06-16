#include <iostream>
#include <ctime>
char gatUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = gatUserChoice();
    std::cout<<"Your Choice: " ;
    showChoice(player);

    computer=getComputerChoice();
    std::cout<<"Computer's Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char gatUserChoice(){
    char player;
    std::cout<<"Rock-Paper-Scissors Game!\n";

    do{ 
    std :: cout <<"Choose one following\n";
    std::cout<<"************************* \n";
    std::cout<<"'r' for rock\n";
    std::cout<<"'p' for paper\n";
    std::cout<<"'s' for scissors\n";
    std::cin>>player;

    // std::cout<<player;
    }while (player !='r'&&player !='p'&&player !='s');

    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand()%3+1;

    switch (num)
    {
    case 1: return 'r';
        // break;
    case 2: return 'p';
        // break;
    case 3: return 's';
        // break;
    }
    return 0;

}

void showChoice(char choice){

    switch(choice){
        case 'r': std:: cout<<"Rock\n";
                break;
        case 'p': std:: cout<<"Peper\n";
                break;
        case 's': std:: cout << "Sciccors\n";
                break;
    }

}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
                    std::cout<< "It's a tie!\n"; 
                  }
                  else if(computer =='p'){
                    std::cout <<"You lose!\n";
                  }
                  else{
                        std::cout <<"You win!\n";
                  }
            break;
        case 'p': if(computer == 'p'){
                    std::cout<< "It's a tie!\n"; 
                  }
                  else if(computer =='s'){
                    std::cout <<"You lose!\n";
                  }
                  else{
                        std::cout <<"You win!\n";
                  }
            break;
        case 's': if(computer == 's'){
                    std::cout<< "It's a tie!\n"; 
                  }
                  else if(computer =='r'){
                    std::cout <<"You lose!\n";
                  }
                  else{
                        std::cout <<"You win!\n";
                  }
            break;
    }
}