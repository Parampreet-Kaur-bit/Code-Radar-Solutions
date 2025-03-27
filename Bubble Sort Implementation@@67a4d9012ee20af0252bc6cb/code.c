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
