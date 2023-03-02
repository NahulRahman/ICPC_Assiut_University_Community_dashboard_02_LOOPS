#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a,o=0,n=0,p=0,e=0,b;
   cin>>a;
   while(a--){
        cin>>b;
       (b&1) ? o++ : e++ ;
       if(b<0) n++;
       if(b>0) p++;
   }cout<<"Even: "<<e<<endl;
   cout<<"Odd: "<<o<<endl;
   cout<<"Positive: "<<p<<endl;
   cout<<"Negative: "<<n<<endl;
    return 0;
}
