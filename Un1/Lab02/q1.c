#include <stdio.h>

/* Crie um programa que utilize as estruturas condicionais e funções para elaborar um algoritmo que calcule a média de um estudante.
 Obs: O programa precisa verificar se as notas são válidas (entre 0 e 10). */ 


int main(){
    // Declaração de variáveis
    int n1, n2, n3;
    printf("Programa para calcular a média de um aluno e definir sua aprovação\n");

    //Recebimento de valor das variáveis
    printf("Digite a primeira nota e aperte enter\n");
    scanf("%d", &n1);

    while (n1 > 10 | n1 < 0){
        printf("Nota inválida, digite um número de 0 a 10\n");
        scanf("%d", &n1);
    }

    printf("Digite a segunda nota e aperte enter\n");
    scanf("%d", &n2);
    while (n2 > 10 | n2 < 0){
        printf("Nota inválida, digite um número de 0 a 10\n");
        scanf("%d", &n2);
    }
    printf("Digite a terceira nota e aperte enter\n");
    scanf("%d", &n3);
    while (n3 > 10 | n3 < 0){
        printf("Nota inválida, digite um número de 0 a 10\n");
        scanf("%d", &n3);
    }

    // Calculo da média do aluno
    float media = (n1 + n2 + n3)/3;

    printf("Média: %.2f\n", media);
    // Verifcação se o resultado da média aprova ou reprova o aluno
    if(media >= 7){
        printf("O aluno foi aprovado\n");
    }
    else{
        printf("O aluno foi reprovado\n");
    }
}