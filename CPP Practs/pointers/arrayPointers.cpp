#include <iostream>

int main()
{


    
    int luckyNumbers[5];
    for(int i=0;i<4;i++){
        std::cin>>luckyNumbers[i];
    }
    
    // for(int i=0;i<4;i++){
    //     std::cout<<luckyNumbers[i]<<" ";
    // }

    //For Address
    for(int i=0;i<4;i++){
        std::cout<<"Address of "<<luckyNumbers[i]<<": "<<(luckyNumbers+i);
        std::cout<<'\n';
    }
    for(int i=0;i<4;i++){
        std::cout<<"Values: "<<*(luckyNumbers+i);
        std::cout<<'\n';
    }


    // int* ptr{luckyNumbers};
    // std::cout<<*ptr; 
}