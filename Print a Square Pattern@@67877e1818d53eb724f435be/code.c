#include <stdio.h>

int main() {
    int i;
    scanf("%d",&i);
    for(int a=0;a<i;a++) {
        for(int b=0;b<i;b++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}