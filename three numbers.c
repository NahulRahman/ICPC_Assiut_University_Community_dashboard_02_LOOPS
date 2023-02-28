#include<stdio.h>
int main(){
    int s,k,c=0;
    scanf("%d%d",&k,&s);
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            if(s-i-j>=0&&s-i-j<=k) c++;
        }
    }printf("%d",c);
    return 0;
}


/*
k &s input, three values of x,y,z such that x+y+z=s;
0<=x,y,z<=k;
s>=x+y    s-x-y>=0  s-x-y<=k
*/
