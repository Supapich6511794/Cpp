#include <iostream>


struct Car{
  std::string model;
  int year;
  std::string color;

};
void printCar(Car &car);
void printCar(Car &car, std::string color);
int main(){
  
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2020;   
    car1.color = "Red";

    car2.model = "Corvette";
    car2.year = 2021;
    car2.color = "Blue";

    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(Car &car){
    std::cout <<&car<< '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void printCar(Car &car, std::string color){
  
    std::cout << car.color << '\n';
}