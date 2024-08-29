#include <iostream>
using namespace std;

// Pointer can point different objects
// References are assigned with one object
/*That is efficient. While pointers can arbitrarily be changed to point to any memory addresses and need a dereferentiation in order to read the value, references do refer to a fixed location in memory and behave like normal variables (do not need dereferentiation),  when one wants to read their value. However, since no data is copied from one var to another in either case, changes made to these memory locations will be present instantly for pointers and references.*/
//2.
// void swapp(int* num1, int* num2){
//     int temp= *num1;
//     *num1=*num2;
//     *num2=temp;
// }

int* maxThre(int* num1, int* num2, int* num3){
  int* max=num1;
    if(*num2>*max){
        max=num2;
    }
    if ( *num3 > *max){
        max=num3;
    }
    return max;
  }
int main(){


// //Pointer  (*)
// int* ptr;       //0x0
// cout<<*ptr<<endl;  //Address of the pointer
// int var = 7;    //0xA
// int foo = 8;    //0xB
// ptr=&var;       //Points to var variable(with the help of reference)
// cout<<ptr<<endl;  //Address of var  
// cout<<*ptr<<endl;     // Value of Var

// //Reference (&)
// int& ref = var;     //ref = 7, and object will be same as var
// cout<<&ref<<endl;
// cout<<ref<<endl;

/*Pointer Declaration and Dereferencing

Write a program to declare an integer variable and a pointer to an integer. Assign the address of the variable to the pointer. Print the value of the variable using the pointer*/

// int num=10;
// int * ptr=&num;
// cout<<*ptr;

/*Swapping Two Numbers Using Pointers

Write a function that swaps the values of two integers using pointers. The function should take two integer pointers as arguments.*/

// int num1=10,num2=20;
// swapp(&num1, &num2);
// cout<<num1<<endl<<num2<<endl;

int num1=10,num2=20,num3=30;
int* maxxii= maxThre(&num1,&num2,&num3);
cout<< *maxxii;
}
