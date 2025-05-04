#include <stdio.h>

/* Aproveite o código da questão 01 e adapte para que agora ele trabalhe
aplicando pesos às notas, exemplo: pesos (2, 3, 4) */

int main(){
    // Declaração de variáveis
    int n1, n2, n3, p1, p2, p3;
    printf("Programa para calcular a média de um aluno e definir sua aprovação\n");

    //Recebimento de valor das variáveis com verificações e recebimento dos pesos
    printf("Digite a primeira nota e aperte enter\n");
    scanf("%d", &n1);
    while (n1 > 10 | n1 < 0){
        printf("Nota inválida, digite um número de 0 a 10\n");
        scanf("%d", &n1);
    }
    printf("Digite o peso da primeira nota e aperte enter\n");
    scanf("%d", &p1);

    printf("Digite a segunda nota e aperte enter\n");
    scanf("%d", &n2);
    while (n2 > 10 | n2 < 0){
        printf("Nota inválida, digite um número de 0 a 10\n");
        scanf("%d", &n2);
    }
    printf("Digite o peso da segunda nota e aperte enter\n");
    scanf("%d", &p2);

    printf("Digite a terceira nota e aperte enter\n");
    scanf("%d", &n3);
    while (n3 > 10 | n3 < 0){
        printf("Nota inválida, digite um número de 0 a 10\n");
        scanf("%d", &n3);
    }
    printf("Digite o peso da terceira nota e aperte enter\n");
    scanf("%d", &p3);


    // Calculo da média ponderada do aluno
    float media = ( (n1*p1) + (n2*p2) + (n3*p3) )/(p1 + p2 + p3);

    printf("Média: %.2f\n", media);
    // Verifcação se o resultado da média aprova ou reprova o aluno
    if(media >= 7){
        printf("O aluno foi aprovado\n");
    }
    else{
        printf("O aluno foi reprovado\n");
    }
}