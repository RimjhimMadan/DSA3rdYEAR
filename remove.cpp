#include<iostream>
#include<vector>
#include<algorithm>>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=count(v.begin(),v.end(),1);
    v.erase(v.begin()+c);
    for(int i=0;i<n-1;i++){
        cout<<v[i]<<" ";
    }

}