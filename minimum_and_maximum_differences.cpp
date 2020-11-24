#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap_min(int i,int n){
    for(i;i<=n;i++){
        if(i%2) cout<<i+1<<" ";
        else    cout<<i-1<<" ";
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
//for minimum
if(n%2){
    int i=1;
    if(n==3)    cout<<"4\n";
    else{
        int sum=n+2;
        cout<<sum<<"\n";
    }
    while(i<n){
        if(i==1){
            cout<<i+2<<" "<<i<<" "<<i+1<<" ";
            i+=3;
        }
        else{
            swap_min(i,n);
            break;
        }
    }
    cout<<"\n";
}
else{
    cout<<n<<"\n";
    int i=1;
    swap_min(i,n);
}
//for maximum
int mid=(n/2);
int sum=0;
for(int i=1;i<=n;i++){
    if((n-i+1)>i){
        sum+=(n-(2*i)+1);
    }
    else    sum+=((2*i)-n-1);
}
if(!n%2){
    cout<<sum<<"\n";
    for(int i=1;i<=n;i++)
        cout<<(n-i+1)<<" ";
}
else{
    cout<<sum-1<<"\n";
    for(int i=1;i<mid;i++){
        cout<<(n-i+1)<<" ";
    }
    cout<<mid+1<<" "<<mid<<" ";
    for(int i=(mid+2);i<=n;i++){
        cout<<(n-i+1)<<" ";
    }
    cout<<"\n";

}

return 0;
}
