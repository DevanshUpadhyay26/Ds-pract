#include <iostream>
#include <vector>

using namespace std;

namespace vectors
{
    class Vecters
    {
    public:
        vector<int> vecc {1,2,3,4,5};

        void display(){
            for (int i = 0; i < vecc.size(); i++)
            {
                cout<<vecc[i]<<" ";
            }}
        
        void displayIterators(){
            cout<<"Iterators Methods"<<endl;

            cout<<"begin: "<<*(vecc.begin())<<" "<<"End: "<<*(vecc.end()-1)<<endl;

            cout<<"Reversed Beginning: "<<
            *(vecc.rbegin())<<" "<<
            "Reversed Ending: "<<
            *(vecc.rend()-1)<<endl;

            cout<<"Constant Begin: " << 
            *(vecc.cbegin())<<" "<<
            "Constant End: "<<
            *(vecc.cend()-1)<<endl;

            cout<<"Const Rev Begin: "<<
            *(vecc.crbegin())<<" "<<
            "Const Rev End: "<<
            *(vecc.crend()-1)<<endl;


        }
        void capacity(){
            cout<<"Size: "<<vecc.size()<<endl;
            cout<<"Capacity: "<<vecc.capacity()<<endl;
            cout<<"Max Size: "<<vecc.max_size()<<endl;
            vecc.resize(7);
            cout<<"After Resizing: "<<vecc.size()<<endl;
            if(!vecc.empty()){cout<<"NOT EMPTY"<<endl;}
            vecc.shrink_to_fit();
            cout<<"After shrinking: "<<vecc.capacity()<<endl;
        }
        void accessEle(){
            cout<<vecc[0]<<endl;
            cout<<vecc.at(3)<<endl;
            cout<<vecc.front()<<endl;
            cout<<vecc.back()<<endl;
            cout<<*(vecc.data())<<endl;
        }
        void modifers(){
            vector<int> testV{};
            testV.assign(5,10);
            for(int i=0;i<testV.size();i++){
                cout<<testV[i]<<" ";
            }
            cout<<endl;
            cout<<"Size of Vector: "<<testV.size()<<endl;
            for (size_t i = 1; i <= 5; i++)
            {
                testV.push_back(i);
            }
            cout<<"After Pushing: "<<endl;
            for(int i=0;i<testV.size();i++){
                cout<<testV[i]<<" ";
            }
            cout<<endl;
            cout<<"Size of Vector: "<<testV.size()<<endl;
            
            testV.insert(testV.end(), 20);
               for(int i=0;i<testV.size();i++){
                cout<<testV[i]<<" ";
            }
            cout<<endl;
            testV.erase(testV.end()-1);
               for(int i=0;i<testV.size();i++){
                cout<<testV[i]<<" ";
            }
            cout<<endl;

            vector<int> testV1{};
            testV1.assign(5,10);
             for(int i=0;i<testV1.size();i++){
                cout<<testV1[i]<<" ";
            }
            cout<<endl;
            testV1.clear();
             for(int i=0;i<testV1.size();i++){
                cout<<testV1[i]<<" ";
            }
            cout<<endl;

            vector<int> testV2{},testV3{};
            testV2.assign(5,99);
            cout<<"Test 2: ";
             for(int i=0;i<testV2.size();i++){
                cout<<testV2[i]<<" ";
            }
            cout<<endl;
            testV3.assign(5,9);
            cout<< "Test 3: ";
             for(int i=0;i<testV3.size();i++){
                cout<<testV3[i]<<" ";
            }
            cout<<endl;

            testV2.swap(testV3);
            cout<<"Test 2: ";
             for(int i=0;i<testV2.size();i++){
                cout<<testV2[i]<<" ";
            }
            cout<<endl;
            cout<< "Test 3: ";
             for(int i=0;i<testV3.size();i++){
                cout<<testV3[i]<<" ";
            }
            cout<<endl;


            
        }
    };
    int main(){
        Vecters v;
        // v.display();
        // v.displayIterators();
        // v.capacity();
        // v.accessEle();
        v.modifers();
    }    
    
} // namespace vectors


int main(){
vectors::main();
}