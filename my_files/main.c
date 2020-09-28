#include <stdio.h>
#include "func.h"

int main(){
    int arr[100];
    char space_sym = ' ';
    int arr_size = 0;

    while(arr_size < 100 && space_sym == ' '){
        scanf("%d%c",arr+(arr_size++),&space_sym);
        
    }

    for(int i = 0; i < arr_size; i++){
        printf("%d ", func(arr[i]));
    }

    return 0;
}