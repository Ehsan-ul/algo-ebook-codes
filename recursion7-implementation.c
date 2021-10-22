#include <stdio.h>

int fib(int n){
    if(n==0)  // বেস কেস ১
      return 0;
    if(n==1 || n==2)  // বেস কেস ২
      return 1;
    else
      return (fib(n-1) + fib(n-2));  // রিকার্সন ফাংশন
}

int main() {
    int n = 5;
    printf("\n\nFibonacci series of 5 numbers is : ");

    // লুপ ব্যাবহার করে ফিবোনাচ্চি সিরিজ প্রিন্ট করানো
    for(int i=0; i<n; i++){
      printf("%d ", fib(i));
    }
    printf("\n\n");
    return 0;
}