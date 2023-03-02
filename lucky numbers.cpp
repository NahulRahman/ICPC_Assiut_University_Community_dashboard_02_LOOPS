#include <bits/stdc++.h>
using namespace std;
bool lucky(int x)
{
    while(x!=0)
    {
        if(!(x%10==4 or x%10==7)) return false; //447
        x/=10;
    }
    return true;
}
int main() {
    int a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    bool nahul=true;
    for(int i=a;i<=b;i++)
    {
        if(lucky(i)==true)
        {
            cout<<i<<" ";
            nahul=false;
        }
    }
    if(nahul==true) cout<<-1<<endl;
    else cout<<endl;
    return 0;
}
