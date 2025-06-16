#include <iostream>

int main(){
    // type conversion = conversion value of type to another
    //                  Implicit =automatic 
    //                  Explicit = Precede value with data type (int) x
     double x=(int) 3.14;
     std:: cout<<x<< '\n';

     char y = 100;////in Asgii table 100=d
     std:: cout << y<<'\n';
     std:: cout <<(char) 100<<'\n';

     int correct = 8 ;
     int quesions = 10;
     double score = correct/(double)quesions * 100;

     std:: cout<< score<< "%" ;
     
    return 0;
}