/* Ler um número e suar uma função que recebe esse número como parãmetro e retorna, se o número for par, ou 1, se for ímpar */

/*
#include <stdio.h>

int avaliar(int x) {
    if (x % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int x;
    printf("Informe o número: ");
    scanf("%d", &x);
    if (avaliar(x)) {
        printf("O número é ímpar.\n");
    } else {
        printf("O número é par.\n");
    }
    return 0;
}
*/

/* Escreva um função qiue verifique se um determinado ano, passado como parâmetro, é bissexto.
Um ano é bissexto se:
1 - É divísel por 4;
2 - Não é divisível por 100;
3 - Se for divisível por 400;
4 - As últimas regras prevalecem sobre as primeiras.*/
/*

#include <stdio.h>

int bissexto(int ano) {
    if (ano % 400 == 0) {
        return 1;
    } else if (ano % 100 == 0) {
        return 0;
    } else if (ano % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int ano;
    printf("Informe o ano: ");
    scanf("%d", &ano);
    if (bissexto(ano)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }
    return 0;
}
*/

/* 1 - Ler ums tring com tamanho máximo de 30 caracteres e usar uma função que recebe a string como parâmetro e a exibe verticalmente na tela */

/*
#include <stdio.h>

void mostrar(char palavra[]) {
    for (int i=0; palavra[i]; i++) {
        printf("%c\n", palavra[i]);
    }
}

int main() {
    char palavra[31];
    printf("Informe a palavra: ");
    scanf("%s", palavra);
    mostrar(palavra);
    return 0;
}
*/

/* Faça um programa que conta o número de caracteres minúsculos em uma frase qualquer fornecida pelo usuário. Leia a frase no programa
principal, passe como parêmetro para uma função, que deverá contar e retornar o resultado */

/*
#include <stdio.h>
#include <ctype.h>

int contar(char frase[]) {
    int qtd=0, i;
    for (i=0; frase[i]; i++) {
        if (islower(frase[i])) {
            qtd++;
        }
    }
    return qtd;
}

int main() {
    char frase[101];
    printf("Informe a frase: ");
    scanf("%[^\n]", frase);
    printf("Existem %d caracteres minúsculos na frase.\n", contar(frase));
    return 0;
}

*/