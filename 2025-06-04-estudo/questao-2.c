#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[101];
    int i;
    printf("Informe a frase: ");
    scanf("%[^\n]", mensagem);
    for (i=0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] == 'A')
            mensagem[i] = '9';
        else if (mensagem[i] == 'E')
            mensagem[i] = '8';
        else if (mensagem[i] == 'I')
            mensagem[i] = '7';
        else if (mensagem[i] == 'O')
            mensagem[i] = '6';
        else if (mensagem[i] == 'U')
            mensagem[i] = '5';
    }
    printf("%s", mensagem);
    return 0;
}