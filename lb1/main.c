#include <stdio.h>

int main(){

    int arr[100];
    char sym = ' ';
    int arr_size = 0;

    printf("Hello, User!\n");

    while(arr_size < 100 && sym == ' '){
        scanf("%d%c",&arr[arr_size++],&sym);
    }

    for(int i = arr_size-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    printf("Goodbye\n");

    return 0;
}