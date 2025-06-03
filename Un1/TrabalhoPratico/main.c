#include <stdio.h>

/*Desenvolver um programa que receba um número inteiro positivo
informado pelo usuário e calcule todos os números primos menores que
esse número.*/

void classificaPrimo(int numero){
    //Verificação
    int primo = 1;
    for (int i = 2; i < numero; i++){
        if (numero % i == 0) 
        {
            primo = 0;
            break;
        }
    }

    //Mostrar resultados
    if (primo == 1){
        printf("O número %d é primo\n", numero);
    }
    

}

int main(){
    int n = 1;
    do{
        printf("Digite um número inteiro maior que 1 para descobrir os primos menores que ele: ");
        scanf("%d", &n);
        if(n <= 1) {
            printf("Número inválido\n");
        }
        else{break;}

    } while (1);
    if (n == 2){
        printf("Não existe números primos menores que o número 2\n");
    }
    else{
        for (int i = 2; i < n; i++){
            classificaPrimo(i);
        }
    }


    
    return 1;
}