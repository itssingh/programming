#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void input(vector<int> &a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
vector<int> black(n);
vector<int> white(n);
input(black,n);//hitted by A-C team
input(white,n);
int red;
cin>>red;
int a,b,c,d;//A,B,C,D
cin>>a>>b>>c>>d;
//order is:A-B-C-D-A-B...
int i=0;
int j=0;
while(i<=n||j<=n){
	if(i<n){
		if(a>=black[i])	{
			a+=black[i];
			i++;
		}
		else	a++;
	}
	else{
		if(a>=red){
			cout<<"A-C";
			break;
		}
		else	a++;
	}
	if(j<n){
		if(b>=white[j])	{
			b+=white[j];
			j++;
		}
		else	b++;
	}
	else{
		if(b>=red){
			cout<<"B-D";
			break;
		}
		else	b++;
	}
	if(i<n){
		if(c>=black[i])	{
			c+=black[i];
			i++;
		}
		else	c++;
	}
	else{
		if(c>=red){
			cout<<"A-C";
			break;
		}
		else	c++;
	}
	if(j<n){
		if(d>=white[j])	{
			d+=white[j];
			j++;
		}
		else	d++;
	}
	else{
		if(d>=red){
			cout<<"B-D";
			break;
		}
		else	d++;
	}	
}

return 0;
}
