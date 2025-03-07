#include <stdio.h>
void swap(int* a,int* b) {
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void f(int r[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++)
        if(r[i]>r[j]) {
            swap(&r[i],&r[j]);
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    f(a,n);
    for(int y=0;y<n;y++) {
        printf("%d ",a[y]);
    }
    return 0;
}