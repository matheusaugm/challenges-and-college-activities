#include <stdio.h>
#include <math.h>
// Aluno: Matheus Augusto Moreira CC Manhã PUC MINAS
// Matricula: 682103
void method00()
{
}
void method01()
{
    int valorint = 0;
    printf("Digite um valor inteiro:");
    scanf("%d", &valorint);
    if (valorint % 2 == 0)
    {
        printf("Valor par.\n");
    }
    else
    {
        printf("Valor impar.\n");
    }
}
void method02()
{
    int valorint = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorint);
    if (valorint % 2 == 0)
    {
        if (valorint > 100)
        {
            printf("Valor par e maior que 100.\n");
        }
        else
        {
            printf("Valor par.\n");
        }
    }
    else
    {
        if (valorint < -100)
        {
            printf("Valor impar e menor que -100.\n");
        }
        else
        {
            printf("Valor impar.\n");
        }
    }
}
void method03()
{
    int valorint = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorint);
    if (valorint > 20 && valorint < 60)
    {
        printf("O valor apresentado pertence ao intervalo aberto 20:60.\n");
    }
    else
    {
        printf("O valor apresentado nao pertence ao intervalo aberto 20:60.\n");
    }
}
void method04()
{
    int valorint = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorint);
    if (valorint >= 20 && valorint <= 60)
    {
        printf("O valor apresentado pertence ao intervalo fechado 20:60.\n");
    }
    else
    {
        printf("O valor apresentado nao pertence ao intervalo fechado 20:60.\n");
    }
}
void method05()
{
    int valorint = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorint);
    if (25 <= valorint && valorint <= 99)
    {
        if (33 <= valorint && valorint <= 45)
        {
            printf("O valor apresentado pertence aos intervalos [25:45] e [33:99].\n");
        }
        else if (46 <= valorint && valorint <= 99)
        {
            printf("O valor apresentado pertence ao intervalo [33:99].\n");
        }
        else if (25 <= valorint && valorint <= 32)
        {
            printf("O valor apresentado pertence ao intervalo [25:45].\n");
        }
    }
    else
    {
        printf("O valor apresentado nao pertence a nenhum dos intervalos.\n");
    }
}
void method06()
{
    int valorint1 = 0;
    int valorint2 = 0;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valorint1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valorint2);
    if (valorint1 % 2 == 0)
    {
        printf("O valor do primeiro numero nao e impar.\n");
    }
    else
    {
        printf("O valor do primeiro numero e impar.\n");
    }
    if (valorint2 % 2 == 0)
    {
        printf("O valor do segundo numero e par.\n");
    }
    else
    {
        printf("O valor do segundo numero nao e par.\n");
    }
}
void method07()
{
    int valorint1 = 0;
    int valorint2 = 0;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valorint1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valorint2);
    if (valorint1 % 2 == 0)
    {
        if (valorint1 > 0)
        {
            printf("O valor do primeiro numero nao e impar, mas e positivo.\n");
        }
        else
        {
            printf("O valor do primeiro numero nao e impar, nem positivo.\n");
        }
    }
    else
    {
        if (valorint1 > 0)
        {
            printf("O valor do primeiro numero e impar e positivo.\n");
        }
        else
        {
            printf("O valor do primeiro numero e impar, mas nao e positivo.\n");
        }
    }
    if (valorint2 % 2 == 0)
    {
        if (valorint2 < 0)
        {
            printf("O valor do segundo numero e par e negativo.\n");
        }
        else
        {
            printf("O valor do segundo numero e par, mas nao e negativo.\n");
        }
    }
    else
    {
        if (valorint2 < 0)
        {
            printf("O valor do segundo numero nao e par, mas e negativo.\n");
        }
        else
        {
            printf("O valor do segundo numero nao e par nem negativo.\n");
        }
    }
}
void method08()
{
    double valorint1 = 0.0;
    double valorint2 = 0.0;
    printf("Digite o primeiro valor real: ");
    scanf("%lf", &valorint1);
    printf("Digite o segundo valor real: ");
    scanf("%lf", &valorint2);
    if (valorint1 > valorint2)
    {
        printf("O primeiro valor e maior que o segundo.\n");
    }
    else if (valorint1 == valorint2)
    {
        printf("Os valores sao iguais.\n");
    }
    else
    {
        printf("O primeiro valor e menor que o segundo.\n");
    }
}
void method09()
{
    double valorint1 = 0.0;
    double valorint2 = 0.0;
    double valorint3 = 0.0;
    printf("Digite o primeiro valor real: ");
    scanf("%lf", &valorint1);
    printf("Digite o segundo valor real: ");
    scanf("%lf", &valorint2);
    printf("Digite o terceiro valor real: ");
    scanf("%lf", &valorint3);
    if (valorint2 != valorint3)
    {
        if (valorint2 >= valorint1 && valorint3 <= valorint1)
        {
            printf("O primeiro valor esta entre os outros dois valores.\n");
        }
        else if (valorint2 <= valorint1 && valorint3 >= valorint1)
        {
            printf("O primeiro valor esta entres os outros dois valores.\n");
        }
    }
    else
    {
        printf("O segundo e terceiro valores sao iguais.\n");
    }
}
void method10()
{
    double valorint1 = 0.0;
    double valorint2 = 0.0;
    double valorint3 = 0.0;
    printf("Digite o primeiro valor real: ");
    scanf("%lf", &valorint1);
    printf("Digite o segundo valor real: ");
    scanf("%lf", &valorint2);
    printf("Digite o terceiro valor real: ");
    scanf("%lf", &valorint3);
    if (valorint2 != valorint3)
    {
        if (valorint2 > valorint1 && valorint3 < valorint1)
        {
            printf("O primeiro valor esta entre os outros dois valores e todos os numeros sao diferentes entre si.\n");
        }
        else if (valorint2 < valorint1 && valorint3 > valorint1)
        {
            printf("O primeiro valor esta entres os outros dois valores e todos os numeros sao diferentes entre si.\n");
        }
        else if (valorint1 == valorint2)
        {
            printf("O primeiro valor e igual ao segundo.\n");
        }
        else if (valorint1 == valorint3)
        {
            printf("O primeiro valor e igual ao terceiro.\n");
        }

        else
        {
            printf("O primeiro valor nao esta entre os outros e todos os numeros sao diferentes entre si.\n");
        }
    }
    else
    {
        printf("O segundo e terceiro valores sao iguais.\n");
    }
} //end method10

void method11()
{
    char primvalor = ' ';
    char secvalor = ' ';
    char tervalor = ' ';

    printf("Insira o primeiro caractere:\n");
    scanf("\n%c", &primvalor);
    printf("Insira o segundo caractere:\n");
    scanf("\n%c", &secvalor);
    printf("Insira o terceiro caractere:\n");
    scanf("\n%c", &tervalor);

    if (primvalor != secvalor && primvalor != tervalor && secvalor != tervalor)
    {

        if (primvalor < secvalor && primvalor > tervalor || primvalor > secvalor && primvalor < tervalor)
        {

            printf("O valor %c esta entre segundo valor e terceiro valor. \n", primvalor);
        }
        else
        {

            printf("O valor nao %c esta entre o segundo valor e terceiro valor. \n", primvalor);
        }
    }
    else if (primvalor == secvalor || primvalor == tervalor)
    {
        printf("O primeiro valor e igual a um dos valores \n");
    } //end elseif
} //end method11

void method12()
{
    char primvalor = ' ';
    char secvalor = ' ';
    char tervalor = ' ';

    printf("Insira o primeiro caractere:\n");
    scanf("\n%c", &primvalor);
    printf("Insira o segundo caractere:\n");
    scanf("\n%c", &secvalor);
    printf("Insira o terceiro caractere:\n");
    scanf("\n%c", &tervalor);
    if (primvalor != secvalor && primvalor != tervalor && secvalor != tervalor)
    {
        if (!(primvalor < secvalor && primvalor > tervalor || primvalor > secvalor && primvalor < tervalor))
        {
            printf("O valor de nao %c esta dentro dos limites dos valores apresentados. \n", primvalor);
        } //end 2oif
    }     //end 1oif
    else
    {
        printf("Dois valores sao iguais entre si. \n");
    } //end else

} //end method12
int main()
{
    int x;
    do
    {
        printf("ED02 - Programa - v1.3\n");
        printf("Aluno: Matheus Augusto Moreira\n");
        printf("Matricula: 682103\n");
        printf("Opcoes\n");
        printf("\n 0 -  Parar");
        printf("\n 1 -  Exemplo 0211 Ler um valor inteiro e dizer se par ou impar.");
        printf("\n 2 -  Exemplo 0212 Ler um valor inteiro, dizer se par e maior que 100 ou impar e menor que -100. ");
        printf("\n 3 -  Exemplo 0213 Ler um valor inteiro e dizer se pertence ao intervalo aberto (20:60). ");
        printf("\n 4 -  Exemplo 0214 Ler um valor inteiro e dizer se pertence ao intervalo fechado [20:60]. ");
        printf("\n 5 -  Exemplo 0215 Ler um valor inteiro e dizer se pertence aos intervalos fechados [25:45] ou [33:99], ou apenas a um deles. ");
        printf("\n 6 -  Exemplo 0216 Ler dois valores inteiros e dizer se o primeiro e impar e o segundo e par. ");
        printf("\n 7 -  Exemplo 0217 Ler dois valores inteiros e dizer se o primeiro e impar e positivo e o segundo e par e negativo. ");
        printf("\n 8 -  Exemplo 0218 Ler dois valores reais e dizer se o primeiro e maior, menor ou igual ao segundo. ");
        printf("\n 9 -  Exemplo 0219 Ler tres valores reais e dizer se o primeiro esta entre os outros dois, se esses forem diferentes entre si. ");
        printf("\n10 -  Exemplo 0220 Ler tres valores reais e dizer se o primeiro nao esta entres os outros dois e todos sao diferentes entre si. ");
        printf("\n11  -  Exemplo 02E1 Ler tres valores literais e dizer se o primeiro esta entre os outros dois, ou se e igual a um dos limites. ");
        printf("\n12   -  Exemplo 02E2 Ler tres valores literais e dizer se o primeiro esta fora do intervalo definido pelos outros dois, se esses forem diferentes entre si. ");
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
            printf("ERRO: Valor invalido.\n");
        }
    } while (x > 0 && x <= 12);

    return (0);
}