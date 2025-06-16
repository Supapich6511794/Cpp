#include <iostream>

int main(){

    // dynamic memory = Memory that is allocated after thr program
    //                  is compiled & running.
    //                  Use the'new' operather to allocate
    //                  memory in the heap rathar than the stack

    //                  Useful when we don't know how much memory 
    //                  we need. Makw our programs more flexible.
    //                  espacially when accepting user input.   

    // int *pNum = NULL;

    // pNum = new int; // allocate memory for an int on the heap

    // *pNum = 21;

    //  std::cout<<"address: "<< pNum <<'\n';
    //  std::cout<<"value: "<< *pNum <<'\n';

    // delete pNum; // free the memory on the heap

    char *pGrades=NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin>>size;

    pGrades = new char[size]; // allocate memory for 5 chars on the heap

    for(int i =0; i<size; i++){
        std::cout<<"Enter grade # "<<i+1<<": ";
        std::cin>>pGrades[i];
    }
    for(int i=0; i<size; i++){
        std::cout<<pGrades[i]<<" ";
    }

    delete[] pGrades; // free the memory on the heap

    return 0;

}