#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int lastDigit;
    while(n>0){
        lastDigit=n%10;
        cout<<lastDigit<<" ";
        n=n/10;
    }
}