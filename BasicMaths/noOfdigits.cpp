#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int cnt = (int)(log10(n) + 1);
    // int lastDigit;
    // while(n>0){
    //     lastDigit=n%10;             brute force method
    //     cnt++;
    //     n=n/10;
    // }
    cout<<cnt;
}

