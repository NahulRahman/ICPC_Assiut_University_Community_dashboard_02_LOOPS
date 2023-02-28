#include<stdio.h>
#define MAX 10000
int main(){
    int i,n,a[MAX],even=0,odd=0,pos=0,neg=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0) even++;
        else if(a[i]%2!=0) odd++;
        else if(a[i]>0) pos++;
        else neg++;
    }printf("Even: %d",even);
    printf("Odd: %d",odd);
    printf("Positive: %d",pos);
    printf("Negative: %d",neg);
    return 0;
}
