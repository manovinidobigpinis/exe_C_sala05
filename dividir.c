//Inclui a biblioteca stdio.h que permite usar entrada e saida de infos(printf e scanf)

#include<stdio.h>

//Inclui a biblioteca stdlib.h que permite funções utilitarias (system())

#include<stdlib.h>


//Declara a função principal onde o programa começa a execução
int main(){

    //Declarar variaveis

    float num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 / num2;

    printf("%.2f",soma);

    //Pausa o sistema até que o user use denovo
    system("pause");
    //Finaliza o sistema retornando 0 - tudo deu bom

    return 0;
}