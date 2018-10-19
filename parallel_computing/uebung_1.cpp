//
// Created by wa78sej on 19.10.18.
//

#include <stdio.h>

int my_max( int *array, int len){
    int max = 0;
    for (int i=0;i<len;i++){
        if (array[i]>max){
            max = array[i];
        }

    }
    return max;
}

int main(){
//    printf("Please enter a number: \n");
//    int n;
//    scanf("%d",&n);
//    int a[4];
//    for (int i=0;i<4;i++){
//        a[i] = 1;
//    }
//    printf("%d \n", a[1]);
//    printf("%d", *(a+3));
    int array[5];
    array[0] = 20;
    array[1] = 2;
    array[2] = 3;
    array[3] = 5;
    array[4] = 9;

    int result = my_max(array,5);
    printf("%d",result);
    return 0;
}

