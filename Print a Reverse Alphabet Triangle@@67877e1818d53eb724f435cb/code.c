#include <stdio.h>

int main() {
    int a;
    char t;
    scanf("%d",&a);
    for(int i=1;i<=a;i++) {
        t='A';
        for(int j=1;j<=a-i+1;j++) {
            printf("%c ",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}