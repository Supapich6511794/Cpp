#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};



int main() {
    //struct =  A structured that group related variables undre one name
    //          structs can contain many different data types(string, int, char, etc.)
    //          variable in structs are know as "members"
    //          member can be accessed with. "Class Member Access Operator" (.)
    
    student student1;
    student1.name = "SpongeBob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = false;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << student1.name<<'\n';
    std::cout << student1.gpa<<'\n';
    std::cout << student1.enrolled<<'\n';

    std::cout << student2.name<<'\n';
    std::cout << student2.gpa<<'\n';
    std::cout << student2.enrolled<<'\n';

    std::cout << student3.name<<'\n';
    std::cout << student3.gpa<<'\n';
    std::cout << student3.enrolled<<'\n';

    return 0;
}
