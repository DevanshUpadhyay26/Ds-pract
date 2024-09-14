#include <iostream>
#include <string>

using namespace std;
//Encapsulation
// namespace encapsulation {
// class student {
// private:
//     int _a_id;  // Private member variable
//     string _name;
//     string _stream;
// public:
    // Setter for student ID
//     void set_id(int stud_id) {
//         if (stud_id > 0) {  // Example validation
//             _a_id = stud_id;
//         } else {
//             cout << "Invalid student ID" << endl;
//         }
//     }
// Setter for student name
//     void set_name(string name) {
//         _name = name;
//     }
// Setter for student stream
//     void set_stream(string stream) {
//         _stream = stream;
//     }
// Getter for student ID
//     int get_id() const {
//         return _a_id;
//     }
// Display method
//     void display() const {
//         cout << "Name: " << _name << endl;
//         cout << "Stream: " << _stream << endl;
//         cout << "Student ID: " << _a_id << endl;
//     }
// };
// int main() {
//     student s;
//     s.set_name("Devansh");
//     s.set_stream("CSBS");
//     s.set_id(22324);  // Setting the ID with validation
//     s.display();  // Display the student information
//     cout<<s.getId<<endl;;
// }}  // namespace encapsulation

//Inheritance
// namespace inheritance{
//Single
// namespace singleInheritance{
//     class parent{
//         public:
//             int sum(int a, int b){
//                 return a+=b;
//             }
//             void display(){
//                 cout<<"The Sum is:"<<sum(9,10);
//             }
//      };
//     class child: public parent{
//         public:
//             void callBack(){
//                 display();
//             }
//     };
//     int main(){
//         child c;
//         c.callBack();
//         cout<<endl;
//         cout<<"Child can access parents methods"<<endl<<c.sum(2,3);
// }}
//Multiple
// namespace multipleInheritance{
//     class TCS{
//         public:
//             void returnProject(string projectDetails){
//                 cout<<"Project details is: "<<projectDetails<<endl;
//             }
//     };
//     class client{
//         public:
//             void returnBudget(int budget){
//                 cout<<"The budget for project is: "<<budget<<endl;
//             }
//     };
//     class employe: public TCS, public client{
//         public:
//             void returnPD(int PD){
//                 returnProject("Passport Portal");
//                 returnBudget(6000);
//                 cout<<"The duration will be: "<<PD<<endl;
//             }
//     };
//     int main(){
//         employe e;
//         e.returnPD(120);
//     }
// }
//MultiLevel
// namespace multiLevel{
//     class gP{
//         public:
//             void surname(){
//                 cout<<"Upadhyay"<<endl;
//             }
//     };
//     class parent: public gP{
//         public:
//             void middleName(){
//                 cout<<"R.R. ";
//                 surname();
//             }
//     };
//     class child: public parent{
//         public:
//             void fullName(){
//                 cout<<"Devansh ";
//                 middleName();
//             }
//     };
//     int main(){
//         child c;
//         c.fullName();
//     }
// }
// hirarchical
// class G
// class B: G
// class E: G
// class A: B
// class C: E
// namespace hirarchical
// {
//     class G{
//         public:
//             void gPrint(){
//                 cout<<"Now printing from class G"<<'\n';
//                 cout<<"This is parent G"<<endl;
//             }
//     };
//     class B: public G{
//         public:
//             void bPrint(){
//                 cout<<"Now printing from class B"<<'\n';
//                 gPrint();
//                 cout<<"This is from B class with parent G"<<endl;
//             }
//     };
//     class E: public G{
//         public:
//             void ePrint(){
//                 cout<<"Now printing from class E"<<'\n';
//                 gPrint();
//                     cout<<"This is from E class with parent G"<<endl;
//             }
//     };
//     class A: public B{
//         public:
//             void aPrint(){
//                 cout<<"Now printing from class A"<<'\n';
//                 bPrint();
//                 cout<<"This is A class with Parent B"<<endl;
//             }
//     };
//     class C: public E{
//         public:
//             void cPrint(){
//                 cout<<"Now printing from class C"<<'\n';
//                 ePrint();
//                 cout<<"This is from C class from Parent E"<<endl;
//             }
//     };
//  int main(){
//     C cObj;
//     A aObj;
//     aObj.aPrint();
//     cObj.cPrint();
// }} // namespace 
//Hybrid
// namespace hybrid{
//     class A{
//         public:
//             void aPrinter(){
//                 cout<<"This is coming from A method"<<endl;
//             }
//     };
//     class B{
//         public:
//             void bPrinter(){
//                 cout<<"This is coming from B method"<<endl;
//             }
//     };
//     class C: public A, public B{
//         public:
//             void wrapper(){
//             aPrinter();
//             bPrinter();
//     }};
//     int main(){
//         C cObjs;
//         cObjs.wrapper();
//     }
// }}

//Polymorphism
namespace poly{

    // namespace compileTimeFnOver
    // {
    //     class student{
    //         public:
    //             string acadamics(string courseName){return courseName;}
    //             string acadamics(int courseMarks){return to_string(courseMarks);}
    //             string acadamics(string courseCredits, int courseId){
    //                 if(courseId == 1){
    //                     cout<<"This is Introductory Course: ";}
    //                 return courseCredits;}
    //     };
    //     int main(){
    //         student s;
    //         string _course_C_Id = s.acadamics("Maths",1);
    //         cout<<_course_C_Id<<endl;
    //         string _course_CN = s.acadamics("Physics");
    //         cout<<_course_CN<<endl;
    //         string _course_CM = s.acadamics("Distinction! ");
    //         cout<<_course_CM<<endl;
    //     }
    // } // namespace compileTimeFnOver

    namespace compileTimeOpOver
    {
        class Student{
            public:
                string Name;
                int _s_id;
            
            Student(string name, int _stud_id){
                Name = name;
                _s_id = _stud_id;
            }
        };
        void operator<<(ostream& COUT, Student& student){
            COUT<<"Name: "<<student.Name<<endl;
            COUT<<"Student ID: "<<student._s_id<<endl;
        }
        void operator+(Student& student){
            int res = to_string(student._s_id).length();
            cout<<res;
        }
        int main(){
            Student s = Student("Devansh",01);
            Student s1 = Student("Leetcode",02);
            cout<<s;
            cout<<endl;
            cout<<s1;
            int rest{s._s_id+s1._s_id};
            cout<<"Addition of Ids: "<<rest;

        }
    } 
    // namespace compileTimeOpOver
    
    namespace templatess{
        template<typename T>
        void print(T& value){
            cout<<"VALUE IS: "<<value<<endl;
        }
        int main(){
            print("0101");
        }
    }
}


/*******************Namespace Calling********Main Function**********************/
int main() {
    // encapsulation::main();

    // inheritance::singleInheritance::main();
    // inheritance::multipleInheritance::main();
    // inheritance::multiLevel::main();
    // inheritance::hirarchical::main();
    // inheritance::hybrid::main();

    //  poly::compileTimeFnOver::main();
    // poly::compileTimeOpOver::main();
    poly::templatess::main();
}
