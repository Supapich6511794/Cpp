#include <iostream>
// //namespace = for large project , make one varilable can have many value a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.
// namespace first{
//     int x=1;
// }
// namespace second{
//     int x= 2;
// }

// int main(){
//     using namespace first; ///show value in namespace first   
//     // int x=0;
//     std:: cout << x;
//     std:: cout << first:: x;
//     std:: cout << second:: x;
//     return 0;
// }


////////shorter vertion//////////////
int main(){
    using namespace std;
    // using std::cout;
    // using std::string;
    
    std::string name="Bro";

    std::cout<< "Hello "<< name;

    return 0;
}