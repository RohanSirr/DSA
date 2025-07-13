#include<iostream>
using namespace std;
void fn(int n, int fact){
    if(n==1){
    cout<<fact;
    return;
    }
    fn(n-1,fact*n);
}
int main(){
    int n;
    cin>>n;
    fn(n,1);
}