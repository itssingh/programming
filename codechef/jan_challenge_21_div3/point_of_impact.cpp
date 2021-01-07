#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    ll n,k,x,y;
    cin>>n>>k>>x>>y;
    k=k%4;
    if(x==y)
        cout<<n<<" "<<n<<"\n";
    else{
        if(k==0)
            k=4;
        ll diff=min(n-x,n-y);
        x+= diff;
        y+= diff;
        k--;
        while(k){
            if(x==n && y<n){
                x=y;
                y=n;
                k--;
            }
            else if(x<n && y==n){
                y=x;
                x=0;
                k--;
            }
            else if (x==0 && y<n){
                x=y;
                y=0;
                k--;
            }
            else if(x<n && y==0){
                y=x;
                x=n;
                k--;
            }
        }  
    cout<<x<<" "<<y<<"\n";  
    }
}
return 0;
}