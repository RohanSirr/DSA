#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    map<char, int> mpp; 

    for (int i=0; i<s.size(); i++){
        
        mpp[s[i]]++; 
    }

    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        cout<<mpp[c]<<endl; 
    }
    return 0;
}