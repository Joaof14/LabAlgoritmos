#include <stdio.h>

// Escreva um algoritmo que leia dois números inteiros e mostre qual deles é o maior (ou se são iguais). 


int main(){

    //Declaração de variáveis
    int n1, n2;

    // Recebimento de valor nas variáveis
    printf("Progrma para descobrir qual número inteiro é maior\n");
    printf("Digite o primeiro número\n");
    scanf("%d", &n1);
    printf("Digite o segundo número\n");
    scanf("%d", &n2);

    // Verificação se o número1 é maior/menor/igual ao número2.

    if (n1 > n2) {
        printf("%d é maior que %d", n1, n2);
    }
    else if (n2 > n1) {
        printf("%d é maior que que %d", n2, n1);
    }
     else{
        printf("%d é igual a %d", n1, n2);
     }


    return 0;
}