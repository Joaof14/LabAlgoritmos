#include <stdio.h>
#include <stdlib.h>

void printVetor(int * vetor, int total){
    for(int i = 0; i<total; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
    

void encontrarMaior(int * vetor, int total){
    int pivo = vetor[0];
    for (int i = 1; i<total; i++){
        if (vetor[i] > pivo){
            pivo = vetor[i];
        }
    }
    printf("O maior é: %d\n", pivo);
}

void encontrarMedia(int * vetor, int total){
    int media = 0;
    for(int i = 0; i<total; i++){
        media += vetor[i];
    }
    media = media/total;

    printf("A média é: %d\n", media);
}

void inverter(int * vetor, int total){
    int vetor2[total];

    for(int i = 0; i<total; i++){
        vetor2[i] = vetor[total-1-i];
    }
    printf("Vetor invertido: ");
    printVetor(vetor2, total);
    
}

void removerDuplicados(int * vetor, int total){
    int vetor2[total];
    for (int i = 0; i<total; i++){
        for (int j = 0; j<total; j++){

        }
    }
}

int verificaOrdem(int * vetor, int total){
    int pivo = 0;
    for (int i = 0; i<total-1; i++){
        if (vetor[i] > vetor[i+1]){
            break;
        }
        else{
            pivo++;
        }
    }
    if (pivo == total-1){
        printf("Array ordenado perfeitamente\n");
        return 1;
    }
    else{printf("Array não ordenado\n");
    return 0;}
}

void subArrayMaiorSoma(int * vetor, int tamanhoTotal, int tamanhoSubarray){
    //
    int max = 0;
    int index;
    for (int i = 0; i < tamanhoTotal-tamanhoSubarray; i++)
    {
        int soma = 0;
        for (int j = i; j < i+tamanhoSubarray; j++){
            soma += vetor[j];
        }
        if (soma > max){
            max = soma;
            index = i;
        }
    }

    printf("Índices do sub array: ");
    for (int k = index; k < index + tamanhoSubarray; k++)
    {
        printf(" %d", k);
    }
    printf("; Maior soma: %d\n", max);
}

void moda(){

}

void mediana(){

}

int main(){

    int vetor[7] = {3,5,6,9,7,5,8};
    //int vetor[5] = {1,2,3,4,5};
    int total = sizeof(vetor)/sizeof(int);

    encontrarMaior(vetor, total);
    encontrarMedia(vetor, total);
    inverter(vetor, total);
    removerDuplicados(vetor, total);
    verificaOrdem(vetor,total);
    subArrayMaiorSoma(vetor, total, 4);


    return 0;
}