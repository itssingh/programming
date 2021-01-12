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
    int n,temp,j=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1)    
            temp=9;
        else if(i==2)
            temp=8;
        else if(i==3){
            temp=9;
        }
        else{
            temp=j;
                j++;
            if(j%10==0){
                j=0;
            }
        }
        cout<<temp;
    }
    cout<<"\n";
}
return 0;
}