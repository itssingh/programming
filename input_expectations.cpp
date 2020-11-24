#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t,count;
cin>>t;
count=0;
for(int i=0;i<t;i++){
	int n,temp;
	cin>>n;
	if(t>=n){
		t-=n;
		count+=n;
		for(int j=0;j<n;j++)	cin>>temp;
	}
	else{
		n-=t;
		count+=n+t;
		for(int j=0;j<t;j++){
			cin>>temp;
		}
		break;
	}
	
}
cout<<count<<"\n";
return 0;
}
