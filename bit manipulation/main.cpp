/*  n=1010
    1<<i=0100
    1010 & 0100 = 0100
*/
#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int getbit(int n,int pos){
    return ((n & (1<<pos)) != 0);
}

int setbit(int n, int pos){
    return (n | (1<<pos));
}

int clearbit(int n, int pos){
    int mask = ~(1<<pos);
    return ( n & mask);
}

int updatebit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return ( n | (value << pos));
}

int main(){
    //cout<<getbit(8,2)<<endl;
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(11,3)<<endl;
    cout<<updatebit(11,2,1)<<endl;
    return 0;
}
