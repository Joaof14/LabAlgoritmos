#include <stdio.h>

int main (){
    int n1;
    printf("Vamos realizar a multiplicação de dois números inteiros!\nDigite o primeiro número\n");
    scanf("%d", &n1);
    int n2;
    printf("Digite um segundo número \n");
    scanf("%d", &n2);
    int n3 = n1*n2;
    printf("O resultado foi %i", n3);
    return 0;
}