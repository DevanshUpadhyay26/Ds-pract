#include <iostream>
#include <vector>

using namespace std;
int main(){

vector<int> A={1,2,3,4,5};
cout<<A.size();


}

vector<int> solution(vector<int> &A, int K){
    vector<int> B(A.size());

    for(int i=0;i<A.size();i++){
        B[(i+K) %A.size()] = A[i];
    }


}