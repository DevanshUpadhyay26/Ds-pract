/*
1. Call by Value
2. Call by References
3. Call by Address
*/

#include <iostream>
#include <string>
using namespace std;

namespace fnCalling{
    namespace callByValue{
        void callByValueFn(int x){
            cout<<x<<endl;
        }
        int main(){
            int x{10};
            callByValueFn(x);
        }
    }
    namespace callByReferences{
        void callByReferencesFn(int& x){
            cout<<x<<endl;
        }
        int main(){
            int x{10};
            callByReferencesFn(x);
        }
    }
    namespace callByAddress{
        void callByAddressFn(int* x){
            cout<<*x<<endl;
        }
        int main(){
            int x{10};
            int* ptr=&x;
            callByAddressFn(ptr);
        }
        
    }
}

int main(){
    // fnCalling::callByValue::main();
    // fnCalling::callByReferences::main();
    fnCalling::callByAddress::main();
}