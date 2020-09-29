#include <stdio.h>

int f1(int value){
    return -value;
}

int main(){

    int arr[100];
    int arr_size = 0;

    char sym = ' ';

    while(arr_size < 100 && sym == ' '){
        scanf("%d%c",&arr[arr_size++], &sym);
    }

    for(int i = 0; i < arr_size; i++){
        arr[i] = f1(arr[i]);
    }

    for(int i = 0; i < arr_size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}