#include <iostream>

int main ()
{
    double temp;
    char unit;

    std::cout<<"****Temperature conversion****\n";

    std::cout<<"F = Fahrenheit\n";
    
    std::cout<<"C=Celsius\n";

    std::cout<<"What unit would you like to convert to: ";
    std::cin>>unit;

    if(unit == 'F'|| unit == 'f'){
        std::cout<<"enter the temperature in Celsius : ";
        std::cin>>temp;

        temp=(1.8*temp) + 32.0;
        std::cout<<"Temperature is :"<<temp<<"F\n";
    }
    else if (unit=='c'|| unit=='C'){
        std::cout<<"Enter temparature in Fahrenheit : ";
        std::cin>>temp;
        
        temp = (temp-32)/1.8;
        std::cout<<"Temperature is :"<<temp<<"C\n";

    }
    else{
        std::cout<<"Plese enter only C or F!\n";
    }

    std::cout<<"******************************";

    return 0;
}