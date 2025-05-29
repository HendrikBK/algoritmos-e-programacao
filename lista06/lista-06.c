#include <stdio.h>
#include <string.h>

/* 01 */
/*
int main() {
    int matriz[4][4], i, j, maior;
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("Informe o valor pra matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }
    printf("O maior valor é %d\n", maior);
    return 0;
}
*/

/* 02 */
/*
int main() {
    int matriz[4][4], i, j, maior, linha;
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("Informe o valor pra matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    linha = 0;
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
                linha =  i;
        }
    }
    printf("O maior valor é %d\n", maior);
    printf("Os elementos da linha do maior valor são: ");
    for (i=0; i < 4; i++) {
        printf("%d\t", matriz[linha][i]);
    }
    return 0;
}
*/

/* 03 */

int main() {
    int l, c, menor;
    printf("Informe a quantidade de linhas da matriz: ");
    scanf("%d", &l);
    printf("Informe a quantidade de colunas da matriz: ");
    scanf("%d", &c);
    if (l < c)
        menor = l;
    else
        menor = c;       
    int matriz[l][c], i, j, soma_diag=0;
    for(i=0; i < l; i++) {
        for(j=0; j < c; j++) {
            printf("Informe o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0, j=0; i < menor; i++, j++) {
        soma_diag += matriz[i][j];
    }
    printf("Soma da diagonal principal: %d\n", soma_diag);
    int a[menor], b[menor]; // a = primeira linha; b = última linha
    for(i=0; i < c; i++) {
        a[i] = matriz[0][i];
    }
    for(i=l-1; i < c; i++) {
        b[i] = matriz[0][i];
    }
    for(i=0, j=l-1; i < c; i++, j++) {
        matriz[0][i] = b[i];
        matriz[j][i] = a[i];
    }
    printf("Valores da matriz: \n");
    for (i=0; i < l; i++) {
        printf("matriz[%d]: ", i);
        for(j=0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}