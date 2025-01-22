#include <stdio.h>

int main() {
    int a;
    char b[50];
    char f[50];
    scanf("%s %d\n",b,&a);
    scanf("%s",f);
    printf("Name: %s\n",b);
    printf("Age: %d\n",a);
    printf("Hobby: %s",f);
    return 0;
}