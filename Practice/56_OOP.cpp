#include <iostream>

class Human{
    public:
        // Attributes
        std::string name;
        std::string occupation;
        int age;


        // Method
        void eat(){
            std::cout << "This person is eating \n ";
        }
        void drink(){
            std::cout << "This person is drinking \n ";
        }
        void sleep(){
            std::cout << "This person is sleeping \n ";
        }

};

class Car{
    public:
        // Attributes
        std::string make;
        std::string model;
        int year;
        std::string color;

        // Method
        void accelerate(){
            std::cout << "You step on gas! \n ";
        }
        void brake(){
            std::cout << "You step on brakes \n ";
        }
     
};


int main()
{
    // Object = A collection of attributes and methods
    //          They can have characteristics and could perfrom actions
    //          Can be used mimic real world items(ex. Phune, Book, Dog)
    //          Created from a class which act as aa "blue-print"

    Human human1; // Object of class Human
    Human human2; // Object of class Human

    human1.name = "John";
    human1.occupation = "Software Engineer";
    human1.age = 25;

    human2.name = "Jane";
    human2.occupation = "Doctor";
    human2.age = 30;

    std::cout << "Name: " << human1.name << std::endl;
    std::cout << "Occupation: " << human1.occupation << std::endl;
    std::cout << "Age: " << human1.age << std::endl;

    std::cout << "Name: " << human2.name << std::endl;
    std::cout << "Occupation: " << human2.occupation << std::endl;
    std::cout << "Age: " << human2.age << std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();


   Car car1; // Object of class Car

   car1.make = "Toyota";
   car1.model = "Corolla";
   car1.year = 2020;
   car1.color = "Red";

   std::cout << "Make: " << car1.make << std::endl;
   std::cout << "Model: " << car1.model << std::endl;
   std::cout << "Year: " << car1.year << std::endl;
   std::cout << "Color: " << car1.color << std::endl;

   car1.accelerate();
   car1.brake();

    return 0;
}