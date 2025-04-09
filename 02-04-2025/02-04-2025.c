#include <stdio.h>

// 1 (usando if)
/*
int main() {
    float a, b;
    char operacao;
    printf("Insira dois valores: ");
    scanf("%f %f", &a, &b);
    printf("Insira a operação desejada (+, -, *, /): ");
    scanf(" %c", &operacao);
    if (operacao == '+') 
        printf("%.2f + %.2f: %.2f\n", a, b, a + b);
    else if (operacao == '-') 
        printf("%.2f - %.2f: %.2f\n", a, b, a - b);
    else if (operacao == '*')
        printf("%.2f * %.2f: %.2f\n", a, b, a * b);
    else if (operacao == '/') {
        if (b == 0)
            printf("Divisão por Zero.\n");
        else
            printf("%.2f / %.2f: %.2f\n", a, b, a / b);
    }
    else
        printf("Operação inválida.");
    return 0;
}

*/
// 1 (usando switch)
/*
int main() {
    float a, b;
    char operacao;
    printf("Insira dois valores: ");
    scanf("%f %f", &a, &b);
    printf("Insira a operação desejada (+, -, *, /): ");
    scanf(" %c", &operacao);
    switch (operacao)
    {
    case '+':
        printf("%.2f + %.2f: %.2f\n", a, b, a + b);
        break;
    case '-':
        printf("%.2f - %.2f: %.2f\n", a, b, a - b);
        break;
    case '*':
        printf("%.2f * %.2f: %.2f\n", a, b, a * b); 
        break;
    case '/':
        if (b == 0)
            printf("Divisão por Zero.\n");
        else
            printf("%.2f / %.2f: %.2f\n", a, b, a / b);
        break;
    default:
        break;
    }
    return 0;
}
*/

// 2

/*
int main() {
    int valor;
    printf("Insira o mês desejado: ");
    scanf("%d", &valor);
    switch (valor)
    {
    case 1:
        printf("Janeiro.");
        break;
    case 2:
        printf("Fevereiro.");
        break;
    case 3:
        printf("Março.");
        break;
    case 4:
        printf("Abril.");
        break;
    case 5:
        printf("Maio.");
        break;
    case 6:
        printf("Junho.");
        break;
    case 7:
        printf("Julho.");
        break;
    case 8:
        printf("Agosto.");
        break;
    case 9:
        printf("Setembro.");
        break;
    case 10:
        printf("Outubro.");
        break;
    case 11:
        printf("Novembro.");
        break;
    case 12:
        printf("Dezembro.");
        break;
    default:
        printf("Valor inválido.");
        break;
    }
    return 0;
}
*/

// 3
/*
int main() {
    int codigo;
    float salario, novo_salario;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Informe o código: ");
    scanf("%d", &codigo);
    switch(codigo) {
        case 100 ... 199:
            novo_salario = salario * (1.1);
            break;
        case 200 ... 299:
            novo_salario = salario * (1.2);
            break;
        case 300 ... 399:
            novo_salario = salario * (1.3);
            break;
        default:
            novo_salario = salario * (1.4);
    }
    printf("Salário atual: R$ %.2f\n", salario);
    printf("Novo salário: R$ %.2f\n", novo_salario);
    printf("Diferença: R$ %.2f.\n", novo_salario - salario);
    return 0;
*/


int main() {
    int valor, i;
    printf("Insira o número desejado: ");
    scanf("%d", &valor);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, valor, i * valor);
    }
    return 0;
}