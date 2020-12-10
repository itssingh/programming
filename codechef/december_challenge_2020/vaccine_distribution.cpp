#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,temp;
    float d;
    float risk=0;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp<=9 || temp>=80)
            risk++;
    }
    int days=ceil(risk/d)+ceil((n-risk)/d);
    cout<<days<<"\n"; 
}
return 0;
}