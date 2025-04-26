/* Ler as notas de uma turma de 30 alunos. Calcular e apresentar a média da turma. O programa deve apresentar as notas que são iguais
ou maiores que a média e a sua quantidade. */

/*
#include <stdio.h>

int main() {
    int x = 3;
    float notas[x], total=0, media;
    int i, soma_maior=0;
    for (i=0; i < x; i++) {
        printf("Informe a nota do %dº aluno: ", i+1);
        scanf("%f", &notas[i]);
        total += notas[i];
    }
    media = total / x;
    for (i=0; i < x; i++) {
        if (notas[i] >= media) {
            printf("%.2f é maior que a média de %.2f\n", notas[i], media);
            soma_maior++;
        }
    }
    printf("Existem %d notas maiores que a média de %.2f.", soma_maior, media);
    return 0;
}
*/

/* Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano. Considere
que cada ano tenha 365 dias.
Calcular e excrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi interior a média anual */

/*
#include <stdio.h>

int main() {
    int ano = 3;
    float temp[ano], temp_media, temp_maior, temp_menor, temp_soma;
    int i, qtd_menor=0;
    printf("Informe as temperaturas do ano:\n");
    for (i=0; i < ano; i++) {
        printf("Informe a temperatura do %dº dia: ", i+1);
        scanf("%f", &temp[i]);
        temp_soma += temp[i];
    }
    temp_media = temp_soma / ano;
    temp_menor = temp[0];
    temp_maior = temp[0];
    for (i=0; i < ano; i++) {
        if (temp[i] < temp_menor)
            temp_menor = temp[i];
        if (temp[i] > temp_maior)
            temp_maior = temp[i];
        if (temp[i] < temp_media)
            qtd_menor++;
    }
    printf("Menor temperatura do ano: %.1fºC\n", temp_menor);
    printf("Maior temperatura do ano: %.1fºC\n", temp_maior);
    printf("Temperatura média: %.1fºC\n", temp_media);
    printf("A temperatura foi menor que a média durante %d dias do ano.\n", qtd_menor);
    return 0;
}
*/

/* Ler dois vetores com 15 elementos inteiros (A e B). Gerar um terceiro valor (C) que armazenará a soma
dos elementos nas posições correspondentes dos vetores A e B. Apresentar na tela o vetor C. */

#include <stdio.h>

int main() {
    int x=3;
    int a[x], b[x], c[x], i;
    printf("Informe os valores para os conjuntos A e B:\n");
    for (i=0; i < x; i++) {
        printf("Informe o %dº valor do conjunto A: ", i+1);
        scanf("%d", &a[i]);
        printf("Informe o %dº valor do conjunto B: ", i+1);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }
    for (i=0; i < x; i++) {
        printf("%dº valor do conjunto C: %d\n", i+1, c[i]);
    }
    return 0;
}