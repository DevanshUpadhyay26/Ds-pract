/*

*/


#include <iostream>
#include <string>
using namespace std;

class Printer{
    string __name;
    int _availablePaper;
public:
    Printer(string name, int paper){
        __name = name;
        _availablePaper = paper; 
    }
    void print(string txtDoc){
        int requiredPaper = txtDoc.length()/10; // if 40 characters then 40/10 = 4. 4 sheet of paper need to print this doc.

        if(requiredPaper > _availablePaper) throw 0;
        else if(requiredPaper > _availablePaper) throw "No paper";
        cout<<"Printing...." << txtDoc<< endl;
        _availablePaper = _availablePaper - requiredPaper;
    }
};
int main(){

    Printer mp("HP 123",10);
    try{
        mp.print("HEHEE, Devansh Here HEHEE, Devansh Here ");
        mp.print("HEHEE, Devansh Here HEHEE, Devansh Here ");
        mp.print("HEHEE, Devansh Here HEHEE, Devansh Here ");
}catch(const char * txtEception){
        cout<<"txtEception: "<< txtEception<<endl;
}
catch(int exCode){
    cout<<"Exception: "<<exCode<<endl;
}
}