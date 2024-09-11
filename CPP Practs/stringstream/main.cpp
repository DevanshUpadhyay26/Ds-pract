#include <iostream>
#include <sstream>
#include <string>
int main (){

   std::string stringVar = "1 2 3 4 5";
   std::istringstream issVar (stringVar); 
//Creation of i string stream object
    int num;
   while (issVar>>num)  std::cout<<num<<std::endl;
//This loop continues to run as long as issVar successfully reads an integer.

   return 0; 
}