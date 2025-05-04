#include <stdio.h>

/* Crie um programa que receba o valor dos lados de um triângulo fornecidos
pelo usuário e retorna qual a classificação desse triângulo(Equilátero, Isósceles
e Escaleno) */

int main() {
    // Declaração das variáveis
    int lado1, lado2, lado3;

    // Recebimento dos valores
    printf("Digite o tamanho do primeiro lado do triângulo\n");
    scanf("%d", &lado1);

    printf("Digite o tamanho do segundo lado do triângulo\n");
    scanf("%d", &lado2);

    printf("Digite o tamanho do terceiro lado do triângulo\n");
    scanf("%d", &lado3);

    //Verifivação do tipo de triangulo
    if (lado1 == lado2 & lado1 == lado3) {
        printf("Triângulo equilátero\n");

    }
    else if (lado1 == lado2 | lado2 == lado3 | lado1 == lado3) {
        printf("Triângulo isósceles\n");
    }
    else {
        printf("Triângulo escaleno\n");
    }



    return 0;
}