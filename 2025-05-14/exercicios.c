#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
/*
int main() {
    char palavra[31], letra;
    int i;
    printf("Informe a palavra: ");
    scanf("%s", palavra);
    printf("Informe a letra: ");
    scanf(" %c", &letra);
    for (i=0; palavra[i] != '\0'; i++) {
        if (palavra[i] == letra)
            palavra[i] = '*';
    }
    printf("%s", palavra);
    return 0;
}
*/

// 9
/*
int main() {
    char prenome[21], sobrenome[21], nome_completo[42], espaco[2];
    espaco[0] = ' ';
    espaco[1] = '\0';
    printf("Informe o prenome: ");
    gets(prenome);
    printf("Informe o sobrenome: ");
    gets(sobrenome);
    strcpy(nome_completo, prenome);
    strcat(nome_completo, espaco);
    strcat(nome_completo, sobrenome);
    printf("%s", nome_completo);
    return 0;
}
*/

// 10
/*
int main() {
    char palavra[31], letra;
    int i;
    printf("Informe a palavra: ");
    gets(palavra);
    do {
        printf("Deseja converter a palavra para letras (m)aiúsculas ou mi(n)úsculas?");
        scanf(" %c", &letra);
    } while (letra != 'm' && letra != 'n');
    if (letra == 'm')
        strupr(palavra);
    else
        strlwr(palavra);
    printf("%s", palavra);
    return 0;
}
*/

// 11
/*
int main() {
    char palavra[31], letra;
    int i, qtd=0;
    printf("Informe a palavra: ");
    gets(palavra);
    printf("Informe o caractere: ");
    scanf(" %c", &letra);
    for (i=0; i < strlen(palavra); i++) {
        if (palavra[i] == letra)
            qtd++;
    }
    if (qtd == 0)
        printf("O catactere %c não ocorre na palavra %s.\n", letra, palavra);
    else
        printf("O catactere %c ocorre %d vezes na palavra %s.\n", letra, qtd, palavra);
    return 0;
}
*/

// 12
/*
int main() {
    char frase[101];
    int i, qtd=0;
    printf("Informe a frase: ");
    scanf("%[^\n]", frase);
    for (i=0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ')
            qtd++;
    }
    printf("Existem %d espaços em branco na frase.\n", qtd);
    return 0;
}
*/

// 13
/*
int main() {
    char frase[101];
    int i, qtd=0;
    printf("Informe a frase: ");
    scanf("%[^\n]", frase);
    for (i=0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ')
            qtd++;
    }
    printf("Existem %d caracteres diferentes de espaço em branco.\n", qtd);
    return 0;
}
*/

