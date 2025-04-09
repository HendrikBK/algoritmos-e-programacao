#include <stdio.h>

// 1 Imprimir todos os inteiros entre 1 e 100

/*
int main() {
    int i;
    for (i = 1; i <= 100; i++)
        printf("%d\n", i);
    return 0;
}
*/

// 2 Imprimir todos os inteiros entre 100 e 1

/*
int main() {
    int i;
    for (i = 100; i >= 1; i--)
        printf("%d\n", i);
    return 0;
}
*/

// 3 Ler dois números inteiros representando um intervalo e fazer o somatório destes números, a soma dos números ímpares e dos pares

/*
int main() {
    int i, inicio, fim, aux, soma = 0, sp = 0, si = 0;
    printf("Informe dois valores: ");
    scanf("%d %d", &inicio, &fim);
    if ( inicio > fim) {
        aux = inicio;
        inicio = fim;
        fim = aux;
    }
    for (i = inicio; i <= fim; i++) {
        soma = soma + i;
        if ( i % 2 == 0 )
            sp = sp + i;
        else 
            si = si + i;
    }
    printf("Somatório: %d\n", soma);
    printf("Somatório dos pares: %d\n", sp);
    printf("Somatório dos ímpares: %d\n", si);
    return 0;
}
*/

// 4 Ler 20 números inteiros e apresentar a soma e a média dos valores lidos
/*
int main() {
    int i, valor, soma = 0;
    float media;
    printf("Informe 20 valores\n");
    for (i=1; i <= 20; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &valor);
        soma += valor;
    }
    printf("Somatório: %d\n", soma);
    media = soma / 20;
    printf("Média: %.2f\n", media);
    return 0;
}
*/

// 5 Ler um número inteiro, calcular e apresentar o fatorial deste número
/*
int main() {
    int valor, total=1, i;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    if (valor < 0) {
        printf("Número negativo.\n");
        return 0;
    }
    for (i=valor; i >= 1; i--) {
        total *= i;
    }
    printf("%d! = %d\n", valor, total);
    return 0;
}
*/

int main() {
    int i, habitantes, idade, idade_max=0, idade_min=0, habitantes_f=0, idade_menor_sal;
    char sexo, sexo_min; 
    float salario, salario_soma=0, salario_min=0, media;
    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &habitantes);
    if (habitantes <= 0) {
        printf("Número inválido de habitantes.\n");
        return 0;
    }
    for (i=1; i <= habitantes; i++) {
        printf("Informe os dados do %dº habitante.\n", i);
        printf("Informe a idade do habitante: ");
        scanf("%d", &idade);
        printf("Informe o salário do habitante: ");
        scanf("%f", &salario);
        printf("Informe o sexo do habitante: ");
        scanf(" %c", &sexo);
        salario_soma += salario;
        if (i == 1) {
            idade_max = idade;
            idade_min = idade;
            salario_min = salario;
            idade_menor_sal = idade;
            sexo_min = sexo;
        }
        if (idade > idade_max) {
            idade_max = idade;
        }
        if (idade < idade_min) {
            idade_min = idade;
        }
        if (salario < salario_min) {
            salario_min = salario;
            sexo_min = sexo;
            idade_menor_sal = idade;
        }
        if (sexo == 'F' || sexo == 'f') {
            habitantes_f++;
        }
    }
    media = salario_soma / habitantes;
    printf("Média de salários: R$ %.2f.\n", media);
    printf("Maior idade: %d.\n", idade_max);
    printf("Menor idade: %d.\n", idade_min);
    printf("Quantidade de mulheres: %d.\n", habitantes_f);
    printf("Idade do habitante com o menor salário: %d.\n", idade_menor_sal);
    printf("Sexo do habitante com o menor salário: %c.\n", sexo_min);
    return 0;
}