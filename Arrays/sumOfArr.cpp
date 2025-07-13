#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no.Of arr: ";
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<sum;
}