#include<bits/stdc++.h>
using namespace std;
int main(){;
    vector<int>a;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    
    cout<<"increasing order print:\n";
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)cout<<a[i]<<" ";

    cout<<"\ndecreasing order print:\n";
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}