#include<iostream>
using namespace std;
int fn(int n){
    if(n==1)
    return 1;
    return n+fn(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<< fn(n);
}