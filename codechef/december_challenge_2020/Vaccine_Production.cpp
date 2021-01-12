#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int d1,v1,d2,v2,p,d;
cin>>d1>>v1>>d2>>v2>>p;
if(d1>d2){
    int temp=d1;
    d1=d2;
    d2=temp;
    temp=v1;
    v1=v2;
    v2=temp;
}
if(d1==d2){
    int v=v1+v2;
    d=(d1-1)+((p-1+v)/v);
}
else{
    if((p-1+v1)/v1<=d2-d1){
        d=d1-1+(p-1+v1)/v1;
    }
    else{
        d=d2-1+(p-((d2-d1)*v1)-1+v1+v2)/(v1+v2);
    }
}
    cout<<d<<"\n";
return 0;
}
