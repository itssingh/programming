#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x,y;
        cin>>x1>>y1>>x2>>y2;
        x1>x2?x=x1-x2:x=x2-x1;
        y1>y2?y=y1-y2:y=y2-y1;
        if(x==0 && y==0){
            cout<<"SECOND\n";
        }
        else if(x<=1 && y<=1){
            cout<<"FIRST\n";
        }
        else{
            cout<<"DRAW\n";
        }
    }
    return 0;
}