// Maxium Gap between binary number 
// 10001 = 3 Gaps
// 1000 = 0 gaps
// -------
/*
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.
For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.
 */
/*
    Two Exceptions
    1. Start with 0 0001001001
    2. End with 0 10010001000
*/


#include <vector>
#include <iostream>
using namespace std;
int solution (int N){

vector<int> v;
while(N>0){
    v.push_back(N%2);
    N=N/2;

}

int b=0,bMax=0;

for(int i=v.size()-1;i>=0;i--){
    if(v[i] == 0) b++;
    else if(v[i]==1) bMax=max(bMax,b);b=0;
}
return bMax;

}