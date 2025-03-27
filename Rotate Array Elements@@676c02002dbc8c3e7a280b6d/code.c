#include <stdio.h>
void f(int a[],int l,int h) {
    int s[l];
    int k=h;
    int p=0;
    for(int i=(l-h);i<l;i++) {
        s[p]=a[i];
        p++;
    }
    for(int j=0;j<(h-1);j++) {
        s[k]=a[j];
        k++;
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