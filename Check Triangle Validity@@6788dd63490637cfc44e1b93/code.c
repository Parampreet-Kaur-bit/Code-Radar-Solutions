#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b)>c) {
        printf("Valid");
    }
    else if((b+c)>a) {
        printf("Valid");
    }
    else if((a+c)>b) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}