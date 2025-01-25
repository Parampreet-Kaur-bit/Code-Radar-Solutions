#include <stdio.h>

int main() {
    char a;
    int s;
    scanf("%d",&s);
    for(int i=0;i<s;i++) {
        a='A';
        for(int j=0;j<i;j++) {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}