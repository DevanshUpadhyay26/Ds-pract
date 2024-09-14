

#include <iostream>
#include <string>
using namespace std;
namespace templates{
//Function Templates
// namespace Fntemplates
// {
//     template <typename T>
//     T print(T& x, T& y){
//         cout<<"Variable 1 : "<<x<<'\n';
//         cout<<"Variable 2: "<<y<<'\n';
//     }
//     template <typename T>
//     T myMax(T& x, T& y){
//         return x < y ? y : x;
//     }
//     template <typename T>
//     T plusOp(T& x, T& y){
//         return x + y;
//     }
//     template <typename T>
//     T swapFn(T& x, T& y){
//         T temp; 
//         temp = x;
//         x = y;
//         y = temp;
//         return 0;
//     }
//     int main(){
//         int a= 11;
//         int b=10;
//         int values = print(a, b);
//         int maxValue = myMax<int>(a,b);
//         cout<<"Maximum = "<<maxValue<<endl;
//         int sum = plusOp<int>(a,b);
//         cout<<"Sum = "<<sum<<endl;
//         int swapp = swapFn<int>(a,b);
//         cout<<"Swapping Variables:- "<<"Variable 1 = "<<a<<" Variable 2 ="<<b;
//     }} // namespace templates

//Class Templates
namespace classTemplates{

template <typename T>
//Can hold any data types
class Calculator {
public:
    T plus(T& x, T& y){
        return x + y;
    }
    T sub(T x, T y){
        return x-y;
    }
    T multi(T x, T y){
        return x*y;
    }
    T div(T x, T y){
        return x/y;
    }
    T mod(T x, T y){
        return x%y;
    }

};
int main(){
    Calculator<int> intCalculator;
    int a=10,b=20;
    cout<<intCalculator.plus(a,b);
}
}//Class Templates
}

int main(){
    // templates::Fntemplates::main();
    templates::classTemplates::main();
}