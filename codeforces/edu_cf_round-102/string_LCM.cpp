#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
string str_mul(string s,int n){
    string ans=s;
    for (int i=1;i<n;i++){
        ans.append(s);
    }
    return ans;
}
bool pre_string(string a,string b){
    bool ans=true;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            ans=false;
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    string s1,s2,lcm;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<s1<<"\n";
    }
    else{
        int a=s1.size(),b=s2.size();
        if(a>b){
            string temp=s1;
            s1=s2;
            s2=temp;
            a=s1.size();
            b=s2.size();
        }
        if(pre_string(s1,s2)){
            if(str_mul(s1,b/a)==s2){
                cout<<s2<<"\n";
            }
            else if(str_mul(s2,a)==str_mul(s1,b)){
                cout<<str_mul(s1,b)<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
        else 
            cout<<"-1\n";
    }
}
return 0;
}