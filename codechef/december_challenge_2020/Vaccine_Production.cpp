#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int d1,v1,d2,v2,p;
int d=1;
cin>>d1>>v1>>d2>>v2>>p;
if(d1>d2){
    int temp=d1;
    d1=d2;
    d2=temp;
    temp=v1;
    v1=v2;
    v2=temp;
}
while(p){
   if(d1!=d2){
       if(d<d1){
           d=d1;
           p-=v1;
       }
       else if(d<d2){
           d++;
           p-=v1;
       }
       else{
           int v=v1+v2;
           v=ceil(p/v);
           d+=v;
           break;
       }
   }
   else{
       if(d<d1) {
        d=d1;
       p-=(v1+v2);}
       else{
          int v=v1+v2;
           v=ceil(p/v);
           d+=v;
           break; 
       }
   }
        
}
cout<<d;
return 0;
}
