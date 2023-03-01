#include<stdio.h>
int main(){
    int n,max=-1;
    scanf("%d",&n);
    while(n--){
        int k;
        scanf("%d",&k);
        if(k>max) max=k;
    }printf("%d\n",max);
    return 0;
}
