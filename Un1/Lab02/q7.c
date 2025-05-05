#include <stdio.h>
#include <string.h>

/*Implemente um programa que permita ao usuário converter várias
temperaturas entre Celsius e Fahrenheit, escolhendo a direção da conversão em
cada iteração. O programa termina quando o usuário digita “sair”.*/



int main() {
    //Declaração de variável
    int temperatura;
    char converter[30];
    

    while(1){
        printf("Escolha a unidade que voce quer converter sua temperatura\n Digite 'Celsius' se quer converter de Fahrenheit para Celsius\n Digite 'Fahrenheit' para converter de Celsius para Fahrenheit \n Para sair do programa digite 'sair'\n");
        scanf("%s", converter);

        if ( strcmp(converter, "sair") == 0 )
        {break;}

        printf("Digite a temperatura\n");
        scanf("%d", &temperatura);
        

        if (strcmp(converter, "Celsius") == 0 )
        {
            temperatura = (temperatura - 32) * 5 / 9;
            printf("Temperatura de %d graus Celsius\n", temperatura);
        }

        else if (strcmp(converter, "Fahrenheit") == 0 )
        {
            temperatura = (temperatura * 9 / 5) + 32;
            printf("Temperatura de %d graus Celsius\n", temperatura);
        }
        
    }

    

    return 0;
}