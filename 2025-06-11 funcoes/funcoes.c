/* Ler um vetor de 10 elementos e mostrar todos os elementos pares digitados e sua posição no vetor */
/*
#include <stdio.h>

int vetor[10];

void ler_vetor() {
    int i;
    for (i=0; i < 10; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

void mostrar_pares() {
    int i;
    for (i=0; i< 10; i++) {
        if (vetor[i] % 2 == 0) {
            printf("Valor %d na posição [%d]\n", vetor[i], i);
        }
    }
}

int main() {
    printf("Insira os valores do vetor:\n");
    ler_vetor();
    printf("Valores pares e suas posições: \n");
    mostrar_pares();
    return 0;
}*/

/* Ler uma matriz 5x5 de inteiros, calcular e mostrar o somatório dos elementos da matriz */
/*
#include <stdio.h>

int matriz[5][5];

void ler_matriz() {
    int i, j;
    for (i=0; i < 5; i++) {
        printf("Valores da linha %d:\n", i);
        for (j=0; j < 5; j++) {
            printf("Valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somatorio() {
    int i, j, total=0;
    for (i=0; i < 5; i++) {
        for (j=0; j < 5; j++) {
            total += matriz[i][j];
        }
    }
    return total;
}

int main() {
    printf("Insira os valores da matriz: \n");
    ler_matriz();
    printf("Total: %d\n", somatorio());
    return 0;
}
*/

