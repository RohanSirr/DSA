#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  
    cout<<"Enter the array size: ";                                 //Array Input
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];
    for ( int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int>mpp;
    for( int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;  
    cout<<"Enter the number of queries: ";                              //Queries Input
    cin>>q;  
    cout<<"Enter the queries: ";                                   
    for (int i=0; i<q; i++){
        int num;
        cin>>num;
                                            //fetching
        cout<<mpp[num]<<endl;
    }

    return 0;
     

}