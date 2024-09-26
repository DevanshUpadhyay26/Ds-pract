#include <iostream>
#include <string>

using namespace std;


namespace Exceptions
{
    namespace classObjects
    {
        class Printer{
            private:
                string _p_name;
                int _available_paper;
            public:
                Printer(int papers,string name){
                    _p_name = name;
                    _available_paper = papers;
                }
                void printer(string txtDoc){
                    int requiredPapers = txtDoc.length()/10;  
    // e.g. 40 chars / 10 = 4 sheet of paper to print this docs of char
                    if (requiredPapers > _available_paper){
                        throw 0.1;
                        // throw 0;
                        // throw "Not enoug paper"
                        // throw false;
                    }
                    cout<<"Printing...."<<
                    '\n'<<txtDoc<<'\n';

                    _available_paper -= requiredPapers;
                }
        };
            int main(){
                
                
                Printer p(1, "HP");
                
                try {
                    p.printer("HEHHEHEHEHEHHEHEHEHE");
                    
                }catch (const char * txtException){
                        cout<<
                        "Exception Occured! "<<txtException;
                }catch (int txtCode)
                {
                        cout<<
                        "Exception Occured! "<<txtCode;
                }
                catch(bool txtBool){
                    string res{to_string(txtBool)};
                    if (txtBool == 0) {res = "false";}
                    cout<<
                        "Exception Occured! "<<res;
                }
                catch(double txtDouble){
                    cout<<
                        "Exception Occured! "<<txtDouble;
                }
            }
    } // namespace classObjects
    namespace dividedBy0
    {
        double cal(double _val1, double _val2){
            if ( _val2 == 0 ) throw runtime_error("Invalid value! Enter Anything apart from zero :D");
            return _val1/_val2;
        }
        int main(){
            cout<<"Enter a number";
            double num1;
            cin>>num1;
            cout<<"Enter second number";
            double num2;
            cin>>num2;
            try{
                double res = cal(num1,num2);
                cout<<"The Result is: "<<
                    endl<<res;
                }
                // catch(const char  * codeError){
                //     cout<<"Exception Occured! "<<codeError;
                // }// catch(...){cout<<"Default Exception";}
                catch(runtime_error& re){
                    cout<<"Exception Occured!"<<endl<<re.what()<<endl;
                }
        }
        
    } // namespace dividedBy0
    namespace stdExcep

    {
        
    } // namespace stdExcep

    
}    // namespace Exceptions


int main(){

    // Exceptions::classObjects::main();
    Exceptions::dividedBy0::main();
}