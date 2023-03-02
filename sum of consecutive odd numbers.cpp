#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if(a>b) swap(a,b);
        if((a&1)) a+=2;
        else a++;
        int sum=0;
        for(int i=a;i<b;i+=2) sum+=i;
        cout<<sum<<endl;

    }return 0;
}
