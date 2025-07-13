#include<iostream>
using namespace std;
int cnt = 0;
void fn(){
    if(cnt == 6)
    return;
    cout<<cnt<<" ";
    cnt++;
    fn();
}
int main(){
    fn();
}
