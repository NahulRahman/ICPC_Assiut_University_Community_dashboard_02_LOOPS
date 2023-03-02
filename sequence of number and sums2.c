#include<stdio.h>
int main(){
    while(1){
    int start,end,temp,sum=0;
    scanf("%d%d",&start,&end);
    if(start<=0 || end<=0) break;
    if(start>end){
        temp=start;
        start=end;
        end=temp;
    }
    for(int i=start;i<=end;i++){
        printf("%d ",i);
        sum=sum+i;
    }
    printf("sum =%d\n",sum);
    }
    return 0;
}
