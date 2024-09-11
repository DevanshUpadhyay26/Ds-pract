#include <iostream>

using namespace std;

int main(){ 


    int n{5};
    cout<<"Address of n: "<<&n<<endl;
    int* ptr{&n};
    cout<<"Through Pointer: "<<ptr<<endl;
    cout<<"Value of Pointer"<<*ptr<<endl;
    //Changing Values through pointer
    *ptr = 10;
    cout<<"Value of Pointer: "<<*ptr<<endl;;
    cout<<"Value of N: "<<n<<endl;;



    //Directly assigning to pointer

    int** vPtr = &ptr;
    cout<<vPtr<<endl;
    cout<<**vPtr<<endl;


    

    return 0;
}