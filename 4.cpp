#include<bits/stdc++.h>
using namespace std;
/*Lists using stl*/
/*list elements cannot be accessed directly as it was in the case of deque,arrays and vectors*/

int main(){
    list<int> listitem;
    listitem.push_back(1);
    listitem.push_front(45);

    for(int i:listitem){
        cout<<i<<endl;
    }
}