#include <stdio.h>

//Desenvolva um algoritmo que leia um número inteiro e mostre a tabuada desse número (do 1 ao 10). 

int main(){
    printf("Escreva um número para que seja msotrado a tabuda dele de 1 a 10\n");
    int n;
    scanf("%d", &n);
    int resultado;

    for (int i = 1; i <= 10; i++)
    {
        resultado = n*i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    
    return 0;
}