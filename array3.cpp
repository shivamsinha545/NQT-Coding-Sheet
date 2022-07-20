#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    cout<<"second smallest:"<<a[1]<<endl;
    cout<<"second largest:"<<a[n-2]<<endl;
}