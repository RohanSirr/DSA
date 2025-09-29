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

    int hash[13]={0};                       // Precomputation
    for (int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;  
    cout<<"Enter the number of queries: ";                              //Queries Input
    cin>>q;  
    cout<<"Enter the queries: ";                                   
    for (int i=0; i<q; i++){
        int num;
        cin>>num;
                                            //fetching
        cout<<hash[num]<<endl;
    }

    return 0;
}