#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node { 
    int value = 0; 
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,m,l,r,x,count;
    cin>>n>>m;
    map<int, Node> Map; 
    string s;
    cin>>s;
    for(int i=0;i<m;i++){
        x=0;count=0;
        cin>>l>>r;
        for(int j=0;j<s.size();j++){
            if(!(j+1>=l && j+1<=r)){
                if(s[j]=='+')
                    x++;
                else x--;
                if(Map[x].value==0){
                    count++;
                    Map.insert({x, 1});
                }
            }
        }
        cout<<count<<"\n";
    }
}
return 0;
}