#include <stdio.h>

// Crie um algoritmo que leia 3 notas de um aluno, calcule a média e informe se ele foi aprovado (média ≥ 7) ou reprovado. 

int main(){
    // Declaração de variáveis
    int n1, n2, n3;

    //Recebimento de valor das variáveis
    printf("Programa para calcular a média de um aluno e definir sua aprovação\n");
    printf("Digite a primeira nota e aperte enter\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota e aperte enter\n");
    scanf("%d", &n2);
    printf("Digite a terceira nota e aperte enter\n");
    scanf("%d", &n3);

    // Calculo da média do aluno
    float media = (n1 + n2 + n3)/3;

    // Verifcação se o resultado da média aprova ou reprova o aluno
    if(media >= 7){
        printf("O aluno foi aprovado\n");
    }
    else{
        printf("O aluno foi reprovado\n");
    }
}