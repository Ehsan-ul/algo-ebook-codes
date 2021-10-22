#include<stdio.h>

void number(int n){
    for(int i=1; i<=n; i++)
        printf("%d\n",i);
}

int main(){
    number(10);
    return 0;
}