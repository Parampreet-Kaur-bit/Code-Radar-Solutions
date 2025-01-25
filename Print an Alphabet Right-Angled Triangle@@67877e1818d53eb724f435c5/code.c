#include <stdio.h>

int main() {
    char a;
    int e;
    scanf("%d",&e);
    for(int i=1;i<=e;i++) {
        a='A';
        for(int j=0;j<i;j++) {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}