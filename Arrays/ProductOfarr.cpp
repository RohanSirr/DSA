#include<iostream>
using namespace std;
int main(){
    cout<<"Enter arr No. : ";
    int n;
    cin>>n;
    int arr[n];
    int pro=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pro = pro*arr[i];
    }
    cout<<pro;
}