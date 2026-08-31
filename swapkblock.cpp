#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i+=2*k){
        for(int j=i;j<i+k;j++){
            swap(v[j],v[j+k]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}