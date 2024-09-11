/*
For Loops:






While Loops:
{
    bool val;
    std::cin>>val;
    while (val) // infinite loop if value of val is 1
    {
        std::cout<<"You messed Up"<<std::endl;
    }
    std::cout<<"Enjoy"<<std::endl;
    return 0;
}

{
    int count{0};
    while (count<=50){
        if(count<10){
            std::cout<<"0";
        }
        std::cout<<count<<" ";
        if(count % 10 == 0) std::cout<<'\n';
        count++;
    }
    return 0;
}

number patterns
Q1. 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
void printer(int outer){
    int inner{1};
    while(inner<=outer){
        std::cout<<inner<<" ";
        inner++;
    }
}

int main()
{
    int n;
    std::cin>>n;
    int outer{1};
    while (outer <= n){
        printer(outer);
        std::cout<<'\n';
        outer++;
    }
    return 0;
}

OR 
int main(){

    int n;
    std::cin>>n;
    int outer{1};
    while(outer<=n){
        int inner{1};
        while(inner<=outer){
            std::cout<<inner<<" ";
            inner++;
        }
        std::cout<<'\n';
        outer++;
    }
}


Q2. 
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
void printer(int outer){
    int inner{1};
    while(inner<=outer){
        std::cout<<"*"<<" ";
        inner++;
    }
}
int main()
{
    int n;
    std::cin>>n;
    int outer{1};
    while (outer <= n){
        printer(outer);
        std::cout<<'\n';
        outer++;
    }
    return 0;
}


Q3. rints out the letters a through z along with their ASCII codes. Use a loop variable of type char.
{char n{'a'};
 while(n<='z'){
 std::cout<<n<<" "<<static_cast<int> (n)<<'\n';
 n++;}}


Q4. 
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

{
    int outer{5};
    while(outer>=1){
        int inner{outer};
        while(inner>=1){
            std::cout<<inner<<" ";
            inner--;
        }

        std::cout<<'\n';
        outer--;
    }}

Q5.
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

{
    int outer{1};
    while(outer<=5){
        int inner{5};
        while(inner>=1){
            if(inner<=outer) std::cout<<inner<<' ';
            else {std::cout<<"  ";}   //Two Spaces
        inner--;
        }
        std::cout<<'\n';
        outer++;
    }
}

Q6.
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *


{
    int outer{1};
    while(outer<=5){
        int inner{5};
        while(inner>=1){
            if(inner<=outer) std::cout<<"*"<<' ';
            else {std::cout<<" ";}   //one Spaces
        inner--;
        }
        std::cout<<'\n';
        outer++;
    }
}

*/

#include <iostream>


int main();


