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
    int n,k;
    cin>>n>>k;
    vector<int>array(n);
    for(int i=0;i<n;i++)
        cin>>array[i];
    sort(array.begin(),array.end());
    int count=0;
    int i=1;
    while(i<=n){
        if(i<n && array[i]==array[i-1]){
            count++;
            i++;}
        else {
            if (count>=k)
                cout<<array[i-1]<<" ";
            count=0;
            i++;
        }
    }
    cout<<"\n";
}
return 0;
}