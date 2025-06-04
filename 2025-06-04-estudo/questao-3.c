#include <stdio.h>

int main() {
    int tam;
    do {
        printf("Informe o tamanho da matriz: ");
        scanf("%d", &tam);
        if (tam > 10)
            printf("Valor inválido! Informe um valor inteiro entre 1 e 10\n");
    } while (tam > 10);
    int matriz[tam][tam], i, j, soma_total=0, soma_diag=0;
    printf("Informe os valores da matriz: ");
    for (i=0; i < tam; i++) {
        printf("Informe os valores da linha %d:\n", i);
        for (j=0; j < tam; j++) {
            scanf("%d", &matriz[i][j]);
            soma_total += matriz[i][j];
        }
    }
    for (i=0; i < tam; i++) {
        soma_diag += matriz[i][i];
    }
    printf("Diferença: %d\n", soma_total - soma_diag);
    return 0;
}