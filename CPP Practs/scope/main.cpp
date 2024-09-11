/*

Namespace:
namespace <identifier>{
/// content
}


1.1. Two Namespaces
namespace printer{
    void print(){
        std::cout<<"This is under printer"<<std::endl;
    }
}
namespace inputer{
    int input(int a){ 
        return sizeof(a);
    }
}

int main(){
    printer::print();
    int temp;
    std::cin>>temp;
    std::cout<<"This size of this input is: "<<inputer::input(temp);    
}


1.2. Global Namespace with no prefix

void printerr(){
std::cout<<"This is global man"<<std::endl;
}

int main(){
::printerr();
}


1.3. Nested Namespace
namespace classes{
std::string subject1(){
    std::string sub1{"OOPs"};
    std::cout<<sub1<<std::endl;
    
}
std::string subject2(){
    std::string sub2{"DBMS"};
    std::cout<<sub2<<std::endl;
}
namespace students{
    void stud1(){
        std::cout<<"This is student 1"<<std::endl;
        subject1();
    }
    void stud2(){
        std::cout<<"This is student 2"<<std::endl;
        subject2();
    }
}}

int main(){
    classes::students::stud1();
    classes::students::stud2();
}

Alias to namespace
int main(){
    namespace clas = classes;
    clas::students::stud1();
    clas::students::stud2();
}

3 Nested Namespaces:
namespace classes{
std::string subject1(){
    std::string sub1{"OOPs"};
    std::cout<<sub1<<std::endl;
    
}
std::string subject2(){
    std::string sub2{"DBMS"};
    std::cout<<sub2<<std::endl;
}
namespace students{
    void stud1(){
        std::cout<<"This is student 1"<<std::endl;
        subject1();
    }
    void stud2(){
        std::cout<<"This is student 2"<<std::endl;
        subject2();
    }

    namespace marks{
        void marks(){
            std::cout<<"Marks for this students is: 100%"<<std::endl;
        }
    }
}}

int main(){
    classes::students::stud1();
    classes::students::stud2();
    classes::students::marks::marks();
}



Scope of Local and Global Variables:

{ 
    int apples { 5 }; 
    { 
    std::cout << apples << '\n'; // print value of outer block apples
        int apples{ 0 }; 
        apples = 10; // this assigns value 10 to nested block apples, not outer block apples
        std::cout << apples << '\n'; // print value of nested block apples
    } 
    std::cout << apples << '\n'; // prints value of outer block apples
}
*/

#include <iostream>

 // outer block apples destroyed