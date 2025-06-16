#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main(){
    // credit card validator
    // 1. get digit
    // 2. sum odd digits
    // 3. sum even digits
    // 4. add both sums together
    // 5. if the total is divisible by 10, the card is valid

    std:: string cardNumber;
    std:: cout << "Enter your credit card number: ";
    std:: cin >> cardNumber;

    int result = 0;
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber); // add both sums together

    if(result %10 == 0){
        std:: cout << cardNumber<<" Your card is valid!" << '\n';
    }else{
        std:: cout << cardNumber<<" Your card is invalid!" << '\n';
    }


    return 0;

}
int getDigit(const int number){
    return number%10 + (number/10%10); // get the last digit and add it to the second last digit
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() -1; i >= 0; i -= 2){
        sum += getDigit(cardNumber[i] - '0') ; // convert char to int
    }    
    return sum;
}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;
    for (int i = cardNumber.size() -2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i] - '0') * 2);// convert char to int
    }    
    return sum;
}