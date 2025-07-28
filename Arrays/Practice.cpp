#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"Enter array size: ";
    cin>>n;
    int cnt = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter number to set a range: ";
    cin>>x;
    for  (int i=0;i<n;i++){
        if(arr[i]>x){
            cnt ++;
        }
    }
    cout<<cnt;

}