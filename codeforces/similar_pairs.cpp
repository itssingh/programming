#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag =true;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t,n;
cin>>t;
while(t--){
    flag=true;
    cin>>n;
    vector<int> a(n);
    int no=0;
    for(int i=0; i<n; ++i){
        cin>>a[i];
        if(a[i]%2)  no++;
    }
    if(no%2==0)   cout<<"Yes\n";
    else{
        no=0;
        sort(a.begin(),a.end());
        vector<int>::iterator it=a.begin();
        while(it!=a.end()-1){
            if(*(it+1)%2 != (*it)%2 && *(it+1)==(*it)+1){
                cout<<"Yes\n";
                flag =false;
                break;}
		it++;
        }
        if(flag) cout<<"No\n";
}}
return 0;
}
