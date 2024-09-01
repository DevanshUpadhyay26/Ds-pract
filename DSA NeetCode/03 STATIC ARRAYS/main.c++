#include <iostream>

using namespace std;


int insertMiddle(int arr[], int i, int n, int length) {
    for (int index = length - 1; index >= i; index--) {
        arr[index + 1] = arr[index];
    }   
     
    arr[i] = n;
}


int main(){

    int arr[10]={1,23,4,5};
    int lenght=4;

    int n=99;
    int i=2;
    
    for (int j=0;j<lenght;j++){
        cout<<arr[j]<<" ";
    }
    cout<< ""<<endl;

    insertMiddle(arr,i,n,lenght);
    lenght++;

    for (int j=0;j<lenght;j++){
        cout<<arr[j]<<" ";
    }
    cout<< "";

}