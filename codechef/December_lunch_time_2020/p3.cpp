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
    int remain,count=0;
    cin>>s;
    sort(s.begin(),s.end());
    int i=0;
    while(i<s.size()){
        if(s[i]==s[i+1]) {
            count++;
            i+=2;
        }
        else i++;   
    } 
    remain=s.size()-2*count;
    if(remain>=count){
        cout<<count<<"\n";
    } 
    else{
        int n=2*(count-remain);
        cout<<remain+(n/3)<<"\n";
    }  
}
return 0;
}