//Educational Codeforces Round 93 (Rated for Div. 2)
//A. Bad Triangle
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	long long a,b,c;
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		for(int i=2;i<n;++i){
			cin>>c;
		}
		if(a+b>c) cout<<"-1"<<"\n";
		else cout<<"1"<<" "<<"2"<<" "<<n<<"\n";	
	}
	return 0;
}
