#include<stdio.h>
#define MAX 10000
int main(){
    char x;
    scanf("%c",&x);
    int n,a[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
                for(int j=0;j<a[i];j++){
            printf("%c",x);
        }printf("\n");
    }return 0;
}
