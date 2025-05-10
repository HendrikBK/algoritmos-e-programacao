// 1 - Crie um programa que leia uma string com tamanho máximo de 20 caracteres. O programa deve calcular o comprimento da string.
/*
#include <stdio.h>

int main() {
    char palavra[21];
    int i;
    printf("Informe a palavra: ");
    scanf("%[^\n]", palavra);
    for (i=0; palavra[i] != '\0'; i++);
    printf("Existem %d caracteres em \"%s\"\n", i, palavra);
    return 0;
}
*/

// 2 - Digite o nome completo de uma pessoa. O programa deve calcular e mostrar quantos nomes formam o nome completo
/*
#include <stdio.h>

int main() {
    char nome[51];
    int i, qtd=1;
    printf("Informe o nome completo: ");
    scanf("%[^\n]", nome);
    for (i=0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ')
            qtd++;
    }
    printf("Existem %d nomes.\n", qtd);
    return 0;
}
*/

// 3 Crie um programa que compara duas strings com tamanho máximo de 20 caracteres, dizendo se elas são iguais ou diferentes;
/*
#include <stdio.h>

int main() {
    char a[21], b[21];
    int i, x;
    printf("Insira a primeira string: ");
    scanf("%s", a);
    printf("Insira a segunda string: ");
    scanf("%s", b);
    for (i=0; a[i] != b[i]; i++) {
        if (a[i] != b[i])
            x = 1;
    }
    if (x == 1)
        printf("As duas strings são diferentes.\n");
    else
        printf("As duas strings são iguais.\n");
    return 0;    
}
*/

// 4 - Faça um programa que leia uma string com no máximo 30 caracteres. O programa deve apresentar a string sem suas vogais. Considere
// que todas as letras são minúsculas
/*
#include <stdio.h>

int main() {
    char a[31], b[31];
    int i, ib;
    printf("Informe a string: ");
    scanf("%s", a);
    for (i=0; a[i] != '\0'; i++) {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') {
            printf("%c", a[i]);
        }
    }
    return 0;    
}
*/

/* 5 - Faça um programa que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letra L1 e L2 devem
ser fornecidas pelo usuário. Apresentar a nova string como resultado. */
/*
#include <stdio.h>

int main() {
    char palavra[31], l1, l2;
    int i;
    printf("Informe a palavra: ");
    scanf("%s", palavra);
    printf("Informe a primeira letra: ");
    scanf(" %c", &l1);
    printf("Informe a segunda letra: ");
    scanf(" %c", &l2);
    for (i=0; palavra[i]; i++) {
        if (palavra[i] == l1)
            palavra[i] = l2;
    }
    printf("Nova palavra: %s\n", palavra);
    return 0;
}
*/

/* 6 - Fazer um programa que leia duas strings com no máximo 30 caracteres e apresente:
- O comprimento das duas strings;
- Verificar se as duas strings são iguais;
- Apresentar a segunda string invertida;
- Copiar a primeira para outra string e apresentar a nova string na tela;
- Fazer a concatenação das duas strings e apresentar o resultado
*/

#include <stdio.h>

int main() {
    char a[31], b[31], c[31];
    int i, a_tam=0, b_tam=0, x;
    printf("Informe a primeira string: ");
    scanf("%s", a);
    printf("Informe a segunda string: ");
    scanf("%s", b);
    for (i=0; a[i]; i++) {
        a_tam++;
    }
    for (i=0; b[i]; i++) {
        b_tam++;
    }
    printf("Tamanho da string A: %d\nTamanho da string B: %d\n", a_tam, b_tam);
    for (i=0; a[i] != b[i]; i++) {
        if (a[i] != b[i])
            x = 1;
    }
    if (x == 1)
        printf("As strings A e B são diferentes.\n");
    else
        printf("As strings A e B são iguais.\n");
    printf("Segunda string invertida:\n");
    for (i=b_tam-1; i >= 0; i--) {
        printf("%c", b[i]);
    }
    printf("\n");
    for (i=0; a[i]; i++) {
        c[i] = a[i];
    }
    c[i] = '\0';
    printf("%s\n", c);
    char d[a_tam+b_tam+1];
    for (i=0; i <= a_tam; i++) {
        d[i] = a[i];
    }
    for (i=0; i <= b_tam; i++) {
        d[a_tam+i] = b[i];
    }
    d[a_tam+1+b_tam+1+1] = '\0';
    printf("%s\n", d);
    return 0;
}