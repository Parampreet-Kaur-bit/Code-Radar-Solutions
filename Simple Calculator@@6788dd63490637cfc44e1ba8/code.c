#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=='+') {
        printf("%d",a+b);
    }
    else if(c=='-') {
        printf("%d",a-b);
    }
    else if(c=='*') {
        printf("%d",a*b);
    }
    else if(c=='/') {
        printf("%d",a/b);
    }
    else {
        printf("error");
    }
    return 0;
}