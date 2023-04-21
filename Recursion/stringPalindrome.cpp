#include<bits/stdc++.h>
using namespace std;

bool stringPalindrome(string s,int l,int r){
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    stringPalindrome(s,l+1,r-1);
}

int main(){

    string s;
    cout<<"Enter"<<endl;
    cin>>s;
    bool check = stringPalindrome(s,0,s.size()-1);
    if(check){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}