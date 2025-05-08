/* 1 */
/*
#include <stdio.h>

int main() {
    int valores[10], pares=0, impares=0, i;
    for (i=0; i<10; i++) {
        printf("Informe o valor para valores[%d]: ", i);
        scanf("%d", &valores[i]);
    }
    for (i=0; i<10; i++) {
        if (valores[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    return 0;
}
*/

/* 2 */
/*
#include <stdio.h>

int main() {
    int valores[10], qtd=0, i;
    for (i=0; i<10; i++) {
        printf("Informe o valor para valores[%d]: ", i);
        scanf("%d", &valores[i]);
    }
    for (i=0; i<9; i++) {
        if (valores[i] == valores[9])
            qtd++;
    }
    printf("Quantidade de valores iguais a %d = %d (Não incluso o último valor da lista.)\n", valores[9], qtd);
    return 0;
}
*/

/* 3 */
/*
#include <stdio.h>

int main() {
    int x=10;
    int val[x], par[x], imp[x], i, i_par=0, i_imp=0;
    for (i=0; i < x; i++) {
        printf("Informe o valor para a[%d]: ", i);
        scanf("%d", &val[i]);
    }
    for (i=0; i < x; i++) {
        if (val[i] % 2 == 0) {
            par[i_par] = val[i];
            i_par++;
        } else {
            imp[i_imp] = val[i];
            i_imp++;
        }
    }
    for (i=0; i < i_par; i++) {
        printf("Pares[%d] = %d\n", i, par[i]);
    }
    for (i=0; i < i_imp; i++) {
        printf("Ímpares[%d] = %d\n", i, imp[i]);
    }
    return 0;
}
*/

// 4
/*
#include <stdio.h>

int main() {
    int valor[12], i, a, b;
    for (i=0; i<12; i++) {
        printf("informe valor[%d]: ", i);
        scanf("%d", &valor[i]);
    }
    printf("Informe dois valores: ");
    scanf("%d %d", &a, &b);
    printf("Soma de %d + %d = %d\n", valor[a], valor[b], valor[a] + valor[b]);
    return 0;
}
*/

// 5
/*
#include <stdio.h>

int main() {
    int a[20], b[10], c[10], i;
    for (i=0; i<20; i++) {
        printf("Informe a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<10; i++) {
        b[i] = a[i];
        c[i] = a[i + 10];
    }
    for (i=0; i<10; i++) {
        a[i] = c[i];
        a[i + 10] = b[i];
    }
    for (i=0; i<20; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
*/

// 6
/*
#include <stdio.h>

int main() {
    int a[5], b[5], i;
    for (i=0; i < 5; i++) {
        printf("Informe o valor do elemento %d do vetor A: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 5; i++) {
        b[i] = a[i];
    }
    for (i=0; i < 5; i++) {
        printf("Elemento %d do vetor B: %d\n", i, b[i]);
    }
    return 0;
}
*/

// 7
/*
#include <stdio.h>

int main() {
    int a[20], maior, menor, maior_posic, menor_posic, i;
    for (i=0; i < 20; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 20; i++) {
        if (i == 0) {
            maior = a[i];
            menor = a[i];
            maior_posic = i;
            menor_posic = i;
        }
        if (a[i] > maior) {
            maior = a[i];        
            maior_posic = i;
        }
        if (a[i] < menor) {
            menor = a[i];        
            menor_posic = i;
        }
    }
    printf("O número de maior valor é %d e encontra-se na posição %d\n", maior, maior_posic);
    printf("O número de menor valor é %d e encontra-se na posição %d\n", menor, menor_posic);
    return 0;
}
*/

// 8
/*
#include <stdio.h>

int main() {
    int a[30], valor, qtd=0, i;
    for (i=0; i < 30; i++) {
        printf("Informe o valor para a posição %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Informe um valor: ");
    scanf("%d", &valor);
    for (i=0; i < 30; i++) {
        if (a[i] == valor)
            qtd++;
    }
    printf("O valor %d ocorre %d vezes no vetor A.\n", valor, qtd);
    return 0;
}
*/

// 9
/*
#include <stdio.h>

int main() {
    int a[15], b[15], i;
    for (i=0; i < 15; i++) {
        printf("Informe o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 15; i++) {
        b[i] = a[i] * a[i];
    }
    for (i=0; i< 15; i++) {
        printf("A[%d] = %d\n", i, a[i]);
        printf("B[%d] = %d\n", i, b[i]);
    }
    return 0;
}
*/

// 10
/*
#include <stdio.h>

int main() {
    int valor, a[8], b[8], c[16], i, i_a=0, i_b=0;
    do {
        printf("Informe um valor para o vetor A: ");
        scanf("%d", &valor);
        if (valor % 2 == 0 && valor % 3 == 0) {
            a[i_a] = valor;
            i_a++;
        }
    } while (i_a < 8);
    do {
        printf("Informe um valor para o vetor B: ");
        scanf("%d", &valor);
        if (valor % 5 == 0) {
            b[i_b] = valor;
            i_b++;
        }
    } while (i_b < 8);
    for (i=0; i < 16; i++) {
        c[i] = a[i];
        c[i+8] = b[i];
    }
    for (i=0; i < 16; i++) {
        printf("C[%d] = %d\n", i, c[i]);
    }
    return 0;
}
*/

// 11
/*
#include <stdio.h>

int main() {
    int a[15], b[15], i, j, valor=1;
    for (i=0; i < 15; i++) {
        printf("Informe o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 15; i++) {
        valor = 1;
        if (a[i] != 0) {
            for (j=1; j <= a[i]; j++) {
                valor = valor * j;
            }
        }
        b[i] = valor;
    }
    for (i=0; i< 15; i++) {
        printf("A[%d] = %d\n", i, a[i]);
        printf("B[%d] = %d\n", i, b[i]);
    }
    return 0;
}
*/

// 12
/*
#include <stdio.h>

int main() {
    int a[5], b[8], c[13], i;
    for (i=0; i < 5; i++) {
        printf("Infome o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 8; i++) {
        printf("Infome o valor de B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    for (i=0; i < 5; i++) {
        c[i] = a[i];
    }
    for (i=0; i < 8; i++) {
        c[i + 5] = b[i];
    }
    for (i=0; i < 13; i++) {
        printf("Valor de C[%d]: %d\n", i, c[i]);
    }
    return 0;
}
*/

// 13
/*
#include <stdio.h>

int main() {
    float a[5];
    int i;
    for (i=0; i < 5; i++) {
        printf("Informe um valor para A[%d]: ", i);
        scanf("%.2f", &a[i]);
    }
    for (i = 4; i >= 0; i--) {
        printf("Valor de A[%d] = %.2f\n", i, a[i]);
    }
    return 0;
}
*/

// 14
/*
#include <stdio.h>

int main() {
    int a[5], b[5], i, j, valor=0;
    for (i=0; i < 5; i++) {
        printf("Informe o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 5; i++) {
        valor = 0;
        for (j=0; j <= a[i]; j++) {
            valor += j;
        }
        b[i] = valor;
    }
    for (i=0; i < 5; i++) {
        printf("A[%d] = %d\n", i, a[i]);
        printf("B[%d] = %d\n", i, b[i]);
    }
    return 0;
}
*/

// 15
/*
#include <stdio.h>

int main() {
    int a[15], qtd=0, i;
    for (i=0; i < 15; i++) {
        printf("Informe o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
        if (a[i] > 5)
            qtd++;
    }
    printf("Existem %d números maiores que 5\n", qtd);
    return 0;
}
*/

// 16
/*
#include <stdio.h>

int main() {
    int a[10], valor, i;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    for (i=0; i < 10; i++) {
        a[i] = (i+1) * valor;
    }
    for(i=0; i < 10; i++) {
        printf("%d X %d = %d\n", valor, i+1, a[i]);
    }
    return 0;
}
*/

// 17
/*
#include <stdio.h>

int main() {
    int a[10], b[10], c[10], d[10], i, i_a=0, i_b=1;
    for (i=0; i < 10; i++) {
        printf("Informe o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i < 10; i++) {
        printf("Informe o valor de B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    for (i=1; i < 10; i+=2) {
        c[i_a] = a[i];
        c[i_b] = b[i];
        i_a += 2;
        i_b += 2;
    }
    i_a = 0;
    i_b = 1;
    for (i=0; i < 10; i+=2) {
        d[i_a] = a[i];
        d[i_b] = b[i];
        i_a += 2;
        i_b += 2;
    }
    for (i=0; i < 10; i++) {
        printf("C[%d] = %d\n", i, c[i]);
    }
    for (i=0; i < 10; i++) {
        printf("D[%d] = %d\n", i, d[i]);
    }
    return 0;
}
*/