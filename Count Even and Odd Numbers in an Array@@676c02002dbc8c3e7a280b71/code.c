#include <stdio.h>
void f(int a[],int n) {
    int e=0;
    int o=0;
    for(int i=0;i<n;i++) {
        if(a[i]%2==0) {
            e++;
        }
        else {
            o++;
        }
    }
    printf("%d %d",e,o);
}
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    }
    f(a,n);

}