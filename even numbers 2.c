#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        printf("%d\n",i);
    }if(n==1) printf("-1");
    return 0;
}


