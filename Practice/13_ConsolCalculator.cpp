#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*****************CALCULATOR**************\n";
    
    std::cout<< "Enter operator (+-*/) : ";
    std::cin>>op;
   
    std::cout <<"Endter number1: ";
    std::cin>> num1;

    std::cout<<"Enter number2 : ";
    std:: cin>>num2;

    

    

    switch (op){
        case '+':
        result=num1+num2;
            std::cout<<"result: "<<result<<'\n';
        break;

        case '-':
             result= num1-num2 ;
            std::cout<<"result: "<<result<< '\n';
        break;
           
         case '*':
            result=num1*num2;
            std::cout<<"result: "<<result<<'\n';
        break;
    
        case '/':
            result= num1/num2 ;
            std::cout<<"result: "<<result<< '\n';
        break;
        default:
         std::cout<<"Please enter the operator (+-*/)\n";
        break;
    }
    
    std::cout << "*****************************************";
    return 0;
}