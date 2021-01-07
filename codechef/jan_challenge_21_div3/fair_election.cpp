#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int counter;
int diff;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int> arr_a(n);
    vector<int> arr_b(m);
    for(int i=0;i<n;i++)
        cin>>arr_a[i];
    for(int j=0;j<m;j++)
        cin>>arr_b[j];
    sort(arr_a.begin(),arr_a.end());
    sort(arr_b.begin(),arr_b.end(),greater<int>());
    diff=accumulate(arr_b.begin(),arr_b.end(),0)-accumulate(arr_a.begin(),arr_a.end(),0);
    int max_swap=min(n,m);
    counter=0;
    int i=0;
    while(arr_a[i]<arr_b[i] && diff>=0 && i<max_swap){
        int swap_diff=arr_b[i]-arr_a[i];
        i++;
        counter++;
        diff-=2*swap_diff;
    }
    if(diff<0)
        cout<<counter<<"\n";
    else 
        cout<<"-1\n";
}
    return 0;
}