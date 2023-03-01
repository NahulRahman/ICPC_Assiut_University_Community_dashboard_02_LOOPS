#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int ans=1;
        if(n==0) printf("1\n");
        else{
            for(int i=1;i<=n;i++){
                ans*=i;
    }printf("%lld\n",ans);
    }
    }return 0;
}
