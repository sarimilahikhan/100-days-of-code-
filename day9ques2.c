#include <stdio.h>
void hanoi(int n,char f,char t,char a){
    if(n==0) return;
    hanoi(n-1,f,a,t);
    printf("%c -> %c\n",f,t);
    hanoi(n-1,a,t,f);
}
int main() {
    int n; scanf("%d",&n);
    hanoi(n,'A','C','B');
    return 0;
}
