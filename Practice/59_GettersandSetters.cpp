#include <iostream>

class Stove{
    public:
        int temperature=0;
    public:
    Stove() {
        setTemperature(0);
    }
    Stove(int temperature) {
            setTemperature(temperature);
    }

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature <0){
           this->temperature = 0;
        }else if(temperature > 10){
            this->temperature = 10;
        }else{
            this->temperature = temperature;
        }
    }
};

int main() {
   //Abstracton = hiding unnecessary deta from outside a class
   // getter = function that makes a private attribute READABLE
   // setter = function that makes a private attribute WRITABLE

    Stove stove(5);
    // stove.setTemperature(1000000);
    //stove.temperature = 1000000;

    std::cout << "The temperature setting is: " << stove.getTemperature()<< std::endl;

    return 0;
}