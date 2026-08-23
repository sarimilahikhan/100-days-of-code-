#include <stdio.h>
#include <string.h>
int main() {
    char s[100]; scanf("%s",s);
    int c=0;
    for(int i=0;i<strlen(s);i++)
        if(strchr("aeiouAEIOU",s[i])) c++;
    printf("%d\n",c);
    return 0;
}
