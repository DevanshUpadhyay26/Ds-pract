#include <iostream>
#include <list>
#include <string>
using namespace std;

namespace   lists
{

    class Listss
    {
    public:

    void listPrinter(list<int> dLL){
        int index{0};
        for (const auto& i : dLL)
        {
            cout<<index<<" "<<i<<endl;
            ++index;
        }
    }

    list<int> _id{1,2,3,4,5,6};
    void front_back(){
        cout<<_id.front()<<endl;
        cout<<_id.back()<<endl;
    }
    void push_pop(){
        _id.push_front(0);
        _id.push_back(7);
        listPrinter(_id);

        cout<<"After Poping: "<<endl;
        _id.pop_front();
        _id.pop_back();
        listPrinter(_id);
    }
    
    void equalOp_splice_merge(){
        list<int> L_1{9,8,7,6};
        cout<<"L 1: "<<endl;
        listPrinter(L_1);
        list<int> L_2{1,2,3,4};
        cout<<"L 2: "<<endl;
        listPrinter(L_2);
        L_1 = L_2;
        cout<<"After Changes"<<endl;
        listPrinter(L_1);

        L_2.splice(L_2.begin(), L_2);
        cout<<"After Changes"<<endl;
        listPrinter(L_2);

    }
    
    
    
    };
    
    int main(){
        Listss L;
        // L.front_back();
        // L.push_pop();
        L.equalOp_splice_merge();
    }
} // namespace  lists



int main(){
    lists::main();
}