#include <stdio.h>
// Exercício 1
/*
int main() {
    int a, b;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("A + B: %d\n", a + b);
    printf("A - B: %d\n", a - b);
    return 0;
}
*/

// Exercício 2
/*
int main() {
    int nascimento, vigente;
    printf("Informe o ano vigente: ");
    scanf("%d", &vigente);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Idade: %d anos.", vigente - nascimento);
    return 0;
}
*/

// Exercício 3
/*
int main() {
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    printf("Antecessor: %d\n", valor - 1);
    printf("Sucessor: %d\n", valor + 1);
    return 0;
}
*/

// Exercício 4
/*
int main() {
    float base, altura;
    printf("Informe o valor da base: ");
    scanf("%f", &base);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);
    printf("Área do triângulo: %f", (base * altura) / 2);
    return 0;  
}
*/

// Exercício 5
/*
int main() {
    float nota1, nota2;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Média: %.2f", (nota1 + nota2) / 2);
    return 0;
}
*/

// Exercício 6
/*
int main() {
    int a, b, c;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d * %d = %d\n", b, c, b * c);
    return 0;  
}
*/


// Exercício 7
/* int main() {
    float distancia, velocidade;
    printf("Informe a distância (Km): ");
    scanf("%f", &distancia);
    printf("Informe a velocidade (Km/h): ");
    scanf("%f", &velocidade);
    printf("Tempo médio de viagem (h): %.2fh\n", distancia / velocidade );
    printf("%f", velocidade / 3.6);
    return 0;
} */

// Exercício 8

/* int main() {
    float dolares, cotacao;
    printf("Informe a quantidade de doláres: ");
    scanf("%f", &dolares);
    printf("Informe a cotação: ");
    scanf("%f", &cotacao);
    printf("US$ %.2f equivalem a R$ %.2f.\n", dolares, dolares * cotacao);
    return 0;
} */

// Exercício 9

/* int main() {
    float salario, reajuste;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Informe o indíce de reajuste (\%): ");
    scanf("%f", &reajuste);
    printf("Salário atualizado: R$ %.2f.\n", salario * (1 + (reajuste / 100)));
    return 0;
} */

// Exercício 10
/*
int main() {
    int empregados, vendas;
    float salarioMin, custo;
    printf("Informe o número de funcionários: ");
    scanf("%d", &empregados);
    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &salarioMin);
    printf("Informe o preço de custo de cada bicicleta: ");
    scanf("%f", &custo);
    printf("Informe o número de unidades vendidas: ");
    scanf("%d", &vendas);
    float lucroBruto = vendas * (custo * (1.5));
    float custoFunc = ((salarioMin * 2) + (vendas * custo * (0.15/empregados)));
    float liquido = lucroBruto - custoFunc - (custo * vendas);
    printf("Custo total por funcionário: R$ %f", custoFunc);
    printf("Lucro liquído: R$ %f", liquido);
    return 0;
}
*/

// Exercício 11
/*
int main() {
    int tempo;
    float minutos, horas;
    printf("informe o tempo em segundos: ");
    scanf("%d", &tempo);
    minutos = tempo / 60;
    horas = minutos / 60;
    printf("%.2f horas.\n", horas);
    printf("%.2f minutos.\n", minutos);
    printf("%d segundos.\n", tempo);
    return 0;
} */

// Exercecício 12
/*
int main() {
    int a, b, c;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    c = a;
    printf("A: %d\nB: %d\n", a, b);
    a = b;
    b = c;
    printf("A: %d\nB: %d\n", a, b);
    return 0;
}
*/

// Exercício 13
/*
int main() {
    float total;
    printf("Informe o valor do produto: ");
    scanf("%f", &total);
    printf("Valor da parcela: R$ %.2f", total / 5);
    return 0;
}
*/

// Exercício 14
/*
int main() {
    float lado;
    printf("Informe o valor do lado (m): ");
    scanf("%f", &lado);
    printf("Área: %.2f m2.\n", lado * lado);
    printf("Perímetro: %.2f m", lado * 4);
    return 0;
}
*/

// Exercício 15
/*
int main() {
    float distancia, consumo, tempo;
    printf("Informe a distância percorrida (Km): ");
    scanf("%f", &distancia);
    printf("Informe o consumo médio da viagem (Km/L): ");
    scanf("%f", &consumo);
    printf("Informe o tempo da viagem (h): ");
    scanf("%f", &tempo);
    printf("Velocidade média: %.2f Km/h.\n", distancia / tempo);
    printf("Consumo total: %.2f L.", consumo * distancia);
    return 0;
}
*/

// Exercício 16
/*
int main() {
    int valores[4];
    printf("Informe o primeiro valor: ");
    scanf("%d", &valores[0]);
    printf("Informe o segundo valor: ");
    scanf("%d", &valores[1]);
    printf("Informe o terceiro valor: ");
    scanf("%d", &valores[2]);
    printf("Informe o quarto valor: ");
    scanf("%d", &valores[3]);
    printf("Somas:\nA + B = %d\nA + C = %d\nA + D = %d\nB + C = %d\nB + D = %d\nC + D = %d\n", valores[0] + valores [1], valores[0] + valores [2], valores[0] + valores [3], valores[1] + valores [2], valores[1] + valores [3], valores[2] + valores [3]);
    printf("\nProdutos:\nA * B = %d\nA * C = %d\nA * D = %d\nB * C = %d\nB * D = %d\nC * D = %d\n", valores[0] * valores [1], valores[0] * valores [2], valores[0] * valores [3], valores[1] * valores [2], valores[1] * valores [3], valores[2] * valores [3]);
    return 0;
}
*/

// Exercício 17 
/*
int main() {
    float altura, largura, profundidade;
    print("Informe a altura da caixa: ");
    scanf("%f", &altura);
    print("Informe a largura da caixa: ");
    scanf("%f", &largura);
    print("Informe a profundidade da caixa: ");
    scanf("%f", &profundidade);
    printf("Volume: %.2f", altura * largura * profundidade);
    return 0;
}
*/

// Exercício 18
/*
int main() {
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    printf("%d^2 = %d", valor, valor * valor);
    return 0;
}
*/

// Exercício 19
/*
int main() {
    int a, b, c;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);
    printf("%d^2 + %d^2 + %d^2 = %d", a, b, c, (a*a) + (b*b) + (c*c));
    return 0;
}
*/

// Exercício 20
/*
int main() {
    float a, b;
    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    printf("Informe o segundo valor: ");
    scanf("%f", &b);
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    return 0;
}
*/

// Exercício 21

int main() {
    int a, b, c, nulos, brancos;
    printf("Informe a quantidade de votos para o candidato \"A\": ");
    scanf("%d", &a);
    printf("Informe a quantidade de votos para o candidato \"B\": ");
    scanf("%d", &b);
    printf("Informe a quantidade de votos para o candidato \"C\": ");
    scanf("%d", &c);
    printf("Informe a quantidade de votos nulos: ");
    scanf("%d", &nulos);
    printf("Informe a quantidade de votos em branco: ");
    scanf("%d", &brancos);
    float total = a + b + c + nulos + brancos;
    printf("Total de votos: %.0f\n", total);
    printf("Porcentagem dos votos válidos: %.2f\n", ((a+b+c)/total) * 100);
    printf("Porcentagem dos votos para o candidato \"A\": %.2f %\n", (a/total) * 100);
    printf("Porcentagem dos votos para o candidato \"B\": %.2f %\n", (b/total) * 100);
    printf("Porcentagem dos votos para o candidato \"C\": %.2f %\n", (c/total) * 100);
    printf("Porcentagem dos votos nulos: %.2f %\n", (nulos/total) * 100);
    printf("Porcentagem dos votos brancos: %.2f %\n", (brancos/total) * 100);
    return 0;
}