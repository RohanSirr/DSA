#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int cnt=0;
    int lastDigit;
    while(n>0){
        lastDigit=n%10;
        cnt++;
        n=n/10;
    }
    cout<<cnt;
}