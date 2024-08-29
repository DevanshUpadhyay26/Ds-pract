#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
/*
K=num of Clusters
M= largest element in vector
A is vector 
*/

// Sum of All ele = maxSum
// sum of Largest element = M+ele
// ans= M to maxSum  

int checks(vector <int>& A, int largest_sum){

int sum=0;
int count=0;

for(int i =0;i<A.size();i++){
    if((sum+ A[i]) > largest_sum){
        sum=0;
        count++;
    }
    else{
        sum+=A[i];
    }
}
return count;
}
int solution(int K, int M, vector<int> &A)
{


 int start= *max_element(A.begin(),A.end());
 int end= accumulate()


}



