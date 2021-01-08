#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    flag=true;
    ll n,k,x,y;
    cin>>n>>k>>x>>y;
    x>y?flag=true:flag=false;
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
    if(flag){
        while(k){
            if(x==n && y<n){
                x=y;
                y=n;
                k--;
            }
            else if(x<n && y==n){
                y=n-x;
                x=0;
                k--;
            }
            else if (x==0 && y<n){
                x=y;
                y=0;
                k--;
            }
            else if(x<n && y==0){
                y=n-x;
                x=n;
                k--;
            }
        }  
    } 
    else{
         while(k){
            if(x==n && y<n){
                x=n-y;
                y=0;
                k--;
            }
            else if(x<n && y==n){
                y=x;
                x=n;
                k--;
            }
            else if (x==0 && y<n){
                x=n-y;
                y=n;
                k--;
            }
            else if(x<n && y==0){
                y=x;
                x=0;
                k--;
            }
        }  
    }
    cout<<x<<" "<<y<<"\n";  
    }
}
return 0;
}