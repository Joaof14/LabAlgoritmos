#include <stdio.h>

// Faça um algoritmo que leia um número inteiro e informe se ele é par ou ímpar. 

int main(){
    // Declaração de variáveis
    int n;

    // Receber valor para variável
    printf("Digite um número para descobrir se ele é ímpar ou par\n");
    scanf("%d", &n);


    //verificar se é par ou ímpar e mostrar o resultado
    if (n%2 == 0) {
        printf("O número digitado é par\n");
    }

    else{
        printf("O número digitado é ímpar\n");
    }
}