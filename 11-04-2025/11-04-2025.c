#include <stdio.h>

// 1
/*
int main() {
    int valor, qtd_num=0, i=1;
    for ( i=1; i <= 10; i++ ) {
        printf("Informe o %dº valor: ", i);
        scanf("%d", &valor);
        if (valor > 100) {
            qtd_num++;
    }
    if (qtd_num > 0)
        printf("Há %d números maiores que 100.\n", qtd_num);
    else
        printf("Não há números maiores que 100.");
    return 0;
}
*/

// 2
/*
int main() {
    int valor, i=1, valor_min, valor_max;
    do {
        printf("Insira o %dº valor: ", i);
        scanf("%d", &valor);
        if (i == 1) {
            valor_min = valor;
            valor_max = valor;
        }
        if (valor > valor_max)
            valor_max = valor;
        if (valor < valor_min)
            valor_min = valor;
        i++;
    } while(i <= 15);
    printf("Menor valor: %d\n", valor_min);
    printf("Maior valor: %d\n", valor_max);
    return 0;
}
*/

// 3
/*
int main() {
    int i;
    for (i = 1; i <= 25; i++) {
        if (i % 2 == 0)
            printf("%d é par.\n", i);
    }
    return 0;
}
*/

// 4
/*
int main() {
    int valor, codigo, i, total_coelhos=0, total_ratos=0;
    float percento_coelhos, percento_ratos, total=0;
    for (i = 1; i <= 15; i++) {
        printf("Informe a quantidade de cobaias do %dº experimento: ", i);
        scanf("%d", &valor);
        total += valor;
        do {
            printf("Informe o tipo de cobaia (1: coelho / 2: rato ): ");
            scanf("%d", &codigo);
            if ( codigo != 1 && codigo != 2) {
                printf("Código inválido. Digite um código válido para a cobaia do %dº experimento:\n", i);
            }
            if ( codigo == 1) {
                total_coelhos += valor;
            }
            if ( codigo == 2 ) {
                total_ratos += valor;
            }
        } while( codigo != 1 && codigo != 2 );
    }
    percento_coelhos = (float) (total_coelhos * 100 / total);
    percento_ratos = (float) (total_ratos * 100 / total);
    printf("Total de cobaias usadas: %.0f\n", total);
    printf("Total de coelhos usados: %d\n", total_coelhos);
    printf("Porcentagem de coelhos: %.2f%%\n", percento_coelhos);
    printf("Total de ratos usados: %d\n", total_ratos);
    printf("Porcentagem de ratos: %.2f%%\n", percento_ratos);
    return 0;
}
*/

// 5
/*
int main() {
    int idade, i, peso_qtd=0, idade_total=0, qtd_pessoas=0, qtd_pessoas_idade=0;
    float peso, idade_media;
    for(i=1; i <= 7; i++) {
        printf("Informe a idade da %dª pessoa: ", i);
        scanf("%d", &idade);
        idade_total = idade;
        printf("Informe o peso da %dª pessoa: ", i);
        scanf("%f", &peso);
        if (peso > 90)
            peso_qtd++;
        if ( idade > 18 && peso < 60)
            qtd_pessoas++;
        if ( idade >= 10 && idade <= 30)
            qtd_pessoas_idade++;
    }
    float media = idade_total / 7;
    printf("Quantidade de pessoas com mais de 90Kg: %d\n", peso_qtd);
    printf("Média das idades: %.2f\n", media);
    printf("Quantidade de pessoas acima de 18 anos e abaixo de 60Kg: %d\n", qtd_pessoas);
    printf("Quantidade de pessoas entre 10 e 30 anos: %d\n", qtd_pessoas_idade);
    return 0;
}
*/

// 6
/*
int main() {
    int i, resposta, total_sim=0, total_f=0, total_m=0, total_f_sim=0, total_m_sim=0;
    char sexo;
    for (i = 1; i <= 20; i++) {
        do {
            printf("Informe o sexo do %dº participante (F / M): ", i);
            scanf(" %c", &sexo);
            if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
                printf("Valor inválido. Insira um valor válido: \n");
            }
        } while( sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f' );
        if ( sexo == 'F' || sexo == 'f' ) {
            total_f++;
        } else {
            total_m++;
        }
        do {
            printf("Informe a resposta do %dº participante (Sim: 1 / Não: 2): ", i);
            scanf("%d", &resposta);
            if ( resposta != 1 && resposta != 2 ) {
                printf("Valor inválido. Insira um valor válido: \n");
            }
        } while( resposta != 1 && resposta != 2 );
        if ( resposta == 1 ) {
            if ( sexo == 'F' || sexo == 'f' )
                total_f_sim++;
            else
                total_m_sim++;
        }
    }
    float a = (total_f_sim * 100) / total_f;
    float b = ((total_m - total_m_sim) * 100) / total_f;
    printf("Total de participantes: 20\n");
    printf("Total de pessoas que responderam não: %d\n", ( 20 - total_f_sim - total_m_sim ));
    printf("Porcentagem de pessoas do sexo feminino que responderam sim: %.2f%%\n", a);
    printf("Porcentagem de pessoas do sexo masculino que responderam não: %.2f%%\n", b);
    return 0;    
}
*/

// 7
/*
int main() {
    int i, j, n;
    for ( i = 1; i <= 5; i++ ) {
        printf("Informe o %dº valor: ", i);
        scanf("%d", &n);
        for ( j = 1; j <= n; j++ ) {
            printf("%d x %d = %d\n", j , n, j * n);
        }
    }
    return 0;
}
*/

// 8
// O exercício pede um algoritmo para 100 bois; para fins de facilidade de teste, foram considerados 5
/*
int main() {
    int i, id, id_peso_max;
    float peso, peso_max=0;
    for ( i=1; i <= 5; i++ ) {
        printf("Informe o número identificador do %dº boi: ", i);
        scanf("%d", &id);
        printf("Informe o peso do %dº boi: ", i);
        scanf("%f", &peso);
        if ( peso > peso_max || i == 1) {
            peso_max = peso;
            id_peso_max = id;
        }
    }
    printf("Número identificador do boi mais pesado: %d.\n", id_peso_max);
    printf("Peso do boi nº %d: %.2fKg.\n", id_peso_max, peso_max);
    return 0;
}
*/

// 9
/*
int main() {
    int i;
    float a, b, c, media;
    for ( i=1; i <= 20; i++ ) {
        printf("Informe as três notas do %dº aluno: ", i);
        scanf("%f %f %f", &a, &b, &c);
        media = (a + b + c)/3;
        printf("Média do %dº aluno: %.2f.\n", i, media);
    }
    return 0;
}
*/

// 10
/*
int main() {
    int i;
    for ( i=1; i < 200; i++ ) {
        if ( i % 4 == 0 ) {
            printf("%d / 4 = %d\n", i, (i / 4));
        }
    }
    return 0;
}
*/

// 11
/*
int main() {
    int i, j, total;
    for ( i=0; i <= 15; i++ ) {
        if ( i == 0 ) {
            total = 1;
        } else if ( i == 1 ) {
            total = 3;
        } else {
            total *= 3;
        }
        printf("3^%d = %d\n", i, total);
    }
    return 0;
}
*/


// 12
/*
int main() {
    int valor, qtd_impares=0;
    do {
        printf("Informe um valor inteiro: ");
        scanf("%d", &valor);
        if ( valor == -999 )
            break;
        if (valor%2 != 0 )
            qtd_impares++;
    } while( valor != -999 );
    printf("Existem %d números ímpares.\n", qtd_impares);
    return 0;
}
*/


// 13
/*
int main() {
    int valor, i, valor_total=0;
    do {
        printf("Informe o valor: ");
        scanf("%d", &valor);
        if (valor == 10) {
            valor_total++;
        }
    } while(valor != 0);
    printf("O número 10 ocorre %d vezes.", valor_total);
    return 0;
}
*/

// 14
/*
int main() {
    float altura, altura_max, altura_min, altura_total, altura_total_f, altura_media_f, altura_media_total;
    char sexo;
    int qtd_f, i;
    for ( i=1; i <= 10; i++ ) {
        do {
            printf("Informe o gênero da %dª pessoa (F/M): ", i);
            scanf(" %c", &sexo);
            if (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm') {
                qtd_f++;
                printf("Sexo inválido. Informe um valor válido: \n");
            }
        } while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');
        printf("Informe a altura da %dª pessoa: ", i);
        scanf("%f", &altura);
        if (i == 1) {
            altura_max = altura;
            altura_min = altura;
        }
        if ( sexo != 'F' || sexo != 'f' )
            altura_media_f += altura;
        if ( altura > altura_max )
            altura_max = altura;
        if ( altura < altura_min )
            altura_min = altura;
    }
    printf("Maior altura: %.2f\n", altura_max);
    printf("Menor altura: %.2f\n", altura_min);
    altura_media_f = altura_total_f / qtd_f;
    printf("Altura média das mulheres: %.2f\n", altura_media_f);
    altura_media_total = altura_total / 10;
    printf("Altura média de todos: %.2f\n", altura_media_total);
    return 0;
}
*/

// 15
/*
int main() {
    int i;
    for (i=1000; i <= 1999; i++) {
        if ( i % 11 == 5 )
            printf("%d / 11 = 5\n", i);
    }
    return 0;
}
*/

// 16

// 17
/*
int main() {
    int valor, soma=0, total=0;
    float media;
    do {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if ( valor < 0 )
            break;
        else
            total++;
        soma += valor;
    } while( valor >= 0 );
    printf("Somatório dos valores: %d\n", soma);
    media = soma / total;
    printf("Média dos valores: %.2f\n", media);
    printf("Quantidade de valores processados: %d\n", total);
    return 0;
}
*/

// 18
/*
int main() {
    int valor, total, soma, i, j;
    for ( i=1; i <= 15; i++ ) {
        printf("Informe o %dº valor: ", i);
        scanf("%d", &valor);
        total = 1;
        for ( j = 1; j <= valor; j++ ) {
            total *= j;
        }
        soma += total;       
    }
    printf("Total: %d", soma);
    return 0;
}
*/

// 19
/*
int main() {
    int i=1, valor, valor_max, valor_min;
    do {
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if ( i == 1 ) {
            valor_max = valor;
            valor_min = valor;
        }
        if ( valor < 0 )
            break;
        i++;
        if ( valor > valor_max )
            valor_max = valor;
        if ( valor < valor_min )
            valor_min = valor;
    } while( valor > 0 );
    printf("Maior valor: %d\n", valor_max);
    printf("Menor valor: %d\n", valor_min);
    return 0;
}
*/

// 20
/*
int main() {
    int valor, i, j, qtd_negativo=0, qtd_positivo=0, soma_positivo=0;
    float media;
    do {
        printf("Informe o valor: ");
        scanf("%d", &valor);
        if ( valor < 0 ) {
            qtd_negativo++;
        }
        if ( valor > 0 ) {
            qtd_positivo++;
            soma_positivo += valor;
        }
    } while ( valor != 0 );
    media = soma_positivo / qtd_positivo;
    printf("Quantidade de números negativos: %d\n", qtd_negativo);
    printf("Média dos números positivos: %.2f\n", media);
    return 0;
}
*/

// 21
/*
int main() {
    int valor, i;
    printf("Informe o valor: ");
    scanf("%d", &valor);
    for ( i=2; i < valor; i++ ) {
        if ( valor % i == 0 ) {
            printf("O número %d não é primo.\n", valor);
            return 0;
        }
    }
    printf("O número %d é primo.\n", valor);
    return 0;
}
*/

// 22
/*
int main() {
    float altura_chico=1.50, altura_ze=1.10;
    int x=0;
    while ( altura_chico > altura_ze ) {
        if (altura_chico >= altura_ze) {
            altura_chico += 0.02;
            altura_ze += 0.03;
            x++;
        }
    }
    printf("Zé será mais alto que Chico em %d anos.\n", x);
    return 0;
}
*/

// 23
/*
int main() {
    int  habit_filhos_num, habit_filhos_qtd, i=1, salario_ate_1500=0, habit_menor_salario_filhos, habit_qtd;
    float salario, salario_soma, salario_media, salario_menor=0, habit_filhos_media, salario_ate_1500_media;
    do {
        printf("informe o salário do %dº habitante: ", i);
        scanf("%f", &salario);
        if ( salario < 0 )
            break;
        salario_soma += salario;
        printf("Informe o número de filhos do %dº habitante: ", i);
        scanf("%d", &habit_filhos_num);
        habit_filhos_qtd += habit_filhos_num;
        habit_qtd++;
        if ( i == 1 || salario < salario_menor ) 
            salario_menor = salario;
            habit_menor_salario_filhos = habit_filhos_num;
        if ( salario < 1500 )
            salario_ate_1500++;
        i++;
    } while ( salario >= 0 );
    salario_media = salario_soma / habit_qtd; // Média do salário
    habit_filhos_media = (float) habit_filhos_qtd / habit_qtd; // Média do número de filhos
    salario_ate_1500_media = ( salario_ate_1500 * 100 ) / habit_qtd ; // Percentual dos habitantes que ganham até R$ 1.500,00
    printf("Média do salário da população: %.2f\n", salario_media);
    printf("Média do número de filhos por habitante: %.2f\n", habit_filhos_media);
    printf("Número de filhos do habitante com o menor salário: %d\n", habit_menor_salario_filhos);
    printf("Percentual de habitantes com salário até R$ 1.500,00: %.2f%%\n", salario_ate_1500_media);
    return 0;
}
*/
