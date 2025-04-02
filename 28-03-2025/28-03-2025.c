#include <stdio.h>

// Exercícios

// 1. Faça um algoritmo que leia dois valores e informe se os valores são iguais.
/*
int main() {
    int a, b;
    printf("Informe dois valores: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("Os valores são iguais.");
    else
        printf("Os valores são diferentes.");
    return 0;
}
*/

// 2. 
/*
int main() {
    int a, b, c;
    printf("Insira dois valores inteiros: ");
    scanf("%d %d". &a, &b);
    if (a < b) {
        c = a;
        a = b;
        b = c;
    }
    printf("A diferença entre %d e %d é %d.", a, b, a - b);
    return 0;
}
*/

// 3
/*
int main() {
    float distancia, tempo, velocidade;
    printf("Informe a distância viajada (Km): ");
    scanf("%f", &distancia);
    printf("Informe o tempo de viagem (h): ");
    scanf("%f", &tempo);
    velocidade = distancia / tempo;
    if (velocidade > 100)
        printf("A velocidade média de %.2fKm/h foi superior ao limite de 110Km/h.", velocidade);
    else
        printf("A velocidade média de %.2fKm/h foi inferior ao limite de 110Km/h.", velocidade);
    return 0;
}
*/

// 4
/*
int main() {
    float temperatura;
    printf("Informe a temperatura (°C): ");
    scanf("%f", &temperatura);
    if (temperatura >= 37.5)
        printf("Está com febre.");
    else
        printf("Não está com febre.");
    return 0;
}
*/

// 5
/*
int main() {
    int valor;
    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);
    if (valor % 7 == 0) 
        printf("O valor %d é múltiplo de 7.", valor);
    else
        printf("O valor %d não é múltiplo de 7.", valor);
    return 0;
}
*/

// 6
/*
int main() {
    float salario, parcela;
    printf("Informe o valor do salário: ");
    scanf("%f", &salario);
    printf("Informe o valor da prestação: ");
    scanf("%f", &parcela);
    if (parcela > (salario / 4))
        printf("Prestação muito alta. Empréstimo não é viável.");
    else
        printf("Prestação abaixo do valor máximo. Empréstimo é possível.");
    return 0;
}
*/

// 7

/*
int main() {
    float litros, valor;
    char tipo;
    printf("Informe a quantidade de litros: ");
    scanf("%f", &litros);
    printf("Informe o tipo de combustível, gasolina (G) ou álcool (A): ");
    scanf(" %c", &tipo);
    printf("Informe o valor do combustível: ");
    scanf("%f", &valor);
    if (tipo != 'A' && tipo != 'a' && tipo != 'G' && tipo != 'g') {
        printf("Tipo inválido.");
        return 0;
    }
    if (tipo == 'A' || tipo == 'a') {
        if (litros <= 20)
            printf("Valor a ser pago por %.2f L: R$ %.2f.", litros, ((litros * valor) * 0.97));
        else
            printf("Valor a ser pago por %.2f L: R$ %.2f.", litros, ((litros * valor) * 0.95));
    } else {
        if (litros <= 20)
            printf("Valor a ser pago por %.2f L: R$ %.2f.", litros, ((litros * valor) * 0.96));
        else
            printf("Valor a ser pago por %.2f L: R$ %.2f.", litros, ((litros * valor) * 0.94));
    }
    return 0;
}
*/

// 8
/*
int main() {
    int ano;
    float valor;
    printf("Informe o valor do carro: ");
    scanf("%f", &valor);
    printf("Informe o ano de fabricação: ");
    scanf("%d", &ano);
    if (ano < 1990)
        printf("Taxa do DETRAN: R$ %.2f.", valor * 0.01);
    else
        printf("Taxa do DETRAN: R$ %.2f.", valor * 0.015);
    return 0;
}
*/

// 9
/*
int main() {
    float a, b, c;
    printf("Informe três valores: ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a == 0 || b == 0 || c == 0) || (a > b + c || b > a + c || c > a + b)) {
        printf("Triêngulo impossível com estes valores.");
        return 0;
    }
    if (a == b && a == c)
        printf("O triângulo é equilátero.")
    else if (a == b || a == c || b == c)
        printf("O triângulo é isósceles")
    else
        printf("O triângulo é escaleno.")
    return 0;
}
*/

// 10
/*
int main() {
    char tipo;
    float a, b, c, media;
    printf("Informe o tipo de média desejada: aritmética (A) ou ponderada (P): ");
    scanf(" %c", &tipo);
    if (tipo != 'A' && tipo != 'a' && tipo != 'P' && tipo != 'p') {
        printf("Média inválida.");
        return 0;
    }
    printf("Informe as três notas: ");
    scanf("%f %f %f", &a, &b, &c);
    if (tipo == 'A' || tipo == 'a') {
        media = (a + b + c) / 3;
        printf("A média é igual a %.2f.", media);
    } else {
        media = (a * 0.3) + (b * 0.3) + (c * 0.4);
        printf("A média é igual a %.2f.", media);
    }
    return 0;
}
*/

// 11
/*
int main() {
    int a, b;
    printf("Informe dois números: ");
    scanf("%d %d", &a, &b);
    if ( a % 2 == 0) {
        if (b % 2 == 0)
            printf("Ambos os números são pares.");
        else
            printf("O número %d é par. O número %d é ímpar.", a, b);
    } else {
        if (b % 2 == 0)
            printf("O número %d é ímpar. O número %d é par", a, b);
        else
            printf("Ambos os números são ímpares.");
    }
    return 0;
}
*/

// 12
/*
int main() {
    char letra;
    printf("Informe uma letra: ");
    scanf(" %c", &letra);
    if (letra == 'a' || letra == 'A' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u' )
        printf("\"%c\" é uma vogal.", letra);
    else
        printf("\"%c\" não é uma vogal.", letra);
    return 0;
}
*/

// 13
/*
int main() {
    float a, b, c, d, media;
    printf("Informe as quatro notas: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if (a <= b && a <= c && a <= d) {
        media = (b + c + d) / 3;
        printf("A média é igual a %.2f.", media);
    } else if (b <= c && b <= d) {
        media = (a + c + d) / 3;
        printf("A média é igual a %.2f.", media);
    } else if (c <= d) {
        media = (a + b + d) / 3;
        printf("A média é igual a %.2f.", media);
    } else {
        media = (a + b + c) / 3;
        printf("A média é igual a %.2f.", media);
    }
    return 0;
}
*/

// 14
/*
int main() {
    int valor;
    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);
    if (valor < 0)
        printf("O valor %d é negativo.", valor);
    else if (valor == 0)
        printf("O valor é igual a %d.", valor);
    else {
        if (valor % 2 == 0)
            printf("O valor %d é positivo e par.", valor);
        else
            printf("O valor %d é positivo e ímpar.", valor);
    }
    return 0;
}
*/

// 15
/*
int main() {
    int a, b, c, d, e, f, total;
    float percento;
    total = 0;
    printf("Informe seis valores inteiros: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if (a > 0 && a % 2 == 0)
        total++;
    if (b > 0 && c % 2 == 0)
        total++;
    if (c > 0 && c % 2 == 0)
        total++;
    if (d > 0 && d % 2 == 0)
        total++;
    if (e > 0 && e % 2 == 0)
        total++;
    if (f > 0 && f % 2 == 0)
        total++;
    percento = total / 6;
    printf("%d/6 (%.2f\%) dos números são inteiros e positivos.", total, percento);
    return 0;
}
*/

// 16
/*
int main() {
    int hora, minuto, segundo;
    printf("Informe a hora: ");
    scanf("%d", &hora);
    printf("Informe os minutos: ");
    scanf("%d", &minuto);
    printf("Informe os segundos: ");
    scanf("%d", &segundo);
    if ((hora >= 0 && hora <= 23) && (minuto >= 0 && minuto <= 59) && (segundo >= 0 && segundo <= 59))
        printf("O horário %d:%d:%dh é válido.", hora, minuto, segundo);
    else
        printf("O horário informado não é válido.");
    return 0;
}
*/

// 17
/*
int main() {
    float a, b, c, media;
    int faltas;
    printf("Informe as três notas: ");
    scanf("%f %f %f", &a, &b, &c);
    media = (a + b + c) / 3;
    printf("Informe a quantidade de faltas: ");
    scanf("%d", &faltas);
    if (faltas > 5)
        printf("O aluno tem conceito \"E\".");
    else {
        if (media > 9)
            printf("O aluno tem conceito \"A\".");
        else if (media < 9 && media >= 8)
            printf("O aluno tem conceito \"B\".");
        else if (media < 8 && media >= 7)
            printf("O aluno tem conceito \"C\".");
        else if (media < 7 && media >= 6)
            printf("O aluno tem conceito \"D\".");
        else
            printf("O aluno tem conceito \"E\".");
    }
    return 0;
}
*/

// 18
/*
int main() {
    float horas, valor, sal_bruto, sal_liquido, adicional, bc_inss, bc_ir, valor_trienio, trienio, inss, ir;
    int idade, tempo, tempo_trienio;
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Informe o valor da hora de trabalho: ");
    scanf("%f", &valor);
    printf("informe a idade do funcionário: ");
    scanf("%d", &idade);
    printf("informe o tempo de serviço do funcionário: ");
    scanf("%d", &tempo);
    sal_bruto = horas * valor;
    tempo_trienio = tempo / 3;
    trienio = tempo_trienio * 0.02;
    if (idade >= 40)
        adicional = sal_bruto * 0.0015;
    valor_trienio = sal_bruto * trienio;
    bc_inss = sal_bruto + valor_trienio + adicional;
    // Valor do INSS
    inss = bc_inss * 0.085;
    bc_ir = sal_bruto + valor_trienio + adicional - inss;
    // Valor do IRRF
    if (bc_ir <= 1434.00)
        ir = 0;
    else if (bc_ir <= 2150.00 )
        ir = (bc_ir * 0.075) - 107.55;
    else if (bc_ir <= 2866.00 )
        ir = (bc_ir * 0.15) - 268.80;
    else if (bc_ir <= 3582.00 )
        ir = (bc_ir * 0.225) - 483.75;
    else
        ir = (bc_ir * 0.275) - 662.85;
    sal_liquido = sal_bruto + trienio + adicional - inss - ir;
    printf("O valor do salário liquído é R$ %.2f.", sal_liquido);
    return 0;
}
*/

// 19
/*
int main() {
    float peso, altura, imc;
    printf("Informe o peso: ");
    scanf("%f", &peso);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 18.5)
        printf("Abaixo do peso.");
    else if (imc < 25)
        printf("Normal.");
    else if (imc < 30)
        printf("Pré-obeso.");
    else if (imc < 35)
        printf("Obeso classe I.");
    else if (imc < 40)
        printf("Obeso classe II.");
    else
        printf("Obeso classe III.");
    return 0;
}
*/

// 20
/*
int main() {
    int valor;
    printf("Informe um valor inteiro de 1 a 5: ");
    scanf("%d", &valor);
    if (valor == 1 )
        printf("Um.");
    else if (valor == 2)
        printf("Dois.");
    else if (valor == 3)
        printf("Três.");
    else if (valor == 4)
        printf("Quatro.");
    else if (valor == 5)
        printf("Cinco.");
    else
        printf("Valor inválido.");
    return 0;
}
*/

// 21
/*
int main() {
    int valor;
    printf("Informe o número do mês: ");
    scanf("%d", &valor);
    if (valor == 1)
        printf("Janeiro.");
    else if (valor == 2)
        printf("Fevereiro.");
    else if (valor == 3)
        printf("Março.");
    else if (valor == 4)
        printf("Abril.");
    else if (valor == 5)
        printf("Maio.");
    else if (valor == 6)
        printf("Junho.");
    else if (valor == 7)
        printf("Julho.");
    else if (valor == 8)
        printf("Agosto.");
    else if (valor == 9)
        printf("Setembro.");
    else if (valor == 10)
        printf("Outubro.");
    else if (valor == 11)
        printf("Novembro.");
    else if (valor == 12)
        printf("Sezembro");
    else
        printf("Mês inválido.");
    return 0;
}
*/

// 22

int main() {
    int nascimento, ano_atual, idade;
    printf("Informe o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);
    idade = ano_atual - nascimento;
    if (idade <= 11)
        printf("Criança.");
    else if (idade <= 17)
        printf("Adolescente.");
    else if (idade <= 25)
        printf("Jovem.");
    else if (idade <= 64)
        printf("Adulto.");
    else
        printf("Idoso.");
    return 0;
}