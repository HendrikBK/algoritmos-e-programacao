#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[31], palavra2[31], palavra3[31];
    int cont;
    printf("Informe a primeira palavra: ");
    gets(palavra1);
    printf("Informe a segunda palavra: ");
    gets(palavra2);
    printf("Tamanho da primeira palavra: %d\n", strlen(palavra1));
    printf("Tamanho da segunda palavra: %d\n", strlen(palavra2));
    if (strcmp(palavra1, palavra2) == 0)
        printf("As strings são iguais.\n");
    else
        printf("As strings são diferentes.\n");
    strcpy(palavra3, palavra2);
    printf("A segunda palavra invertida: %s\n", strrev(palavra3));
    strcpy(palavra3, palavra1);
    printf("A nova string a partir da primeira palavra: %s.\n", palavra3);
    strcat(palavra3, palavra2);
    printf("A palavra concatenada: %s\n", palavra3);
    printf("A primeira palavra em maiúsculo: %s\n", strupr(palavra1));
    printf("A segunda palavra em minúsculo: %s\n", strlwr(palavra2));
    return 0;
}