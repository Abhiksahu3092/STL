#include<bits/stdc++.h>
using namespace std;
/*Implementation of doubly ended queue in STL*/

int main(){
    deque<int> b;
    b.push_back(4);
    b.push_front(9);
    b.push_back(5);

    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    //similarly we can use pop_front and pop_back

    cout<<b.at(0)<<endl;
    cout<<b.front()<<endl;
    cout<<b.back()<<endl;
    cout<<endl;

    cout<<b.empty()<<endl;
    cout<<endl;

    /*note->To delete an element in a doubly ended queue*/
    cout<<b.size()<<endl;//size before erasing
    b.erase(b.begin()+1,b.begin()+2);//erases second element from the queue
    cout<<b.size()<<endl;
    for(int j=0;j<b.size();j++){
        cout<<b[j]<<" ";
    }
}