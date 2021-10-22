#include<stdio.h>

void number(int n){
    if(n==0)
        return;
    number(n-1);
    printf("%d\n", n);
}

int main(){
    number(10);
    printf("End of main function!");
    return 0; 
}