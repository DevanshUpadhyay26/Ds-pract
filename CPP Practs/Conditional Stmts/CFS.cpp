/*

if Else using namespace fn
namespace piVal{
    double val( int pi){
        double piD=static_cast<double> (pi);
        return piD;
    }
}
int main(){
    double value=3.0;
    if(value == piVal::val(static_cast<int>(value)))
    {
        std::cout<<"THE WORK IS DONE";
    }
    else{
    std::cout<<"THIS IS NOT";
}}

Switch:
void printDigitName(int x)
{
    switch (x)
    {
    case 1:
        std::cout << "One";
        return;
    case 2:
        std::cout << "Two";
        return;
    case 3:
        std::cout << "Three";
        return;
    default:
        std::cout << "Unknown";
        return;
    }
}

switch (x) // x evaluates to 3
    {
    case 1:
        std::cout << "One";
        break;
    case 2:
        std::cout << "Two";
        break;
    case 3:
        std::cout << "Three"; // execution starts here
        break; // jump to the end of the switch block
    default:
        std::cout << "Unknown";
        break;
    }

bool isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}


Definition is allowed before case label
intilization is not allowed before case label
switch (1)
{
    int a; // okay: definition is allowed before the case labels
    int b{ 5 }; // illegal: initialization is not allowed before the case labels

case 1:
    int y; // okay but bad practice: definition is allowed within a case
    y = 4; // okay: assignment is allowed
    break;
}


goto stmt
int main(){
    double x{};
    tryAgain:
        std::cout<<"Enter a number"<<std::endl;
        std::cin>>x;
    if(x<0.0){
        std::cout<<"FFS ENTER A NON NEGATIVE NUMBER"<<std::endl;
        goto tryAgain;
    }
    std::cout<<"Sqr: "<<x*x<<std::endl;
}
*/


#include <iostream>
