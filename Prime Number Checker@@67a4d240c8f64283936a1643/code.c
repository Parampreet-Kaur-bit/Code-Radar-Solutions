#include <stdio.h>
#include <stdbool.h>

bool isPrime(int a) {
    int t=0;
    if(a==1 || a==0) {
        return false;
    }
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


