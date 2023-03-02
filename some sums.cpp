#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int value=0;
    while(x!=0)
    {
        value+=(x%10);
        x/=10;
    }
    return value;
}

int main(){
    int a,b,c,d=0,count=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        d=sum(i);
        if(d>=b and d<=c ) count+=i;
    }
    cout<<count<<endl;

   return 0;
