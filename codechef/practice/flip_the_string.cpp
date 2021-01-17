#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag =true;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    string a,b;
    cin>>a>>b;
    int count=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
        count++;
        int j=0;
        while(i+j<n){
            if(a[i+j]!=b[i+j])    j+=2;
            else    break;   
        }
         j-=2;
        for(int k=i;k<=i+j;k+=2){
            if(a[k]=='1')    a[k]='0';
            else    a[k]='1';
        }
    }
}
    cout<<count<<"\n";
}
return 0;
}
