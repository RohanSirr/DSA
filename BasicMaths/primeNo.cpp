#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cnt++;
        }
    }
            if(cnt == 2){
            cout<<"It's a prime number";
        }
        else{
            cout<<"Not a prime number";
        }
}