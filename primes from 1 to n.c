/*#include<stdio.h>
int main(){
    int i,n,flag;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        flag=1;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            flag=0;
            break;
        }
    }if(flag=1) printf("%d ",i);
    }return 0;
}*/


#include <stdio.h>
int main(){
    int i, j, end, isPrime;
    scanf("%d", &end);
    for(i=2; i<=end; i++){
        isPrime = 1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }if(isPrime==1){
            printf("%d ", i);
        }
    }return 0;
}

