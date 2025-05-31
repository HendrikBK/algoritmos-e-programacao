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

/*
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
*/

/* 04 */

/*
int main() {
    int l, c;
    printf("Informe a quantidade de linhas da matriz: ");
    scanf("%d", &l);
    printf("Informe a quantidade de colunas da matriz: ");
    scanf("%d", &c);
    int a[l][c], b[l][c], total[l][c], i, j;
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            printf("Informe o valor para a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);            
            printf("Informe o valor para b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            total[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Matriz A:\n");
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    printf("Matriz B:\n");
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n\n");
    }
    printf("Matriz C:\n");
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            printf("%d\t", total[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 05 */

/*
int main() {
    a[5][5], b[5], c[5], i, j; // a = matriz; b = soma linhas de a; c = soma colunas de a;
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            printf("Informe o valor para a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);    
        }
    }
    for (i=0; i < 5; i++) {
        for (j=0; j < 5; j++) {
            b[i] += a[i][j];
        }
    }
}
*/

/* 06 */

/*
int main() {
    int l, c;
    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &l);
    printf("Informe o número de colunas da matriz: ");
    scanf("%d", &c);
    int a[l][c], i, j;
    printf("Informe os valores: ");
    for (i=0; i < l; i++) {
        printf("Linha %d: ", l);
        for (j=0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int linha;
    do {
    printf("Informe a linha desejada: ");
    scanf("%d", &linha);
    if (linha >= l)
        printf("Valor inválido. Informe um valor menor que %d.\n", l);
    } while (linha >= l);
    int final[c];
    for (i=0; i < c; i++) {
        final[i] = a[linha][i];
    }
    printf("Matriz: \n");
    for (i=0; i < l; i++) {
        for (j=0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma da linha %d (invertido): \n", linha);
    for (i = c-1; i >= 0; i--) {
        printf("%d\t", final[i]);
    }
    return 0;
}
*/

/* 07 */

/*
int main() {
    int a[2][3], i, j;
    for (i=0; i < 2; i++) {
        printf("Informe os valores da linha %d: \n", i);
        for (j=0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matriz transposta: \n");
    for (i=0; i < 3; i++) {
        for (j=0; j < 2; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 08 */

int main() {
    float a[5][10], maior[5];
    int i, j;
    for (i=0; i < 5; i++) {
        printf("Informe a altura dos atletas: \n");
        for (j=0; j < 10; i++) {
            printf("Atleta %f: ");
            scanf("%f", &a[i][j]);
        }
        maior[i] = 0;
    }
    for ("")
}