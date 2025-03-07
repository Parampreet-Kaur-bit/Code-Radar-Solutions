#include <stdio.h>
#include <stdbool.h>

bool f(int a) {
    int t=0;
    for(int i=2;i<a;i++) {
        if(a%i==0) {
            t=1;
            break;
        }

    }
    if(t==1) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for(int j=0;j<n;j++) {
        scanf("%d",&s[j]);}
    
    for(int p=0;p<n;p++) {
        
    
    if(f(s[p])) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    }
    
    return 0;
}