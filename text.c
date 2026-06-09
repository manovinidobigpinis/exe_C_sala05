#include<stdio.h>
#include<stdio.h>

int main(){

    char nome[50];

    printf("Digite seu nome: ");
    //scanf("%s", nome);
    fgets(nome, 50, stdin);
    printf("O nome informado foi: %s", nome);

    system("pause");
    return 0;
}