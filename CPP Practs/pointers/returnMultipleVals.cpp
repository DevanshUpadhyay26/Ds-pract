#include<iostream>

//Traditional Method without pointer

// int minVal(int num[],int size)
// {
//     int min = num[0];
//     for(int i=0;i<size;i++){
//         if(num[i] < min) {min = num[i];}
//     }
//     return min;
// }

// int maxVal(int num[],int size)
// {
//     int max = num[0];
//     for(int i=0;i<size;i++){
//         if(num[i] > max) {max = num[i];}
//     }
//     return max;
// }

// int main(){
//     int arra[5]{1,2,3,4,5};
//     std::cout<<"Minimum: "<<minVal(arra,5)<<'\n';
//     std::cout<<"Maximum: "<<maxVal(arra,5)<<'\n';
// }


//Return Min Max values from array using pointer in single function


// void returnValueP(int num[], int size, int* min, int* max){
//     *min = num[0];
//     *max = num[0];
//     for(int i=0;i<size;i++){
//             if(num[i] < *min) {*min = num[i];}
//             if(num[i] > *max) {*max = num[i];}
//         }
// }

// int main(){

//     int N;
//     std::cout<<"Enter size"<<'\n';
//     std::cin>>N;
//     int* array = new int[N]; // New operator
//     for(int i=0;i<N;i++){
//         std::cin>>array[i];
//     }
//     int minVal{0};
//     int maxVal{0};
//     returnValueP(array, N, &minVal, &maxVal);
//     std::cout<<"Min: "<<minVal<<'\n'<<"Max: "<<maxVal;

// }


//Using Vectors:
#include <vector>
void returnValueP(std::vector<int>& num, int size, int* min, int* max){
    *min = num[0];
    *max = num[0];
    for(int i=0;i<size;i++){
            if(num[i] < *min) {*min = num[i];}
            if(num[i] > *max) {*max = num[i];}
        }
}

int main(){
    
    std::vector<int> array;
    
    // Below approach wont work, Because it you have not poppulated the array elemets; Its Unknown
    // int size;
    // for(int i=0;i<array.size();i++){
    //     array.push_back(i);
    // }


    int size{5};  //Hard Coded or User input
    for(int i=0;i<size;i++) {
        int value;
        std::cin>>value;
        array.push_back(value);
    }
    int minVal{0};
    int maxVal{0};
    returnValueP(array, size, &minVal, &maxVal);
    std::cout<<"Min: "<<minVal<<'\n'<<"Max: "<<maxVal;

}
