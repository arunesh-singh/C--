#include <iostream>
#include "bits/stdc++.h"
using namespace std;

bool issorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarr=issorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarr);
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<issorted(arr,7)<<endl;
    return 0;
}