#include <iostream>
#include <string>
using namespace std;

// NAMESPACE CONSTRUCTOR:SIMPLE :: OUTSIDE :: TYPES(Default)
namespace constructor{

    namespace simple
    {
        class NSDL{
            private:
                int _nsr_id;
            protected:
                string _company_name;
            public:
                NSDL()
                {
                    cout<<"Enter your 12 digit NSDR ID: ";
                    cin>>_nsr_id;
                    cout<<"Enter Company Name: ";
                    getline(std::cin>> std::ws, _company_name);
                }
                void display(){
                    cout<<"NSR ID: "<<_nsr_id<<endl;
                    cout<<"Company Name: "<<_company_name<<endl;
                }
        };
        int main(){
            NSDL nsr;
            nsr.display();
        }
    }

    namespace outside
    {
       class College{
        private:
            string stud_Name;
        public:
            College(string stud_Name);
            void display();
       };
       College::College(string _candidate_Name){
        stud_Name = _candidate_Name;
       }
       void College::display(){
        cout<<"Student Name is: "<<stud_Name;
       }
       int main(){
        College c("Devansh");
        c.display();
       }     
    }     

    namespace types
    {
        namespace defaultCon
        {
            int main(){constructor::simple::main();}
        } // namespace defaultCon

        namespace parameterized
        {
            int main(){constructor::outside::main();}
        } // namespace parameterized
        

        namespace copy
        {
            class University{
                private:
                    int _student_id;
                    string _student_address;
                public:
                    University(int, string);
                    University(University& u){
                        cout<<"Copy Constructor is Called! "<<endl;
                        _student_id = u._student_id;
                        _student_address = u._student_address;
                    };
                    void display();
            };
            University::University(int prn, string location){
                _student_id = prn;
                _student_address = location;
            }
            
            void University::display(){
                cout<<"Student ID is: "<<_student_id<<endl;
                cout<<"Student Location is: "<<_student_address;
            }
            
            int main(){
                University u(2143110188,"Mumbai");
                u.display();
                cout<<'\n';
                University student_one(u);
                student_one.display();

            }
        } // namespace copy
        
        namespace move
        {
            
        } // namespace move
        
    } // namespace types
}
// NAMESPACE DESTRUCTOR
namespace destructor
{
    namespace example1
    {
        class College
        {
        private:
            int _prn;
        public:
            College(int);
            void display();
            ~College();
        };
        
        College::College(int _c_id)
        {
            _prn = _c_id;
        }   

        void College::display(){
            cout<<_prn<<endl;
        }
        
        College::~College()
        {
            cout<<"This is Destructors";
        }
        

        int main(){
            College c(21345);
            c.display();
            
        }
    } // namespace example1
    
    namespace example2
    {
        static int count {0};
        class Iterations
        {            
        public:
            Iterations(/* args */);
            ~Iterations();
        };
        
        Iterations::Iterations(/* args */)
        {
            cout<<"No. of Time Constructor is Created"<<count<<endl;
            count++;
        }
        
        Iterations::~Iterations()
        {
            cout<<"No. of Time Constructor is Destroyed"<<count<<endl;
            count--;
        }
        int main(){
            Iterations i1,i2,i3,i4;
        }
        //Objects are destroyed in the reverse order of their creation. In this case, t3 is the first to be destroyed, while t is the last.
    } // namespace example2

} // namespace destructor


// NAMESPACE FRIEND FUNCTION: FRINEDCLASS :: FRIENDFUNCTION
namespace friendFn{
    namespace friendClass
    {
        class College{
        private:
            int _teachers_info;
        protected:
            int _stud_info;
        public:
            College(){
                _teachers_info = 100;
                _stud_info = 10;
            }
            friend class Dept;
    };
    class Dept{
        public:
            void display(College& c){
                cout<<c._teachers_info<<endl;
                cout<<c._stud_info<<endl;
            }
    };
    int main(){
        College c;
        Dept d;
        d.display(c);  
        }
    
    }
    
    namespace friendFunction{

        class NSDL{
            private:
                int _nsr_id;
            protected:
                string _company_name;
            public:
                NSDL()
                {
                    cout<<"Enter your 12 digit NSDR ID: ";
                    cin>>_nsr_id;
                    cout<<"Enter Company Name: ";
                    getline(std::cin>> std::ws, _company_name);
                }
                void display(){
                    cout<<"NSR ID: "<<_nsr_id<<endl;
                    cout<<"Company Name: "<<_company_name<<endl;
                }
        };
        int main(){
            NSDL nsr;
            nsr.display();
        }
    }

}

int main(){
    // constructor::simple::main();
    // constructor::outside::main();
 
    // constructor::types::defaultCon::main();
    // constructor::types::parameterized::main();
    // constructor::types::copy::main();
    // constructor::types::move;

    // destructor::example1::main();
    // destructor::example2::main();

    // friendFn::friendClass::main();
    // friendFn::friendFunction::main();
}