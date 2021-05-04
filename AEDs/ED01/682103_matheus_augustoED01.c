/*
 Exercícios do ED01 - v0.0. - 02 / 04 / 2021
 Author: Matheus Augusto Moreira
 */
#include <stdio.h>
#include <math.h>
void method00()
{
}
void method01()
{
    int controlef1 = 0;
    int controlef2 = 1;
    int controlef3 = 0;
    int n = 0;
    printf("Digite o valor do numero inteiro que servira de referencia: \n");
    scanf("%d", &n);
    if (n>0)
    {
     
    
    do
    {

        controlef3 = controlef1 + controlef2;
        controlef1 = controlef2;
        controlef2 = controlef3;

    } while (controlef3 < n);
       printf("\nO valor do maior valor menor do que N e: %d", controlef1);
    }
    else
    {
        printf("\nPor favor digite um valor valido.");
    }
    
}
void method02()
{
    int lado = 0;
    printf("Digite um valor inteiro para calcular a area e perimetro de um quadrado com metade do tamanho do lado:\n ");
    scanf("%d", &lado);
    printf("O valor da area e: %d", (lado / 2) * (lado / 2));
    printf("\nO valor do perimetro e: %d", (lado / 2) * 4);
}
void method03()
{
    int comp = 0;
    int alt = 0;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &comp);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%d", &alt);
    printf("\nO valor do triplo da area e: %d", (comp * alt) * 3);
}
void method04()
{
    int comp = 0;
    int alt = 0;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &comp);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%d", &alt);
    printf("\nO valor do perimetro de um retangulo com um terco de comprimento e altura e: %d", ((comp / 3) * 2) + ((alt / 3) * 2));
    printf("\nO valor da area de um retangulo com um terco de comprimento e altura e: %d", (comp / 3) * (alt / 3));
}
void method05()
{
    double base = 0.0;
    double alt = 0.0;
    printf("Digite o valor da altura do triangulo: ");
    scanf("%lf", &alt);
    printf("\nDigite o valor da base do triangulo: ");
    scanf("%lf", &base);
    printf("\nO valor da area do triangulo com o dobro da altura e: %lf", base * (alt * 2.0) / 2.0);
}
void method06()
{
    double lado = 0.0;
    printf("Digite o valor do lado do triangulo equilatero: ");
    scanf("%lf", &lado);
    printf("Valor da altura do triangulo com metade do valor do lado: %lf\n", ((lado / 2.0) / 2.0) * (sqrt(3.0)));
    printf("Valor da area do triangulo com metade do valor do lado: %lf\n", (((lado / 2.0) * (lado / 2.0)) * sqrt(3.0)) / 4.0);
    printf("Valor do perimetro do triangulo com metade do valor do lado:%lf\n,", (lado / 2.0) * 3.0);
}
void method07()
{
    double lado = 0.0;
    printf("Digite o lado do cubo: ");
    scanf("%lf", &lado);
    printf("\nValor do volume do cubo com 4 vezes o valor do lado: %lf\n", (lado * 4.0) * (lado * 4.0) * (lado * 4.0));
}
void method08()
{
    int ladoX = 0;
    int ladoY = 0;
    int ladoZ = 0;
    printf("Digite o valor da largura do paralelepipedo: ");
    scanf("%d", &ladoX);
    printf("\nDigite a comprimento do paralelepipedo: ");
    scanf("%d", &ladoY);
    printf("\nDigite a altura do paralelepipedo: ");
    scanf("%d", &ladoZ);
    printf("\nVolume do paralelepipedo com um quinto das medidas: %lf\n", (ladoX / 5.0) * (ladoY / 5.0) * (ladoZ / 5.0));
}
void method09()
{
    double raio = 0.0;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    printf("\nValor da area do circulo considerando o valor do raio como metade: %lf\n", M_PI * ((raio / 2.0) * (raio / 2.0)));
}
void method10()
{
    double raio = 0.0;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    printf("\nValor do volume da esfera considerando o raio apenas como tres oitavos de seu valor: %lf\n", (4 * M_PI * ((raio * 0.375) * (raio * 0.375) * (raio * 0.375)) / 3));
}
void method11()
{
    double area = 0.0;
    double raio = 0.0;
    printf("Digite o valor da area da circunferencia:\n");
    scanf("%lf", &area);
    raio = sqrt(((area * 2) / M_PI));
    printf("\nO raio da circunferencia considerando que a area foi dobrada e: %lf\n", raio);
}
void method12()
{
    double volume = 0.0;
    double raio = 0.0;
    double area = 0.0;
    printf("Digite o volume da esfera: ");
    scanf("%lf", &volume);
    raio = cbrt(((volume / 2.0) / M_PI) * (3.0 / 4.0));
    area = (4 * M_PI) * (raio * raio);
    printf("\nO valor do raio da esfera considerando que o volume foi reduzido a metade e: %lf\n", raio);
    printf("\nO valor da area da esfera considerando que o volume foi reduzido a metade e: %lf\n", area);
}
int main()
{
    int x = 0;
    do
    {
        printf("\nED01 - Programa - v0.0\n");
        printf("Aluno: Matheus Augusto Moreira\n");
        printf("Matricula: 682103\n");
        printf("Opcoes\n");
        printf("\n 0 -  Parar");
        printf("\n 1 -  Exemplo 0111 Calcular um quarto da area do quadrado: ");
        printf("\n 2 -  Exemplo 0112 Calcular area e perimetro do quadrado com metade do tamanho do lado: ");
        printf("\n 3 -  Exemplo 0113 Calcular o triplo da area do retangulo: ");
        printf("\n 4 -  Exemplo 0114 Calcular area e perimetro do retangulo com um terco do valor dos lados: ");
        printf("\n 5 -  Exemplo 0115 Calcular area do triangulo com o dobro da altura: ");
        printf("\n 6 -  Exemplo 0116 Calcular area e perimetro do triangulo equilatero com metade do lado: ");
        printf("\n 7 -  Exemplo 0117 Calcular volume do cubo com quatro vezes a medida do lado:");
        printf("\n 8 -  Exemplo 0118 Calcular volume do paralelepipedo com um quinto de seus valores:");
        printf("\n 9 -  Exemplo 0119 Calcular area do circulo com metade do raio: ");
        printf("\n10 -  Exemplo 0120 Calcular o volume da esfera com tres oitavos do raio: ");
        printf("\n11 -  Exemplo 01E1 Calcular o raio do dobro da area de uma circunferencia: ");
        printf("\n12 -  Exemplo 01E2 Calcular o raio e area da esfera com metade do volume digitado: ");
        printf("\n");

        printf("\nEntrar com uma opcao: ");
        scanf("%d", &x);
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method01();
            break;
        case 2:
            method02();
            break;
        case 3:
            method03();
            break;
        case 4:
            method04();
            break;
        case 5:
            method05();
            break;
        case 6:
            method06();
            break;
        case 7:
            method07();
            break;
        case 8:
            method08();
            break;
        case 9:
            method09();
            break;
        case 10:
            method10();
            break;
        case 11:
            method11();
            break;
        case 12:
            method12();
            break;
        default:
            printf("\nERRO: Valor invalido.");
        }
    } while (x != 0);

    return (0);
}