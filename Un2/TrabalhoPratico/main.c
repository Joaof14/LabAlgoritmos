#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calcular a distância entre todas as cidades usando a fórmula da distância euclidiana.
2. Gerar todas as rotas possíveis que começam e terminam na cidade 0.
3. Avaliar cada rota e determinar qual tem a menor distância total.*/
void printarMatrizDistancias(int tamanho, double matriz[tamanho][tamanho]) {
    printf("\nMatriz de Distâncias:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%.2f\t", matriz[i][j]); 
        }
        printf("\n");
    }
}

// Adiciona um array para guardar a melhor rota encontrada
double gerarPermutacoes(int tamanho, int permutacao[tamanho], int usado[tamanho], int nivel, double matriz[tamanho][tamanho], int melhorRota[tamanho + 1], double menorDistancia) {
    if (nivel == tamanho - 1) {
        double soma = 0;
        int rota[tamanho + 1];
        rota[0] = 0;
        for (int i = 0; i < tamanho - 1; i++) {
            rota[i + 1] = permutacao[i];
        }
        rota[tamanho] = 0;
        for (int i = 0; i < tamanho; i++) {
            soma += matriz[rota[i]][rota[i + 1]];
        }
        if (soma < menorDistancia) {
            menorDistancia = soma;
            for (int i = 0; i <= tamanho; i++) {
                melhorRota[i] = rota[i];
            }
        }
        return menorDistancia;
    }

//gera permutações recursivamente até encontrar a melhor distancia
    for (int i = 1; i < tamanho; i++) {
        if (!usado[i]) {
            usado[i] = 1;
            permutacao[nivel] = i;
            menorDistancia = gerarPermutacoes(tamanho, permutacao, usado, nivel + 1, matriz, melhorRota, menorDistancia);
            usado[i] = 0;
        }
    }
    return menorDistancia;
}

// calcular menor rota inicializando a menor com um valor absurdo
double calculoMenorRota(int tamanho, double matriz[tamanho][tamanho], int melhorRota[tamanho + 1]) {
    int permutacao[tamanho - 1];
    int usado[tamanho];
    for (int i = 0; i < tamanho; i++) usado[i] = 0;
    double menorDistancia = 10000000.0;
    menorDistancia = gerarPermutacoes(tamanho, permutacao, usado, 0, matriz, melhorRota, menorDistancia);
    return menorDistancia;
}



int main(){
    int numRotas = 1;
    int tamanho = 10;
    int cidades[tamanho][2];
    int i;

    //calcular numero de rotas totais e definir valores pra cidades
    for(i = 0; i < tamanho; i++){
        cidades[i][0] = rand() % 100; 
        cidades[i][1] = rand() % 100; 
        printf("Cidade %d: (%d, %d)\n", i, cidades[i][0], cidades[i][1]);
        numRotas = numRotas*(i+1);
    }


    //calcular matriz de distancias
    double matrizDistancias[tamanho][tamanho];
    for(i = 0; i < tamanho; i++){
        for (int j = i+1; j < tamanho; j++){
            matrizDistancias[i][i] = 0; 
            matrizDistancias[i][j] = sqrt( pow(cidades[i][0] - cidades[j][0], 2) + pow(cidades[i][1] - cidades[j][1], 2));
            matrizDistancias[j][i] = matrizDistancias[i][j]; 
        }
    }
    printarMatrizDistancias(tamanho, matrizDistancias);

    //
    int melhorRota[tamanho + 1];
    double menorDistancia = calculoMenorRota(tamanho, matrizDistancias, melhorRota);
    printf("\nMenor distância total encontrada: %.2f\n", menorDistancia);

    // printar menor rota
    printf("Menor rota: ");
    for (int i = 0; i <= tamanho; i++) {
        printf("%d ", melhorRota[i]);
    }
    printf("\n");

    return 0;
}