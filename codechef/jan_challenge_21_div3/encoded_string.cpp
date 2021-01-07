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
    char x='a';
    string s,output_string;
    cin>>n>>s;
    for(int i=0;i<n;i+=4){
        int temp=0;
        temp+=8*(int (s[i]-'0'));
        temp+=4*(int (s[i+1]-'0'));
        temp+=2*(int (s[i+2]-'0'));
        temp+=int (s[i+3]-'0');
        output_string.push_back(char(int(x)+temp));
    } 
    cout<<output_string<<"\n";
}
return 0;
}