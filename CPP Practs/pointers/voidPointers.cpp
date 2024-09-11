#include <iostream>

using namespace std;


// 
void print(void* ptr, char types){
    switch (types)
    {
    case 'i': cout<< *((int*) ptr)<<endl;
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

int main()
{
    char chr{'a'};
    bool t{true};
    print(&chr, 'c');
    print(&t, 'b');
    
}