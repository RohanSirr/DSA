#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void ntime(int n){
    if(n==cnt) return;
    cout<<"Rohan"<<endl;
    cnt++;
    ntime(n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    ntime(n);
}