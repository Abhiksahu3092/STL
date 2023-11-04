/*Vectors in STL*/
/*Vector -> Vector is a dynamic array which does not has any fixed size. Whenever the no. of elements in the array is equal to the size of the array, the new array is formed which is double the size of previous array and the elements of that previous array are copied to this new array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;//Formation of dynamic array using STL
    cout<<"size: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"capacity: "<<v.capacity()<<endl;//capacity shows the max. capacity of the vector
    cout<<"size: "<<v.size()<<endl;//size shows the no. of elements in the vector

    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    v.clear();
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    vector<int> a(5,1);//intializes all the elements of the 
}