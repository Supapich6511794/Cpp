#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?: ",
                             "2. Who invented C++?: ",
                             "3. What is the predecessor of C++?: ",
                              "4. Is the Earth flat?: "};

    std::string option[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                              {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. Jonh Carmack","D. Mark Zuckerburg"},
                              {"A. C", "B. C+", "C. C--", "D. B++"},
                              {"A. yes", "B. no","C. somtimes", "What's Earth?"}};

    char answerKey[] = {'C','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i=0; i<size; i++){
        std::cout <<"*************************************\n";
        std::cout << questions[i]<< '\n';
        std::cout <<"*************************************\n";

        for(int j=0; j<sizeof(option[i])/sizeof(option[i][0]);j++ ){

            std::cout << option[i][j] <<'\n';
        }
        std:: cin>> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout<<"CORRECT\n";
            score++;
        }
        else{
            std:: cout <<"WRONG!\n";
            std::cout << "Answer is : "<<answerKey[i]<<'\n';
        }
    }
    std::cout <<"*************************************\n";
    std::cout << "*              RESULT               *\n";
    std::cout <<"*************************************\n";
    std::cout <<"CORRECT GUESSES: " <<score << '\n';
    std::cout <<"WRONG GUESSES: " << size-score<<'\n';
    std::cout << "# of QUESTIONS: "<< size << '\n';
    std::cout <<"SCORE: "<<(score/(double)size)*100<<"%";

    return 0;
}