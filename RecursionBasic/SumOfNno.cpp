#include<iostream>
using namespace std;

void fn(int i, int sum){
    if(i<1){
        cout<<sum;                          //Parameterized
        return;
    }
    fn(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    fn(n,0);
}