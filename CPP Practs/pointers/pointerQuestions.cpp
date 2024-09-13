#include <iostream>
using namespace std;

namespace questOne{
// Write a program to create an array of 5 integers. Use pointer arithmetic to traverse the array and print the elements.
int main()
{
    int luckyNumbers[5];
    for(int i=0;i<5;i++){
        cout<<"Enter 5 Elements: "<<'\n';
        cin>>luckyNumbers[i];
    }
    int* ptr= luckyNumbers;
    for(int i=0;i<5;i++){
        cout<<*(ptr + i) << " ";
    }
}}


namespace questTwo{
    //Question: Write a program to swap two integers using pointers.
    void swapp(int* a, int* b){
        int temp=*a;
        *a = *b;
        *b = temp;
        cout<<"a = "<<*a<<'\n'<<"B = "<<*b;
    }
    int main(){
        int a{5};
        int b{6};
        swapp(&a,&b);
    }
}


namespace questThree{
//Question: Write a program to demonstrate the use of a pointer to a pointer (double pointer).
int main(){
    int a=5;
    int* ptr=&a;
    int** ptrr=&ptr;
    int*** ptrrr=&ptrr;
    cout<<"a = "<<a<<'\n'<<"ptr 1 = "<<*ptr<<'\n'<<"ptr 2 = "<<**ptrr<<'\n'<<"ptr 3 = "<<***ptrrr;
}}


namespace questFour{
//Question: Write a program to dynamically allocate memory for an integer, assign a value, and then free the memory.
int main(){
    int value;
    cin>>value;
    int* a = new int;
    a=&value;
    cout<<*a;
    delete a;
}}


namespace questFive{

//Question: Write a program to pass an array to a function using pointers and find the sum of its elements.
int arraySum(int* arr, int size){
int sum{0};
    for(int i=0; i<size; ++i){
        sum += *(arr+i);
    }
    return sum;
}
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    cout<<"Sum is: " <<arraySum(array, 5);


}}


namespace questSix{
//Question: Write a program to declare a pointer to a function and use it to call a function.
    void print(void* ptr, char types){
    switch (types)
    {
    case 'i': cout<< *((int*) ptr)<< '\n'<<"U choose int"<<endl;
    break;
    case 'f': cout<< *((float*) ptr)<<endl;
    break;
    case 'd': cout<< *((double*) ptr)<<endl;
    break;
    case 'c': cout<< *((char*) ptr)<<endl;
    break;
    case 'b': cout<< *((bool*) ptr)<<endl;
    break;
    default:
        break;
    }
    }
    int main(){
        int a{5};
        void (*ptrFn)(void*, char) = print;
        ptrFn(&a, 'i');
    }
}

int main()
{
    // questOne::main();
    // questTwo::main();
    // questThree::main();
    // questFour::main();
    // questFive::main();
    // questSix::main();
}