#include <stdio.h>

/* Ler um valor inteiro qualquer e verificar se este está contido no intervalo [1 - 10]. */
/*
int main() {
    int x;
    printf("Insira o valor: ");
    scanf("%d", &x);
    if ( x >= 1 && x <= 10)
        printf("O valor %d está no intervalo [1 - 10].", x);
    else
        printf("O valor %d não está no intervalo [1 - 10].", x);
    return 0;
}
*/


/* Fazer um programa para ler o sexo de uma pessoa (char) e verificar se o valor digitado é válido ou não. */
/*
int main() {
    char x;
    printf("Insira o sexo (M/F): ");
    scanf(" %c", &x);
    if (x == 'M' || x == 'm' || x == 'F' || x == 'f')
        printf("O sexo %c é válido.", x);
    else
        printf("O sexo %c não é válido.", x);
    return 0;
}
*/

/* Leia um valor inteiro e verificar se este é maior que 10 */
/*
int main() {
    int x;
    printf("Insira o valor: ");
    scanf("%d", &x);
    if (!x > 10)
        printf("O valor %d não é maior que 10.", x);    
    else
        printf("O valor %d é maior que 10.", x);        
    return 0;
}
*/

// Exercícios
// 8
/*
int main() {
    float salario, salarioMinimo, imposto;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Informe o salário mínimo: ");
    scanf("%f", &salarioMinimo);    
    if ( salario <= (salarioMinimo * 3))
        imposto = salario * 0.05;
    else if ( salario <= (salarioMinimo  * 10))
        imposto = salario * 0.1;
    else
        imposto = salario * 0.15;
    printf("Valor do salário: R$ %.2f.\n", salario);
    printf("Valor do imposto: R$ %.2f.", imposto);
    return 0;
}
*/

// 9
/*
int main() {
    int inicio, fim, valor, aux;
    printf("Informe o início e o fim do intervalo: ");
    scanf("%d, %d", &inicio, &fim);
    printf("Informe o valor desejado: ");
    scanf("%d", &valor);
    if (inicio > fim) { // Caso o valor "a" seja menor que "b", estes devem ser alternados.
        aux = fim;
        fim = inicio;
        inicio = aux;
    }
    if (valor >= inicio && valor <= fim)
        printf("O valor %d está no intervalo de %d e %d.", valor, inicio, fim);
    else
        printf("O valor %d não está no intervalo de %d e %d.", valor, inicio, fim);
    return 0;
}
*/

// 10
/*
int main() {
    int a, b, c, d, e, min, max;
    printf("Informe cinco valores: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < b && a < c && a < d && a < e )
        min = a;
    else if (b < c && b < d && b < e)
        min = b;
    else if (c < d && c < e)
        min = c;
    else if (d < e)
        min = d;
    else
        min = e;
    if (a > b && a > c && a > d && a > e )
        max = a;
    else if (b > c && b > d && b > e)
        max = b;
    else if (c > d && c > e)
        max = c;
    else if (d > e)
        max = d;
    else
        max = e;
    printf("Menor valor: %d.\n", min);
    printf("Maior valor: %d.", max);
    return 0;
}
*/

// 12

int main() {
    int ano, ano_atual;
    char sexo;
    printf("Informe o ano de nascimento: ");
    scanf("%d", &ano);
    printf("Informe o ano corrente: ");
    scanf("%d", &ano_atual);
    printf("Informe o sexo (M/F): ");
    scanf(" %c", &sexo);
    if ((sexo == 'm' || sexo == 'M') && ano_atual - ano > 18)
        printf("Deve servir.");
    else
        printf("Não deve servir.");
    return 0;
}