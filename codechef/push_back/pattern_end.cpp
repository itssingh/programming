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
    int n;
    cin>>n;
    if(n==1)    cout<<"*\n";
    else{
        int m=2*n-1;
        int mid,j,k;
        mid=m/2+1;
        for(int i=1; i<n;i++){
            j=mid-(i-1);
            k=mid+(i-1);
            for(int l=1;l<=m;l++){
                if(l==j || l==k){
                    cout<<"*";
                }
                else cout<<" ";
            }
            cout<<"\n";
        }
        for(int l=1;l<=m;l++)
            cout<<"*";
        cout<<"\n";
    }
}
return 0;
}