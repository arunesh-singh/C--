#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int maxNo = INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            maxNo = max( maxNo , arr[i][j] );
        }
    }
    cout<<"Largest No is "<<maxNo<<endl;
    return 0;
}