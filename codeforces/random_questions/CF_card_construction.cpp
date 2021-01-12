#include<bits/stdc++.h>
using namespace std;
void minprmd(long long n)
{	
	int no=0;
	while(n>1)
	{
		int h=1;
	long long cards=(2*h)+(h-1);
    while (cards<=n)
	{
	  n-=cards;
	  h++;
	  cards=(2*h)+(h-1);	
	}
	no++;
    }
cout<<no<<endl;
		
	
}
int main()
{
	int t;
	cin>>t;
	long long n;
	
	for(int i=0;i<t;i++)
	{
	 cin>>n;
	 minprmd(n);
	 	
	}
	return 0;
}
