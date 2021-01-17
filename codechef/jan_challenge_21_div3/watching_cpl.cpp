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
    int n,k;
    cin>>n>>k;
    vector<int> height(n);
    for(int i=0;i<n;i++)
        cin>>height[i];
    sort(height.begin(),height.end(),greater<int>());
    ll tower_1=0;
    ll tower_2=0;
    int boxes=0;
    int i=0;
    while(tower_1<k && tower_2<k && i<n ){
        tower_1+=height[i];
        tower_2+=height[i+1];
        i+=2;
        boxes+=2;
    }
    if(tower_1<k && i<n){
        while(tower_1<k && i<n){
            tower_1+=height[i];
            boxes++;
            i++;
        }
    }
    else if(tower_2<k && i<n){
        while(tower_2<k && i<n){
            tower_2+=height[i];
            boxes++;
            i++;
        }
    }
    if(tower_1>=k && tower_2>=k){
        cout<<boxes<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    
}
return 0;
}