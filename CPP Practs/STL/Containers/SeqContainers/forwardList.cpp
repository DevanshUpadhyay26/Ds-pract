#include <iostream>
#include <forward_list>
using namespace std;


namespace forwardList
{
    class forwardList
    {
    public:
     
    void fL_printer(forward_list<int> fL){
        int index{0};
        for (auto &&i : fL)
        {
            cout<<index<<" "<<i<<endl;
            index++;
        }}


    void assign_op(){
        forward_list<int> ffL{1,2,3,4,5};
        fL_printer(ffL);
    }

    };
    int main(){
        forwardList fl;
        fl.assign_op();
    }

} // namespace forwardList

int main(){
    forwardList::main();
}