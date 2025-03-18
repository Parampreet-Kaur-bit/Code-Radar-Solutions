#include <stdio.h>
void f(int a[],int l,int h) {
    int s[l];
    int e=h;
    int p=0;
    for(int i=(l-e);i<l;i++) {
        s[p]=a[i];
        p++;
    }
    for(int j=0;j<l;j++) {
        s[h]=a[j];
        h++;
    }
    for(int o=0;o<l;o++) {
        a[o]=s[o];
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
    f(a,n,k);
    for(int l=0;l<n;l++) {
        printf("%d\n",a[l]);
    }
    return 0;
}