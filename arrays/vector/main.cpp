#include "bits/stdc++.h"
using namespace std;

int main(){

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    v.pop_back();

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    vector<int> v2(3,50);
    swap(v,v2);
    
    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;    

    for(auto element:v2){
        cout<<element<<" ";
    }cout<<endl;
    
    return 0;
}
