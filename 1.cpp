/*Standard template library - STL*/
#include<iostream>
#include<array>
//standard library for arrays
using namespace std;

int main(){
    int arr[]={1,2,3,4};//intialized array using classical definition
    array<int,5> a={1,2,3,4,5};//intialized the array using STL

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"element at any index: "<<a.at(0)<<endl;
    cout<<"array is empty or not: "<<a.empty()<<endl;
    cout<<"first element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;
}