#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m,greater<int>());
    cout<<"last 5:";
    for(int i=m-5;i<m;i++){
        cout<<arr[i]<<" ";
    }
    int t=accumulate(arr,arr+5,0);
    cout<<endl<<"Sum of top 5: "<<t;
}