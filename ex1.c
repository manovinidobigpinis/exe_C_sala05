#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade;
    char nome[50];

    printf("Qual seu nome?\n");
    fgets(nome, 50, stdin);

    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    if (idade <= 15){
        printf("SESI\nNome: %s\nIdade: %d\n", nome, idade);
    }
    else{
        printf("SENAI\nNome: %s\nIdade: %d\n", nome, idade);
    }
    
    system("pause");
    return 0;
}