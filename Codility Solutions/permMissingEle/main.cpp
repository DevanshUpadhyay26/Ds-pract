#include <vector>
using namespace std;

int solution(vector<int> &A){
if (A.empty()) return 1;
sort(A.begin(),A.end());
for(int i =0;i<A.size();i++){
    if(A[i] != A[i+1]) return i+1;
}
return (A[A.size()-1]+1);

}