#include <iostream>
#include <vector>
using namespace std;
int solution(int X, int Y, int D){


int v = (Y-X)/D;
if(X+v*D < Y){
    return v+1;
}
else return v;

}



