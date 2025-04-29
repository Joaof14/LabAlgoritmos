#include <stdio.h>

//Desenvolva um algoritmo que leia um número inteiro e mostre a tabuada desse número (do 1 ao 10). 

int main(){
    //Declaração de variável
    int n;

    // Recebimento de valor do número
    printf("Escreva um número para que seja msotrado a tabuda dele de 1 a 10\n");
    scanf("%d", &n);
    int resultado;

    // Iteração para calcular tabuada de 1 a 10 do número recebido
    for (int i = 1; i <= 10; i++)
    {
        resultado = n*i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    
    return 0;
}