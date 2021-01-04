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
    int n,count,temp,sum;
    cin>>n;
    count=0;//count no of 2
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp==2) count+=1;
    }
    sum=(count*2)+(n-count);
    if(sum%2!=0 || (n%2!=0 && count==n))
        cout<<"No\n";
    else 
        cout<<"Yes\n";
 
}
return 0;
}