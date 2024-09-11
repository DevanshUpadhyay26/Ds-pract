/*
1. Constant 


Const int a = 10;

a = 20; // Error not visible, const variable being changed


Note: 
    Don’t use const when passing by value.
    Don’t use const when returning by value.




2. Number Systems


int x{ 012 }; // 0 before the number means this is octal
int x{ 0xA }; // 0 before the number means this is Hexa

2.1 To print Binary
	std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101
	std::cout << bin1 << '\n' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it



3. Ternary Operator

<cond>?stmt1:stmt2;

condition is true then execute stmt1 or else stmt2
Note: The type of the second and third operand must match.

e.g.
bool inBigClassroom { true };
int classSize { inBigClassroom ? 30 : 20 };  //30

    int z { (10 - x) > y ? x : y };

4. String
#include <string>


4.1. getline()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin, name); // note: no std::ws here

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';

    return 0;
}

Output: >> Pick Num: 1
        >>Now enter your name: Hello , you picked 1

Compiler acknowleged the whitespace giving choice. 1\n. \n counts as character if we dont use ws. 

4.2. 
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // note: added std::ws here

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';

    return 0;
}
o/p:
Pick 1 or 2: 1
Now enter your name: dev
Hello, dev, you picked 1




4.3 Methods


1. Length or size
string_object.size()
or
string_object.length()


2. Accessing with index
string_object.at(index);

3. Concatination- append or +
string_object1 + string_object2
or
string_object1.append(string2)

4. Comparision - == or compare()
string_object1 == string_object2
or
str1.compare(str2);

5. find
str.find("characters")

6. substrings 
str1.substr(start, end);

7. Modifiying
str1.insert(index, str2);
str1.replace(index, size, str2);
str1.erase(start, end);

    ///--------------Code--------------///
{
    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

Size and Length
    int strLen{name.length()};
    int strSize{name.size()};

Index at()
    std::cout << "Hello ur at " << name.at(0)<<std::endl;

Concatination using + / append() / strcat()
    std::string surname{"Upadhyay"};
    std::string fullName{name+ " " +surname};
    std::string fullName{name.append(surname)};
    std::cout << "Hello " << fullName<<std::endl;
    

Comparison using compare() or ==
    std::string firstName{"dev"};
    if(name == firstName) std::cout<<"sahi hai";
    return 0;
    std::string str1 = "Geeksfdsdsdd";
    std::string str2 = "Geeks";
    int result = str1.compare(str2);
    std::cout<<result;

Find Function
    std::cout<<name.find("Upadhyay");

Sub Strings
    std::cout<<name.substr(0,6);

    std::string arr{"devansh"};
    for(int i=1;i<=4;i++){
        std::cout<<i<<" "<<arr[i]<<std::endl;
    }


Modifying
    std::cout<<name.insert(7," Upadhyay");
    std::cout<<name.replace(0, 1, "D");
    std::cout<<name.erase(1,2);
}


4.4. Iterating with for loops
std::string arr{"devansh"};
    for(int i=0;i<arr.size();i++){
        std::cout<<i<<" "<<arr[i]<<std::endl;
    }


*/

