// Maximum Circular Subarray Sum

#include <iostream>
#include <climits>
using namespace std;

int kadane(int a[],int n){
    int currSum=0;
    int mx=INT_MIN;
    
    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
        mx=max(mx,currSum);
    }
    
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum;
    int nwrapsum;
    nwrapsum=kadane(a,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalSum + kadane(a,n);
    cout<<max(wrapsum,nwrapsum)<<endl;
    return 0;
}
