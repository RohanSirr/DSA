#include<iostream>
using namespace std;
int main(){
    int arr[5]={20,10,5,40,2};
    int mi=arr[0];
    for(int i=1;i<5;i++){
        mi=min(mi,arr[i]);
    }
    cout<<"The Minimum is : "<<mi;
}