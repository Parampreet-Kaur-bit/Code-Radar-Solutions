#include <stdio.h>

int main() {
    int a,b,c;
    float d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a+b+c;
    e=d/3.0;
    printf("Average: %.2f",e);
    return 0;
}