#include <iostream>
#include <array>

using namespace std;

namespace arrayOp
{
    class Array
    {
    public:
        array<int, 6> arr ={1,2,3,4,5,6};

        void displayAll(){   //Operator
            for(int i= 0; i<arr.size();i++){
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;
        }
        void displayAt(){ //At Method
            for(int i= 0; i<arr.size();i++){
                cout<<arr.at(i)<<" ";
                
            }
            cout<<endl;
        }
        void displayGet(){ //Get Method
            cout<<"0th Index has value: "<<get<0>(arr)<<endl;
        }

        void displayFrontBack(){
            cout<<"Front: "<<arr.front()<<endl<<"Back: "<<arr.back();
        }

        void displaySizeMax_Size(){
            cout<<"Size: "<<arr.size()<<endl<<"Max Size: "<<arr.max_size();
        }
        void displaySwap(){
            for(int i= 0; i<arr.size();i++){
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;
            array<int,6> arr1{9,8,7,6,5,4};
            arr.swap(arr1);
            cout<<"After Swapping: "<<endl;
            for(int i= 0; i<arr.size();i++){
                cout<<arr[i]<<" ";
                
            }
            cout<<endl;   
        }
        void displayEmptyFill(){
            if(!arr.empty()){cout<<"Not Empty";}
            cout<<endl;
            array<int, 6>arr3{};
            arr3.fill(0);
            for(int i= 0; i<6;i++){
                cout<<arr3[i]<<" ";
            }
            cout<<endl;
        }
    };

    int main(){
        Array a;
        // a.displayAll();
        // a.displayAt();
        // a.displayGet();
        // a.displayFrontBack();
        // a.displaySizeMax_Size();
        // a.displaySwap();
        a.displayEmptyFill();
    }    
} // namespace arrayOp

int main(){
    arrayOp::main();
}
