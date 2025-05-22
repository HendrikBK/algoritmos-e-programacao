/* Escrever um programa que amarzene as notas de uma turma com trinta alunos. A nota final da disciplina é aritmética e calculada com base
em três provas. O programa deve permitir a leitura das três notas de cada aluno e depois apresentar, no formato de uma matriz, as notas
de cada aluno juntamente com a sua média */

/*
#include <stdio.h>
#include <string.h>

int main() {
    int a=2;
    float notas[a][4];
    int i, j;
    for (i=0; i<a; i++) {
        for(j=0; j<3; j++) {
            printf("Informe a %dª nota do %dº aluno: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
        notas[i][j] = (notas[i][0] + notas[i][1] + notas[i][2])/3;
    }
    printf("ALUNO\tNOTA 1\tNOTA 2\tNOTA 3\tMÉDIA\n");
    for (i=0; i<a; i++) {
        printf("%d", i+1);
        for (j=0; j<4; j++)
            printf("%.1f\t", notas[i][j]);
        printf("\n");
    }
    return 0;
*/

/* Fazer um rprograma que leia uma matriz de inteiros, com ordem 3x3. Depois de ler os elementos o programa deve mostrar o maios valor
armazenado na matriz. */

/*
#include <stdio.h>

int main() {
    int matriz[3][3],i,j,maior;
    printf("Informe os elementos da matriz 3x3:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++){
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }
    printf("O maior valor é %d", maior);
    return 0;
}
*/

/* Escreva um programa que leia uma matriz de inteiros com ordem NxM. O programa deve localizar o menor valor armazenado na matriz,
apresentar essa valor e sua posição. Considere que não existem valores duplicados na matriz. O programa também deve fazer a validação
da dimensão da matriz, considerando que a dimensão máxima será de 10 linhas e 10 colunas*/

/*
#include <stdio.h>

int main() {
    int n,m;
    do {
        printf("Informe a quantidade de linhas da matriz: ");
        scanf("%d", &n);
        if (n < 1 || n > 10)
            printf("Valor inválido! Insira um valor entre 1 e 10.\n");
    } while (n < 1 || n > 10);
    do {
        printf("Informe a quantidade de colunas da matriz: ");
        scanf("%d", &m);
        if (m < 1 || m > 10)
            printf("Valor inválido! Insira um valor entre 1 e 10.\n");
    } while (m < 1 || m > 10);
    int matriz[n][m],i,j,menor, lin_menor, col_menor;
    printf("Informe os elementos da matriz %dx%d:\n", n, m);
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    menor = matriz[0][0];
    lin_menor = 0;
    col_menor = 0;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++){
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                lin_menor = i;
                col_menor = j;
            }
        }
    }
    printf("O menor valor é %d na posição matriz[%d][%d]", menor, lin_menor, col_menor);
    return 0;
}
*/


/* Escreva um programa que leia uma matriz de números reais com ordem NxM. Deve-se armazenar em um vetor a média de cada linha da matriz,
apresentar todas as médias, a maior média encontrada e a sua
linha correspondente. O programa também deve fazer a validação da dimensão da matriz, considerando qua a dimensão máxima será de 10 linhas e
10 colunas */

/*
#include <stdio.h>

int main() {
    int l,c;
    do {
        printf("Informe a quantidade de linhas da matriz: ");
        scanf("%d", &l);
        if (l < 1 || l > 10)
            printf("Valor inválido! Insira um valor entre 1 e 10.\n");
    } while (l < 1 || l > 10);
    do {
        printf("Informe a quantidade de colunas da matriz: ");
        scanf("%d", &c);
        if (c < 1 || c > 10)
            printf("Valor inválido! Insira um valor entre 1 e 10.\n");
    } while (c < 1 || c > 10);
    float matriz[l][c], media[l], soma, maior_media;
    int i,j, lin_media;
    printf("Informe os elementos da matriz %dx%d:\n", l, c);
    for (i=0; i<l; i++) {
        soma=0;
        for (j=0; j<c; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }
        media[i] = soma / c;
    }
    maior_media = media[0];
    lin_media = 0;
    for (i=0; i<l; i++) {
        for (j=0; j<c; j++) {
            if (media[i] > maior_media) {
                maior_media = media[i];
                lin_media = i;
            }
        }
    }
    for(i=0; i<l; i++) {
        printf("media[%d] = %.2f\n", i, media[i]);
    }
    printf("\n");
    printf("Maior média = %.2f\n", maior_media);
    printf("Linha da maior média: %d\n", lin_media);
    return 0;
}
*/

/* Escreva um programa que leia uam matriz de ordem NxM de inteiros. O programa deve apresentar como resultado o somatório dos elementos
que formam a diagonal principal. O programa também deve fazer a validação da dimensão da matriz, considernado que a dimensão máxima será
de 10 linha e 10 colunas. A diagonal principal só existe em matrizes quadradas, isto é o número de linhas deve ser igual ao de colunas */

#include <stdio.h>

int main() {
    int d;
    do {
        printf("Informe o tamanho do lado da matriz: ");
        scanf("%d", &d);
        if (d < 1 || d > 10)
            printf("Valor inválido! Insira um valor entre 1 e 10.\n");
    } while (d < 1 || d > 10);
    int matriz[d][d], i,j, soma=0;
    printf("Informe os elementos da matriz %dx%d:\n", d, d);
    for (i=0; i<d; i++) {
        for (j=0; j<d; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<d; i++) {
        soma += matriz[i][i];
    }
    printf("Somatório da diagonal principal: %d\n", soma);
    return 0;
}
