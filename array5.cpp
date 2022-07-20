#include<bits/stdc++.h>
using namespace std;
int main(){;
    vector<int>a;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    set<int>c;
    for(int i=0;i<n;i++){
        c.insert(a[i]);
    }
    vector<int>b;
    set<int>::iterator it;
    for(it=c.begin();it!=c.end();it++){
        int check=*it;
        int count=0;
        for(int i=0;i<n;i++){
            if(check==a[i]) count++;
        }
        b.push_back(count);
    }
    int i=0;
    for(it=c.begin();it!=c.end();it++){
        cout<<*it<<"->"<<b[i]<<endl;
        i++;
    }
}