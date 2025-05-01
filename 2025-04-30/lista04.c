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