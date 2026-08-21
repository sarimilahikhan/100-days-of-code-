#include <stdio.h>
int main() {
    int n,f=1; scanf("%d",&n);
    for(int i=2;i*i<=n;i++) if(n%i==0){f=0;break;}
    if(n>1&&f) printf("Prime\n"); else printf("Not\n");
    return 0;
}
