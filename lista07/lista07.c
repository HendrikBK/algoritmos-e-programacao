// 1

/*
#include <stdio.h>

int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    printf("Informe os números: ");
    scanf("%d %d", &a, &b);
    printf("O maior número é %d\n", maior(a, b));
    return 0;
}
*/

// 2


#include <stdio.h>

/*
int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b, c;
    printf("Informe os números: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("O maior número é %d\n", maior(maior(a, b), c));
    return 0;
}
*/


// 3

/*
#include <stdio.h>

float media(float a, float b, float c, char letra) {
    if (letra == 'A' || letra == 'a')
        return (a + b + c)/3;
    else
        return ((a*0.5) + (b*0.3) + (c*0.2));
}

int main() {
    float a, b, c;
    char letra;
    printf("Informe as notas: ");
    scanf("%f %f %f", &a, &b, &c);
    do {
        printf("Informe o tipo de média: aritmética (A) ou ponderada (P): ");
        scanf(" %c", &letra);
        if (letra != 'A' && letra != 'a' && letra != 'P' && letra != 'p')
            printf("Valor inválido!\n");
    } while (letra != 'A' && letra != 'a' && letra != 'P' && letra != 'p');
    printf("Média final: %.2f", media(a, b, c, letra));
    return 0;
}
*/

// 4

/*
#include <stdio.h>

int delta(int a, int b, int c) {
    return (b*b) - ( 4 * a * c);
}

int main() {
    int a, b, c;
    printf("Informe a: ");
    scanf("%d", &a);
    printf("Informe b: ");
    scanf("%d", &b);
    printf("Informe c: ");
    scanf("%d", &c);
    printf("Delta: %d\n", delta(a, b, c));
    return 0;
}
*/

// 5

#include <stdio.h>

