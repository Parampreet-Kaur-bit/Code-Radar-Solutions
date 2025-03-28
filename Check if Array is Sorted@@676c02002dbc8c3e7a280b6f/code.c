#include <stdio.h>
#include <stdbool.h>
bool f(int a[],int n) {
    int t=0;
    for(int i=0;i<(n-1);i++) {
        if(!(a[i]<=a[i+1])) {
            t=1;
            break;
        }
        else {
            t=0;
        }
    }
    if(t==1) {
        return false;
    }
    else if(t==0) {
        return true;
    }
}
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    }
    if(f(a,n)) {
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
}