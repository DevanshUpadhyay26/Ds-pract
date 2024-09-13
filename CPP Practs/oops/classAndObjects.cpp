#include <iostream>

using namespace std;
class Employee
{
public:             //Available throughtout the codes
    string Name;
    string Company;
    int Age;
};


class Student{
private:

    int ccNumber;
    string ccName;
    void privateFn(){
        cout<<"This is Coming From Private"<<endl;
    }
    int compute(int aP, int bP){
        return aP += bP;
    }
public:
    void accessing(int num, string name, int a, int b){
    privateFn();

    ccName = name;
    ccNumber = num;    
    cout<<"Name: " << ccName <<endl;
    cout << "Number: " << ccNumber <<endl;

    //Return Type from private function
    int res = compute(a ,b);
    cout<<res<<endl;

}};

class NSD{
protected:
    int ITPIN;
    int _company_ID;
};

class TCS: protected NSD{

private:
    int accessingPrivate(int _TCS_ID){
    int _company_ID = _TCS_ID;
    return _company_ID;
}

public:
void accessingPublic(int empId, int a){
    ITPIN=empId;
    cout<<"Your Employee ID is: "<<ITPIN<<endl;
    int accesP = accessingPrivate(a);
    cout<<"Your Company ID is: "<<accesP<<endl;
}};

#include <string>
int main()
{

// Public Class
Employee emp;       //Object initilization
emp.Age=21;         //Accessing the data members of class in outside
// cout<<emp.Age;
emp.Company="TCS";
// cout<<emp.Company<<endl;


// Private Class
Student std;

// int ccNumer;
// cin>>ccNumer;
string ccName;
// getline(std::cin >> std::ws, ccName);
//Accessing the methods of class
// std.accessing(ccNumer,ccName, 1,2);

// Protected Class
TCS tcser;
int _company_id, _emp_id;
cin>>_company_id>>_emp_id;
tcser.accessingPublic(_company_id, _emp_id);


}