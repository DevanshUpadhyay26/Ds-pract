#include <iostream>
#include <deque>
#include <vector>
using namespace std;

namespace dequeue
{
    class Dequee
    {
    public:

        deque<int> g{1,2,3,4,5};
        void printer(){
            for (size_t i = 0; i < g.size(); i++)
            {
            cout<<"Queue: "<<g[i]<<" "<<endl;
        }}
        void printerParameterized(deque<int> gg){
           for (size_t i = 0; i < gg.size(); i++)
           {
            cout<<"Queue: "<<gg[i]<<" "<<endl;
        }}
        void printStringQueue(deque <string> ggg){
            for (size_t i = 0; i < ggg.size(); i++)
            {
                cout<<i<<" "<<"Player: "<<ggg[i]<<endl;
            }
            
        }

        void modifiersOperations_Push(){
            cout<<"Pushing '0' in front"<<endl;
            g.push_front(0);
            printer();
            cout<<"Pushing '6' in Back"<<endl;
            g.push_back(6);
            printer();
        }
        void modifiersOperations_Pop(){
            cout<<"Poping the Front element"<<endl;
            g.pop_front();
            printer();
            cout<<"Poping the Back Element"<<endl;
            g.pop_back();
            printer();
        }
        void modifiersOperations_Assign_Insert_Erase_Clear(){
            deque<int> waitingLine{};
            waitingLine.assign(5,1);
            // printerParameterized(waitingLine);
            
            //Insert Function
            deque<string> onlinePlayers{"A", "B" , "C", "D", "E"};
            onlinePlayers.insert(onlinePlayers.end(), 5, "Banned");
            // printStringQueue(onlinePlayers);
            
            cout<<"After Updates: "<<endl;
            
            onlinePlayers.insert(onlinePlayers.end()-5, "Terminated");
            // printStringQueue(onlinePlayers);

            cout<<"After Updating More Players: "<<endl;
            vector<string> vec{"On Hold", "Banned", "Terminated", "L"};
            onlinePlayers.insert(onlinePlayers.end(), vec.begin(), vec.end());
            // printStringQueue(onlinePlayers);

            onlinePlayers.erase(onlinePlayers.begin());
            // printStringQueue(onlinePlayers);

            onlinePlayers.clear();
            printStringQueue(onlinePlayers);
        }
    };
    
    


    int main(){
        Dequee d;
        // d.printer();
        // d.modifiersOperations_Push();
        // d.modifiersOperations_Pop();
        // d.modifiersOperations_Assign_Insert_Erase_Clear();
    }
} // namespace dequeue

int main(){
    dequeue::main();
}