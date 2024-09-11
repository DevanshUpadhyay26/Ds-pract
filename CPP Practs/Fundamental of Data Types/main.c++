/*

1. Null Pointer 

    int* ptrName= nullptr;
    std::cout<<ptrName;

2. Data types Size  using sizeof function

bool:1 bytes
char:1 bytes
short:2 bytes
int:4 bytes
long:4 bytes
long long:8 bytes
float:4 bytes
double:8 bytes
long double:12 bytes


3. Signed and Unsigned Int

signed short ss;
signed int si;
signed long sl;
signed long long sll;

unsigned short ss;
unsigned int si;
unsigned long sl;
unsigned long long sll;

    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';
    
    x = 65536; 
    65536 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; 
    65537 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';



int s { -1 };
    std::cout << static_cast<unsigned int>(s) << '\n'; // prints 4294967295

    unsigned int u { 4294967295 }; // largest 32-bit unsigned int
    std::cout << static_cast<int>(u) << '\n'; // implementation-defined prior to C++20, -1 as of C++20



4. Type Conversion

 
4.1. Implicit TC:  Compiler TC with us explicitly asking to convert

int DD(double a);
int main(){
    DD(5);
}
int DD(double a){
std::cout<<a;
return 0;
}


NOTE: 
    INT to Double OK
    Double to INT NOT OK



4.2. Explicit TC: We Tell Compiler to convert

static_type<new type> (exp);


int num1 = 5;
    int num2 = 2;
    int resultWithoutCast = num1 / num2;
    std::cout << "Result without static_cast: " << resultWithoutCast << std::endl;
    double resultWithCast = static_cast<double>(num1) / (num2);
    std::cout << "Result with static_cast: " << resultWithCast << std::endl;


    
*/


#include <iostream>

int main() {
    

    return 0;
}
