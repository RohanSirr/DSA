#include<iostream>
using namespace std;
int main(){
    
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    cout<<"Enter Target :- ";
    cin>>x;
    bool flag=false;                            //false means absent 
    for(int i=0; i<8; i++){
        if(arr[i]==x){
            flag=true;
            break;
        }
    }
    if(flag==true)
    cout<<x<<" is present";
    else
    cout<<x<<" is Not present";
}