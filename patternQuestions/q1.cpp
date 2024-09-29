#include <iostream>
using namespace std;

namespace questions
{
    namespace Q1
    {   
        int one_runner(){
              for (size_t i = 1; i <= 6; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
        }
    } // namespace Q1
    namespace Q2
    {
        void two_runner(){
            for (size_t i = 6; i >= 1; i--)
            {
                for (size_t j = 1; j <= i; j++)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
    } // namespace Q2
    
    namespace Q3
    {
        void three_runner(){
            static int num{1};
            for (size_t i = 0; i <= 6; i++)
            {
                for (size_t j = 0; j <= i; j++)
                {
                    cout<<num<<" ";
                    num++;
                }
                cout<<endl;
            }
        }
    } // namespace Q3
    
    namespace Q4
    {
        void four_runner(){
            for (size_t i = 1; i < 6; i++)
            {
                for (size_t j = 1; j <= i; j++)
                {
                    if(
                        (i+j) % 2 == 0
                    ){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }
            
        }
    } // namespace Q4
    
} // namespace questions


int main(){
// questions::Q1::one_runner();
// questions::Q2::two_runner();
// questions::Q3::three_runner();
questions::Q4::four_runner();
}