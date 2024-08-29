#include <iostream>
#include <vector>

using namespace std;

/*
    A-> [1,2,3,4,3,2,4]
    1 has no pairs

    return the value of that index which has odd/0 occurance

*/

#include <algorithm>
int solution(vector<int> &A)
{
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i+=2)
{

    if(A[i]!=A[i+1]){
        return A[i];
    }
}
}


int main(){




}