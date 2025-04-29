#include <stdio.h>

//Crie um algoritmo que leia dois números inteiros e exiba a multiplicação entre eles. 

int main (){

    //Declaração de variáveis
    int n1;
    int n2;
    

    //Receber variáveis
    printf("Vamos realizar a multiplicação de dois números inteiros!\nDigite o primeiro número\n");
    scanf("%d", &n1);
    printf("Digite um segundo número \n");
    scanf("%d", &n2);
    
    // calcular mostrar resultado
    int n3 = n1*n2;
    printf("O resultado foi %i\n", n3);
    return 0;
}