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
    int n;
    ll max_score=0;
    ll score=0;
    cin>>n;
    vector<ll>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        score=0;
        long long j=i;
        while(j<=n){
            score+=arr[j];
            j+=arr[j];
        }
        if(score>max_score) 
            max_score=score;
    }
        cout<<max_score<<"\n";
}
return 0;
}