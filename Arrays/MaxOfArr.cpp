#include<iostream>
using namespace std;
int main(){
    int arr[5]={20,10,5,40,2};
    int mx=arr[0];
    for(int i=1;i<5;i++){
        if (arr[i]>mx) mx = arr[i];
       // mx=max(mx,arr[i]);
    }
    cout<<"The Maximun is : "<<mx;
}