#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
if(n%2==0){
    //for minimum
    cout<<n<<"\n";
    for(int i=1;i<=n;i++){
        if (i%2)    cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
    cout<<"\n";
    //for maximum
    int sum=0;
    int mid=n/2;
    for(int j=1;j<=mid;j++) sum+=(n-2*j+1);
    sum=2*sum;
    cout<<sum<<"\n";
    for(int j=1;j<=n;j++){
        cout<<n-j+1<<" ";
    }
    cout<<"\n";
}
else{
    //for minimum
    cout<<n+1<<"\n";
    int i=1;
    cout<<i+1<<" "<<i+2<<" "<<i<<" ";
    for(int i=4;i<=n;i++){
        if (i%2)    cout<<i-1<<" ";
        else cout<<i+1<<" ";
    }
    cout<<"\n";
    //for maximum
    int m=n/2;
    int sum=0;
    for(int i=1;i<m;i++)
        sum+=(n-2*i+1);
    sum+=4;
    for(int i=m+3;i<=n;i++)
        sum+=(i-(n-i+1));
    cout<<sum<<"\n";
    for(int j=1;j<m;j++)
        cout<<n-j+1<<" ";
    cout<<m+2<<" "<<m<<" "<<m+1<<" ";
    for(int j=m+3;j<=n;j++)
        cout<<n-j+1<<" ";
    cout<<"\n";
}
return 0;
}
