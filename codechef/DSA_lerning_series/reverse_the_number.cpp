#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,r;
    cin>>t;
    while(t--){
        cin>>n;
        int reverse=0;
        while(n!=0){
        	r=n%10;
        	reverse=reverse*10+r;
        	n/=10;		
		}
		cout<<reverse<<"\n";    
    }
	return 0;
}
