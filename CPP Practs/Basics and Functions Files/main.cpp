/*

1. Variable initilization

int a;         // no initializer (default initialization)
int b = 5;     // initial value after equals sign (copy initialization)
int c( 6 );    // initial value in parenthesis (direct initialization)

List initialization methods (C++11) (preferred)
int d { 7 };   // initial value in braces (direct list initialization)
int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
int f {};      // initializer is empty braces (value initialization)

int main()
{
    An integer can only hold non-fractional values
    int w1 { 4.5 }; // compile error: list init does not allow narrowing conversion of 4.5 to 4

    int w2 = 4.5;   // compiles: copy init initializes width with 4
    int w3(4.5);    // compiles: direct init initializes width with 4

    return 0;
}
------------------------------------------------------------------------------------
2. Variables Name and Identifiers and Functions : Best Practices:

Identifiers:

int value; // conventional
int Value; // unconventional (should start with lower case letter)
int VALUE; // unconventional (should start with lower case letter and be in all lower case)
int VaLuE; // unconventional (see your psychiatrist) ;)
-------------------------------------------------
Functions:

int my_variable_name;   // conventional (separated by underscores/snake_case)
int my_function_name(); // conventional (separated by underscores/snake_case)
int myVariableName;     // conventional (intercapped/camelCase)
int myFunctionName();   // conventional (intercapped/camelCase)
int my variable name;   // invalid (whitespace not allowed)
int my function name(); // invalid (whitespace not allowed)
int MyVariableName;     // unconventional (should start with lower case letter)
int MyFunctionName();   // unconventional (should start with lower case letter)
---------------------------------------------------
Functions Structure:

void doB()
{
    std::cout << "In doB()\n";
}
void doA()
{
    doB();
}
int main()
{
    doA();
    return 0;
}
----------------------------------------
Functions Return Types:
int getVal(){
    int n;
    std:: cin>>n;
    return n;
}
void doNothing(){
    std::cout<<"HEHE";
}
int main(){
    int num = getVal();
    std::cout<<num<<std::endl;
    doNothing();
    return 0;
}
-----------------------------------------
Error Function: 
int getNumbers()
{
    return 5;
    return 7;
}

int main()
{
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n';

    return 0;
}
 Above Code will print 5 twice. as 7 is never been called.
------------------------------------------------------------------------------

3. Local Scope of Variables

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int x{ 0 };    // x's lifetime begins here

    doSomething(); // x is still alive during this function call

    return 0;
} // x's lifetime ends here


--------------------------------------------------------------
Temp Variable
int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value of input back to the caller
}

int main()
{
	std::cout << getValueFromUser() << '\n'; // where does the returned value get stored?

	return 0;
}
 -----------------------------------------------------------------
 void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}
int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << "main: x = " << x << " y = " << y << '\n';

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;
}


*/
#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}
