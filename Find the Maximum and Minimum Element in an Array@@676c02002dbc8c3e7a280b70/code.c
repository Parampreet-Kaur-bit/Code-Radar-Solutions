#include <stdio.h>
void f(int a[],int n) {
    int r=a[0];
    int s=a[0];
    for(int i=0;i<n;i++) {
        if(a[i]<s) {
            s=a[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]>r) {
            r=a[i];
        }
    }
    printf("%d %d",s,r);
}
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    }
}