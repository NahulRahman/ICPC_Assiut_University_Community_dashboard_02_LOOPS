#include <stdio.h>
int main(){
    int n, num, rev = 0;
    scanf("%d", &n);
    num = n;
    while(n != 0){
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }printf("%d\n",rev);
    if(rev == num) printf("YES");
    else printf("NO");
    return 0;
}
