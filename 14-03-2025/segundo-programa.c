#include <stdio.h>
// Mostre a some e a diferenca entre dois valores
/* int main() {
    int numero_1, numero_2, soma, diferenca;
    printf("Informe o primeiro valor: ");
    scanf("%d", &numero_1);
    printf("Informe o segundo valor: ");
    scanf("%d", &numero_2);
    soma = numero_1 + numero_2;
    diferenca = numero_1 - numero_2;
    printf("%d + %d = %d\n", numero_1, numero_2, soma);
    printf("%d - %d = %d\n", numero_1, numero_2, diferenca);
    return 0;
} */

// Mostre a área de um terreno retangular
/* int main() {
    float lado_1, lado_2, area;
    printf("Informe o primeiro lado: ");
    scanf("%f", &lado_1);
    printf("Informe o segundo lado: ");
    scanf("%f", &lado_2);
    area = lado_1 * lado_2;
    printf("Área do terreno: %.3f m2\n", area);
    return 0;
}*/

// Converta a idade de anos para dias
/* int main() {
    int idade;
    printf("Informe sua idade em anos: ");
    scanf("%d", &idade);
    printf("%d dias de vida.\n", idade * 365);
    return 0;
} */

// Receba um valor com partes inteiras e decimais e exiba as duas.
int main() {
    float valor;
    int inteira;
    printf("Informe o valor: ");
    scanf("%f", &valor);
    inteira = valor;
    printf("Parte inteira: %d\n", inteira);
    printf("Parte decimal: %f\n", valor - inteira);
    return 0;
} 

// Calcular a média aritmética de 3 provas e 1 um trabalho.
/* int main() {
    float nota_1, nota_2, nota_3, trabalho;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota_1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota_2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota_3);
    printf("Informe a nota do trabalho: ");
    scanf("%f", &trabalho);
    float media_provas = ((nota_1 + nota_2 + nota_3)/3) * 0.8;
    float media_trabalho = trabalho * 0.2;
    printf("%.2f\n", media_provas + media_trabalho);
    return 0;
} */