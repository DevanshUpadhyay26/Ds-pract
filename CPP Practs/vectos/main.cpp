#include <vector>
#include <iostream>
using namespace std;
int main()
{
// Vectors => Array that dynamically changes size, no need to say size. Space issue solved!


    vector<int> v1= {1,2,3,4};

    // int sizeV=v1.size();
    // for(int i=0;i<sizeV;i++){
    //     cout<<v1[i]<<endl;
    // } 
    cout<<v1.front()<<endl;
    // cout<<v1.back()<<endl;
    v1.push_back(5);
    cout<<v1.back()<<endl;
    // v1.push_back(6);
    // v1.push_back(7);
    // v1.push_back(8);
    // v1.push_back(9);
    // cout<<"Before"<<endl;
    // cout<<v1.size()<<endl;  // Num of elements it holds
    // cout<<v1.capacity()<<endl;  // Num of elements it can hold
    // v1.pop_back();
    // cout<<"After"<<endl;
    // cout<<v1.size()<<endl;  // Num of elements it holds
    // cout<<v1.capacity()<<endl;  // Num of elements it can hold. Capacity didnt changed!
    // cout<<"Capacity reduced"<<endl;
    // v1.shrink_to_fit();
    // cout<<v1.capacity()<<endl; 


    // cout<<"Vector 2"<<endl;
    // vector <int> v2={1,2,3,4};
    // v2.insert(v2.begin(), 0);
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<endl;
    // }
    // cout<<"Removing"<<endl;
    // v2.erase(v2.begin());
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<endl;
    // }
    





}
