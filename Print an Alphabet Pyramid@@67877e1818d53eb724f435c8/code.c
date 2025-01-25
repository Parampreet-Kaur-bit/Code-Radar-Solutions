#include <stdio.h>

int main() {
    char a;
    int s;
    scanf("%d",&s);
    for(int i=1;i<=s;i++) {
        a='A';
        for(int j=1;j<=i;j++) {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}