#include <stdio.h>


/* Crie um programa que gere a tabuada de um número n até m vezes, onde m é
informado pelo usuário. O programa deve perguntar ao usuário se deseja
calcular outra tabuada ao final. */ 


int main(){
    int n, m, resultado;
    int tabuada = 1;
    while (tabuada == 1){

        printf("Digite um número n para calcular sua tabuada\n");
        scanf("%d", &n);
        printf("Digite um número m para definir até onde vai a tabuada\n");
        scanf("%d", &m);

        for (int i = 0; i <=m; i++)
        {
            resultado = n * i;
            printf("%d x %d = %d\n", n, i, resultado);
        }

        printf("Deseja realizar outra tabuada? Digite 1 para sim ou 0 para encerrar\n");
        scanf("%d", &tabuada);
    }

    

    return 0;
}