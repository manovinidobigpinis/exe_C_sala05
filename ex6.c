#include<stdio.h>
#include<stdlib.h>

int main(){

    float peso, altura;
    float imc;

    printf("Qual seu peso?\n");
    scanf("%f", &peso);

    printf("Qual sua altura em cm?\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu imc e de: %.2f\n", imc);

    system("pause");
    return 0;
}