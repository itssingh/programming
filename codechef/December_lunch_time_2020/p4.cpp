#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag= true;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,m,q,x,y,k;
    ll v;
    cin>>n>>m;
    vector<vector<ll>> a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    cin>>q;
    while(q--) {
        flag =true;
        cin>>x>>y>>v;
        a[x-1][y-1]=v;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if (j>=i && a[i][j]!=a[0][j-i]){
                        flag =false;
                        break;
                }
                else if(i>j && a[i][j]!=a[i-j][0]){
                        flag =false;
                        break;
               }

            }
        }
        if(flag)    cout<<"Yes\n";
        else    cout<<"No\n";
    }
}
return 0;
}