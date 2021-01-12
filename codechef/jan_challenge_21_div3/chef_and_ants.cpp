#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool flag=false;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n; //no of lines
        int m; 
        cin>>m;//no of ants on a particular line
        vector<ll> arr(m);
        for (int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        ll neg=0, pos=0, sum=0;
        if(n==1) //for subtask #1
        {
            sort(arr.begin(),arr.end());
            if(arr[0]>0 || arr[m-1]<0)cout<<0<<"\n";
            else
            {
                for(int i=0;i<m;i++)
                {
                    if(arr[i]>0){neg=i;pos=m-i;break;}
                }
                while (neg>0 && pos>0)
                {
                    sum += neg+pos -1;
                    neg --;
                    pos --;
                }
                cout<<sum<<endl;
            }
        }
        else{
            
        }
    }
	
	return 0;
}