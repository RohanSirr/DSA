#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n= sizeof(arr)/4;                   // agr memory sizes yaad h to direct size se divide kr do 

    int n= sizeof(arr)/sizeof(int);         // wrna simple sizeof jo b data type h usko likh k edivide kr do 
    cout<<n;

}