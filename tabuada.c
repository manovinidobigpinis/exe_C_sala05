#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i, n;

    printf("Informe um número para tabuada: \n");
    scanf("%d", &n);

    printf("\n========TABUADA========");

    for(i = 0; i <= 10; i++){
        printf("\n  %d x %2d = %4d", n, i, (n * i));
    }

    printf("\n=======================\n\n\n");

    system("pause");
    return 0;
}