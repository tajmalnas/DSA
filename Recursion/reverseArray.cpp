#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *a,int l,int r){
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    reverseArray(a,l+1,r-1);
}

int main(){

    int a[5]={1,2,3,4,5};

    reverseArray(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}