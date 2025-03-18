#include <stdio.h>
void f(int a[],int l,int h) {
    int s[l];
    int p=0;
    for(int i=(l-h);i<l;i++) {
        s[p]=a[i];
        p++;
    }
    for(int j=0;j<=h;j++) {
        s[p]=a[j];
        p++;
    }
}
int main() {
    int n,k;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d\n",&a[i]);
    }
    scanf("%d",&k);
    f()
    return 0;
}