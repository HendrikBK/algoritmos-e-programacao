#include <stdio.h>

// 1 Imprimir todos os inteiros entre 1 e 100

/*
int main() {
    int i;
    for (i = 1; i <= 100; i++)
        printf("%d\n", i);
    return 0;
}
*/

// 2 Imprimir todos os inteiros entre 100 e 1

/*
int main() {
    int i;
    for (i = 100; i >= 1; i--)
        printf("%d\n", i);
    return 0;
}
*/

// 3 Ler dois números inteiros representando um intervalo e fazer o somatório destes números, a soma dos números ímpares e dos pares

/*
int main() {
    int i, inicio, fim, aux, soma = 0, sp = 0, si = 0;
    printf("Informe dois valores: ");
    scanf("%d %d", &inicio, &fim);
    if ( inicio > fim) {
        aux = inicio;
        inicio = fim;
        fim = aux;
    }
    for (i = inicio; i <= fim; i++) {
        soma = soma + i;
        if ( i % 2 == 0 )
            sp = sp + i;
        else 
            si = si + i;
    }
    printf("Somatório: %d\n", soma);
    printf("Somatório dos pares: %d\n", sp);
    printf("Somatório dos ímpares: %d\n", si);
    return 0;
}
*/

// 4 Ler 20 números inteiros e apresentar a soma e a média dos valores lidos
/*
int main() {
    int i, valor, soma = 0;
    float media;
    printf("Informe 20 valores\n");
    for (i=1; i <= 20; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);
        soma += valor;
    }
    printf("Somatório: %d\n", soma);
    media = soma / 20;
    printf("Média: %.2f\n", media);
    return 0;
}
*/

// 5 Ler um número inteiro, calcular e apresentar o fatorial deste número

int main() {
    int i, valor, total=0;
    printf("Informe um inteiro: ");
    scanf("%d", &valor);
    for (i = valor; i > 2; i--) {
        total = valor * (valor - 1);
        valor -= 1;
    }
    printf("%d", total);
    return 0;
}