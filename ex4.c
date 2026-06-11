#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1, i;
    int nota_f = 0;
    int media = 0;

    for (i = 1; i<=5; i++){
        printf("Qual a %d° nota: ", i);
        scanf("%d", &n1);
        nota_f = nota_f + n1;
    }
    media = nota_f / 5;
    if (media <7){
        printf("Não passou\n%d de média\n", media);
    }
    else{
        printf("Passou\n%d de média\n", media);
    }

    system("pause");
    return 0;
}