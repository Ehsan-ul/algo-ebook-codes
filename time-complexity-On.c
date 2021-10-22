#include <stdio.h>

int main() {

    int i;
    int arr[] = {5, 10, 50};

    for(i=0; i<sizeof(arr) / sizeof(arr[0]); i++){
        printf("%d\n", arr[i]);
    }
}