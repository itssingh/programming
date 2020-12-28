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
    string s;
    cin>>s;
    string::iterator i=s.begin();
    while(i!=s.end()){
        if((*i=='A' && *(i+1)=='B') || (*i=='B' && *(i+1)=='B')){
            s.erase(i+1);
            s.erase(i);
            if(i>s.begin()) i--;
        }
        else i++;
    }
    cout<<s.size()<<"\n";
    s.erase();
}
return 0;
}