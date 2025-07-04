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

/*
#include <stdio.h>


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

// 6

/*
#include <stdio.h>

int primo(int numero) {
    int i;
    for (i=2; i < numero; i++) {
        if (numero % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int numero;
    printf("Insira o número: ");
    scanf("%d", &numero);
    if (primo(numero))
        printf("O número %d é primo.\n", numero);
    else
        printf("O número %d não é primo.\n", numero);
    return 0;
}
*/

// 8

/*
#include <stdio.h>

float desconto(float valor, float taxa) {
    return valor * (taxa / 100);
}

float valor_venda(float valor, float taxa, int qtd) {
    return (valor - desconto(valor, taxa)) * qtd;
}

int main() {
    int qtd;
    float valor, taxa;
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Informe o desconto concedido (%%): ");
    scanf("%f", &taxa);
    printf("Informe a quantidade de vendas: ");
    scanf("%d", &qtd);
    printf("Preço original: %.2f\n", valor);
    printf("Valor com desconto: %.2f\n", valor - desconto(valor, taxa));
    printf("Total de venda: %.2f\n", valor_venda(valor, taxa, qtd));
    return 0;
}
*/

// 10
/*
#include <stdio.h>

int palindromo(char frase[]) {
    int i, j=-1;
    for (i=0; frase[i]; i++) {
        j++;
    }
    for(i=0, j; i <= j; i++, j--) {
        if (frase[i] != frase[j])
            return 0;
    }
    return 1;
}

int main() {
    char frase[101];
    printf("Informe a frase: ");
    scanf("%[^\n]", frase);
    if (palindromo(frase))
        printf("A palavra é um palíndromo.\n");
    else
        printf("A palavra não é um palíndromo.\n");
    return 0;
}
*/

// 12
/*
#include <stdio.h>

int impares(int vetor[]) {
    int i, impares=0;
    for(i=0; i < 10; i++) {
        if(vetor[i] % 2 != 0)
            impares++;
    }
    return impares;
}

int main() {
    int i, numeros[10];
    printf("Informe os valores: ");
    for(i=0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Existem %d números impares.\n", impares(numeros));
    return 0;
*/

// 16
/*
#include <stdio.h>

int numero() {
    int i;
    for (i=1000; i < 9999; i++) {
        int primeiros, segundos, soma;
        segundos = i % 100;
        primeiros = i / 100;
        soma = primeiros + segundos;
        if (soma * soma == i)
            printf("%d\n", i);
    }
}

int main() {
    numero();
    return 0;
}
*/

// 17
/*
#include <stdio.h>

const float pi = 3.14;

float area(int raio) {
    return pi * (raio * raio);
}

float perimetro(int raio) {
    return pi * raio * 2;
}

int main() {
    int raio;
    printf("Informe o raio do círculo: ");
    scanf("%d", &raio);
    printf("Área = %.2f\n", area(raio));
    printf("Perímetro = %.2f", perimetro(raio));
    return 0;
}
*/

// 18
/*
#include <stdio.h>

float celsius(float temp) {
    return ((temp - 32)/9) * 5;
}

int main() {
    float temp;
    printf("Informe a temperatura em Fahrenheits (°F): ");
    scanf("%f", &temp);
    printf("%.1f °F = %.1f °C\n", temp, celsius(temp));
    return 0;
}
*/

// 19
/*
#include <stdio.h>

void media(float nota1, float nota2) {
    if ((nota1 + nota2)/2 >= 6)
        printf("PARABÉNS! Você foi aprovado.\n");
    else
        printf("Infelizmente você não foi aprovado.\n");
}

int main() {
    float nota1, nota2;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    media(nota1, nota2);
    return 0;
}
*/

// 20
/*
#include <stdio.h>

float pesoideal(int genero, float altura) {
    if (genero == 1) {
        return (62.1 * altura) - 44.7;
    } else {
        return (72.7 * altura) - 58;
    }
}

int main() {
    float altura,
    int genero;
    printf("Informe o gênero (F:1 | M: 2): ");
    scanf("%d", &genero);
    printf("Informe a altura (m): ");
    scanf("%f", &altura);
    printf("Peso ideal: %.2f Kg\n", pesoideal(genero, altura));
    return 0;
}
*/

// 22
/*
#include <stdio.h>

void separar(int valores[], int *i_pares, int *i_impares, int pares[], int impares[]) {
    int i;
    for (i=0; i < 10; i++) {
        if (valores[i] % 2 == 0) {
            pares[*i_pares] = valores[i];
            (*i_pares)++;
        } else {
            impares[*i_impares] = valores[i];
            (*i_impares)++;
        }
    }
}

void mostrar(int pares[], int impares[], int *i_pares, int *i_impares) {
    int i;
    printf("Valores pares: \n");
    for(i=0; i < *i_pares; i++) {
        printf("%d", pares[i]);
    }
    printf("\nValores impares: \n");
    for(i=0; i < *i_impares; i++) {
        printf("%d", impares[i]);
    }
}

int main() {
    int i, valores[10], pares[10], impares[10], i_pares=0, i_impares=0;
    printf("Informe os valores do vetor: ");
    for (i=0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }
    separar(valores, &i_pares, &i_impares, pares, impares);
    mostrar(pares, impares, &i_pares, &i_impares);
    return 0;
}
*/

// 26

#include <stdio.h>

void montar(int matriz[][10], int dimen) {
    int i, j;
    printf("Informe o valores da matriz: \n");
    for (i=0; i < dimen; i++) {
        printf("Linha %d:\n", i);
        for (j=0; j < dimen; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int verificar(int matriz[][10], int dimen, int *x, int *y, int valor) {
    int i, j;
    for (i=0; i < dimen; i++) {
        for (j=0; j < dimen; j++) {
            if (matriz[i][j] == valor) {
                *y = i;
                *x = j;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int dimen=10;
    do {
        printf("Informe a dimensão da matriz: ");
        scanf("%d", &dimen);
        if (dimen > 10 || dimen < 1)
            printf("Valor inválido. Informe um valor entre 1 e 10.\n");
    } while (dimen > 10 || dimen < 1);
    int matriz[dimen][dimen], x, y, valor;
    montar(matriz, dimen);
    printf("Informe um valor: ");
    scanf("%d", &valor);
    if (verificar(matriz, dimen, &x, &y, valor)) {
        printf("Coordenadas onde o valor %d se encontra na matriz: %d:%d\n", valor, x, y);
    } else {
        printf("O valor %d não se encontra na matriz.\n", valor);
    }
    return 0;
}