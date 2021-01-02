#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    int j=0;
    while(i<n || j<m){
        if(i==n){
            while(j<m){
                cout<<b[j]<<" ";
                j++;
            }
        }
        else if(j==m){
            while(i<n){
                cout<<a[i]<<" ";
                i++;
            }
        }
        else{
            if(a[i]!=b[j]){
                if(a[i]<b[j]){
                    cout<<a[i]<<" ";
                    i++;
                }
                else{
                    cout<<b[j]<<" ";
                    j++;
                }
            }
            else{
                i++;
                j++;
            }
        }
    } 
    cout<<"\n";
}
return 0;
}