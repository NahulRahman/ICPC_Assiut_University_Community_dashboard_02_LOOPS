#include<stdio.h>
int main(){
    int i,j,k=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=4;j++){
            if(j==4) printf("PUM");
            else printf("%d ",k);
            k++;
        }printf("\n");
    }return 0;
}
