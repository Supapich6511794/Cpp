#include <iostream>

class Pizza{
    public:
        // Attributes
        std::string topping1;
        std::string topping2;

        // Method
        Pizza(){ // default constructor
          
        }   
        Pizza(std::string topping1){
            this->topping1 = topping1;   
        }
        Pizza(std::string topping1, std::string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
};

int main() {
    // Constructor overloading = multiple constructors with same namebut different parameters 
    //                           allow for varying arguments when instantianing an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "green peppers");
    Pizza pizza3;

    std:: cout <<pizza2.topping1<<std::endl;
    std:: cout <<pizza2.topping2<<std::endl;
  
    return 0;
}