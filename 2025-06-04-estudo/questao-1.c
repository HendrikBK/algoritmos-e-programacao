#include <stdio.h>

int main() {
    int x=5;
    int v[x], par[x], impar[x], i, ia=0, ib=0;
    printf("Informe os números: ");
    for (i=0; i < x; i++) {
        printf("Informe o valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for (i=0; i < x; i++) {
        if (v[i] % 2 == 0) {
            par[ia] = v[i];
            ia++;
        } else {
            impar[ib] = v[i];
            ib++;
        }
    }
    printf("Valores do vetor v: \n");
    for (i=0; i < x; i++) {
        printf("%d\t", v[i]);        
    }
    printf("\nValores do vetor par: \n");
    for (i=0; i < ia; i++) {
        printf("%d\t", par[i]);        
    }
    printf("\nValores do vetor impar: \n");
    for (i=0; i < ib; i++) {
        printf("%d\t", impar[i]);        
    }
    return 0;
}