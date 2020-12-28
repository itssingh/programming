#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,x;
cin>>n;
vector<int> v(n);
int j=n;
for(int i=n;i>0;i--){
    cin>>x;
    v[x]=1;
    while(j>0 && v[j]==1){
        cout<<j<<" ";
        j--;
    }
    cout<<"\n";
}
return 0;
}