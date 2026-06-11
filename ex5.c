#include<stdio.h>
#include<stdlib.h>

int main(){

    int lado;
    int area = 0;

    printf("Qual é a medida de um dos lados do quadrado????\n");
    scanf("%d", &lado);

    area = lado * 4;

    printf("%d é a área do seu quadrado", area);

    system("pause");
    return 0;
}