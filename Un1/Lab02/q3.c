#include <stdio.h>

/* Crie um programa que verifique se um número fornecido pelo usuário é
primo. */

int main(){
    int numero, primo = 1;
    
    //Recebimento do valor
    printf("Digite um número para que possamos descobrir se ele é primo ou não\n");
    scanf("%d", &numero);


    //Verificação
    for (int i = 2; i < numero; i++){
        if (numero % i == 0) 
        {
            primo = 0;
            break;
        }
    }

    //Mostrar resultados
    if (primo == 0){
        printf("O número %d não é primo\n", numero);
    }
    else{
        printf("O número %d é primo\n", numero);
    }

    return 0;
}