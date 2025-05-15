#include <stdio.h>
#include <string.h>

// 1
/*
int main() {
    char nome[31];
    int i;
    printf("Informe o nome: ");
    gets(nome);
    printf("As quatro primeiras letras do nome são: ")
    for (i=0; i < 4; i++) {
        printf("%c", nome[i]);
    }
    return 0;
}
*/

// 2
/*
int main() {
    int i, qtd=0;
    char palavra[11];
    printf("Informe a palavra: ");
    gets(palavra);
    for (i=0; i<strlen(palavra); i++) {
        if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U' )
            qtd++;
    }
    printf("Existem %d vogais na palavra.\n", qtd);
    return 0;
}
*/

// 3
/*
int main() {
    char nome[31], letra;
    int i, posi;
    printf("Informe um nome: ");
    gets(nome);
    printf("Informe uma letra: ");
    scanf(" %c", &letra);
    for (i=0; i < strlen(nome); i++) {
        if (nome[i] == letra)
            posi = i;
        else
            posi = -1;
    }
    if (posi >= 0)
        printf("A letra %c ocorre na %dº posição da palavra %s.\n", letra, posi+1, nome);
    else
        printf("A letra %c não ocorre na palavra %s.\n", letra, nome);
    return 0;
}
*/

// 4
/*
int main() {
    char orig[31], modif[31];
    int i, j=0;
    printf("Informe a palavra: ");
    gets(orig);
    for (i=0; i<strlen(orig); i++) {
        if (orig[i] != ' ') {
            modif[j] = orig[i];
            j++
        }
    }
    printf("Palavra original: %s.\n", orig);
    printf("Palavra modificada: %s.\n", modif);
    return 0;
}
*/

// 5
/*
int main() {
    char orig[31], modif[31], invert[31];
    int i, j=0;
    printf("Informe a palavra: ");
    gets(orig);
    for (i=0; i<strlen(orig); i++) {
        if (orig[i] != ' ') {
            modif[j] = orig[i];
            j++;
        }
    }
    j=0;
    for (i=strlen(modif)-1; i >= 0; i--) {
        invert[j] = modif[i];
        j++;
    }
    if (strcmp(modif, invert) == 0)
        printf("As palavras são palíndromas.\n");
    else
        printf("As palavras não são palíndromas");
    return 0;
}
*/

// 6
/*
int main() {
    char palavra[31];
    int i;
    printf("Informe a palavra: ");
    gets(palavra);
    for (i=0; i<strlen(palavra); i++) {
        palavra[i] = toupper(palavra[i]);
    }
    printf("%s\n", palavra);
    return 0;
}
*/

// 7
/*
int main() {
    char palavra[31], nova[93];
    int num, i;
    printf("Informe a palavra: ");
    gets(palavra);
    printf("Informe o número de repeições: ");
    scanf("%d", &num);
    for (i=0; i<num; i++) {
        strcat(nova, palavra);
    }
    printf("%s", nova);
    return 0;
}
*/

// 8

int main() {
    
}