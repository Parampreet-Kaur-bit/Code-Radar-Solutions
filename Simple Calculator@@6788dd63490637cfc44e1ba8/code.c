#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%f %f",&a,&b);
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