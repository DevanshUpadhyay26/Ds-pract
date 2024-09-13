#include <iostream>

using namespace std;

namespace structuree{

struct Employee {
    int id;
    std::string name;
    float salary;
};
int main(){
    Employee e1; // create an object of the 'Employee' structure
    e1.id = 1;
    e1.name = "John Doe";
    e1.salary = 40000;
    cout<<e1.id<<endl<<e1.name<<endl<<e1.salary;
}}


#include <string>
namespace classess{
class student{
    int roll_no;
    std::string name;
    float marks;

public:
    void set_data(int r, std::string n, float m) {
        roll_no = r;
        name = n;
        marks = m;
    }

    void display() {
        std::cout << "Roll no: " << roll_no
                  << "\nName: " << name
                  << "\nMarks: " << marks << std::endl;
    }};
int main(){
        student s1;
        s1.set_data(1, "ddev", 23.2);
        s1.display();
    }
}


int main(){
    // structuree::main();
    classess::main();
}