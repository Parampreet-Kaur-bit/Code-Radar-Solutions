#include <stdio.h>
int f(int a[],int n,int s) {
    for(int i=0;i<n;i++) {
        if(a[i]==s) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n,s;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    }
    scanf("\n%d",&s);
    printf("%d",f(a,n,s));

}