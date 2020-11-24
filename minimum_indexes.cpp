#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=true;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,q,i;
cin>>n>>q;
ll a[2*n];
for(i=0;i<n;i++){
	cin>>a[i];
    a[i+n]=a[i]/10+a[i]%10;
}
while(q--){
	flag =true;
	cin>>i;	
	i-=1;
	for(j=i+1;j<n-1;j++){
		if(a[i]<a[j] && (a[i+n]>a[j+n])){
			cout<<j+1<<"\n";
			flag=false;
			break;
		}
	}
	if(flag)	cout<<"-1"<<"\n";
    }

return 0;
}
