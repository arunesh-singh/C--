#include <iostream>
using namespace std;

class diagonalM{
    int n;
    int* arr;

public:
    diagonalM(int N){
        n = N;
        arr = new int[N];
    }
    ~diagonalM(){ delete[] arr; }

    void store(int i,int j,int x){
        if( i<1 || j<1 || i>n || j>n ){
            cout<<"Out of Bounds";
            return;
        }
        else if( i>j && x!=0 ){
            cout<<"x must be zero";
            return;
        }
        else if( i==j )
            arr[i] = x;
    }
    int retrive(int i,int j){
        if( i<1 || j<1 || i>n || j>n ){
            cout<<"Out of Bounds";
            return -1;
        }
        else if( i==j )
            return arr[i];
        return 0;
    }
    void show(){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if( i!=j )
                    cout<<"0\t";
                else
                    cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
    }
};

int main(){

    int n;
    cout<<"Enter no of rows & columns : ";cin>>n;

    diagonalM d1(n);
    int i,j,y;
    cout<<"Enter the elements :\n";
    for(i=1 , j=1 ; i<=n,j<=n ; i++,j++){
        cin>>y;
        d1.store(i,j,y);
    }
    cout<<"The diagonal matrix is :\n";
    d1.show();
    cout<<"Enter the location of retrival :";cin>>i>>j;
    int res = d1.retrive(i,j);
    cout<<"\nRetrieved value is : "<<res;
    
    return 0;
}