#include <stdio.h>

int main(){

    int arr[100];
    int arr_size = 0;

    char sym = ' ';

    while(arr_size < 100 && sym == ' '){
        scanf("%d%c",&arr[arr_size++], &sym);
    }

    for(int i = arr_size - 1; i >= 0; i--){
        printf("{%d}",arr[i]);
    }

    return 0;
}