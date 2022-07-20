#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=INT32_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    cout<<min<<endl;
}