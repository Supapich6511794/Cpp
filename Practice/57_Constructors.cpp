#include <iostream>

class Student {
    public:
        // Attributes
        std::string name;
        int age;
        double gpa;

        // Constructor
        Student(std::string studentName, int studentAge, double studentGPA) { // if you want to use the same name as the class, you need to use the 'this' keyword
            this->name = studentName;                                         // eg .Student(std::string x, int y, double z)
            this->age = studentAge;                                           // name = x;                        
            this->gpa = studentGPA;                                           // age = y;         
        }                                                                     // gpa = z;       
};

class Car{
    public:
        // Attributes
        std::string make;
        std::string model;
        int year;
        std::string color;

        // Method
        Car(std::string make, std::string model, int year, std::string color) {
            this->make = make; 
            this->model = model;
            this->year = year;
            this->color = color;
        }
};


int main() {
    //constructor = special method that is automatically called when an object is instantiated
    //              useful for assigning values to attributes as 
    
    Student student1("John Doe", 20, 3.5);
    Student student2("Jane Smith", 22, 3.8);
    Student student3("Jim Brown", 19, 3.2);

    std::cout<<student1.name<<std::endl;
    std::cout<<student1.age<<std::endl;
    std::cout<<student1.gpa<<std::endl;

    std::cout<<student2.name<<std::endl;
    std::cout<<student2.age<<std::endl;
    std::cout<<student2.gpa<<std::endl;

    std::cout<<student3.name<<std::endl;
    std::cout<<student3.age<<std::endl;
    std::cout<<student3.gpa<<std::endl;

    Car car1("Toyota", "Camry", 2020, "Blue");
    Car car2("Honda", "Civic", 2019, "Red");
    
    std::cout<< car1.make<<std::endl;
    std::cout<< car1.model<<std::endl;
    std::cout<< car1.year<<std::endl;
    std::cout<< car1.color<<std::endl;

    std::cout<< car2.make<<std::endl;
    std::cout<< car2.model<<std::endl;
    std::cout<< car2.year<<std::endl;
    std::cout<< car2.color<<std::endl;

    return 0;
}   