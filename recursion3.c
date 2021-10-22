#include <stdio.h>

void printFun(int n){
    if(n<1)
        return;
    else{
        printf("%d ",n );
        printFun(n-1);
        printf("%d ",n );
    }
}

int main() {
    int test = 3;
    printFun(test);
    return 0;
}