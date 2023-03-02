#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,count=0,sum=0;
        cin>>a;
        while(a!=0){
            if(a%2==1) count++;
            a/=2;
        }for(int i=count-1; i>=0;i--) sum+=pow(2,i);
        cout<<sum<<endl;
    }return 0;
}
