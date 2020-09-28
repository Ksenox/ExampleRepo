#include <stdio.h>

int main(){
    int arr[100];
    char space_sym = ' ';
    int arr_size = 0;

    printf("Hello, User\n");

    while(arr_size < 100 && space_sym == ' '){
        scanf("%d%c",arr+(arr_size++),&space_sym);
        
    }

    printf("Size of array is %d\n", arr_size);

    for(int i = arr_size-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}