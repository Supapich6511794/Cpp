#include <iostream>

class Animal{
    public:
        // Attributes
        bool alive = true;
        void eat (){
            std::cout << "NoM NoM \n";
        }
};
class Dog: public Animal{
    public :
        // Method
        void bark(){
            std::cout << "Woof! Woof! \n";
        }
};
class Cat :public Animal{
    public:
        bool alive = true;
        // Method
        void meow(){
            std::cout << "Meow!";
        }  
        void eat (){
            std::cout << "This cat is eating \n";
        }     
};




class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
       Cube(double side){
            this->side = side;
            this->area = 6 * side * side;
            this->volume = side * side * side;
        }

    
};
class Sphere : public Shape{
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * 3.14159 * radius * radius;
            this->volume = (4/3) * 3.14159 * (radius * radius * radius);

        }
};

int main() {
    // Inheritance = A class can recieve attributes and methods from another class
    //               Childern class inherit from a Parent class
    //               Help to reuse similar code found within mulyiple classes
    Dog dog1;
    std::cout << dog1.alive << std::endl;
    dog1.eat();
    dog1.bark();

    Cat cat1;
    std::cout << cat1.alive << std::endl;
    cat1.eat();
    cat1.meow();

    Cube cube(5);
    std::cout << "Area of cube: " << cube.area << " CM ^2"<<std::endl;
    std::cout << "Volume of cube: " << cube.volume << " CM^3 "<<std::endl;
    
    Sphere sphere(5);
    std::cout << "Area of sphere: " << sphere.area << " CM^2"<<std::endl;
    std::cout << "Volume of sphere: " << sphere.volume << " CM^3"<<std::endl;


    return 0;
}