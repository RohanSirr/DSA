#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup;
    dup=n;
    int lastDigit;
    int sum = 0;
    
    while(n>0){
        lastDigit = n%10;
        sum = (sum*10)+lastDigit;
        n=n/10;
    }
    if (dup==sum)
    cout<<"Palindrome";
    else
    cout<<"Not palindrome";

}

