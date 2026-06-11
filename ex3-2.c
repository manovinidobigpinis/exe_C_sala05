#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n = 7;

    printf("\n========TABUADA========");

    for(i = 0; i <= 10; i++){
        printf("\n  %d x %2d = %4d", n, i, (n * i));
    }

    printf("\n=======================\n\n\n");

    system("pause");
    return 0;
}