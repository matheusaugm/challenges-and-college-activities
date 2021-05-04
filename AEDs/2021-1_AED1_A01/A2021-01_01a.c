#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include<stdbool.h>
#define bool int
#define false 0
#define true (!false)

/*
  Funcao para determinar a casa de Hogwarts.
  Corvinal   [0.7:0.9]
  Grifin�ria [0.5:0.8]
  Lufa-Lufa  [0.2:0.5]
  Sonserina  [0.1:0.4]
 */
int Chapeu_Seletor(double x)
{
  if (x >= 0.1 && x < 0.2)
  {
    printf("\nEste aluno e da casa Sonserina.");
  }

  else if (x >= 0.2 && x < 0.5)
  {
    printf("\nEste aluno e da casa Lufa-Lufa.");
  }

  else if (x >= 0.5 && x < 0.7)
  {
    printf("\nEste aluno e da casa Griffinoria.");
  }
  else if (x >= 0.7 && x <= 0.9)
  {
    printf("\nEste aluno e da casa Corvinal.");
  }
  if (x < 0 || x > 0.9)
  {
    printf("\nVoce digitou uma indicacao errada.");
  }

  return (0);
}

/*
   Questao_01.

   Exemplos:
   0.85 -> Corvinal
   0.63 -> Grifin�ria
   0.39 -> Lufa-Lufa
   0.18 -> Sonserina
 */
void questao01(void)
{
  double x = 0.0;
  printf("\nQuestao_01\n");
  do
  {
    printf("\nDigite o valor da avaliacao, caso queira encerrar digite 0.\n");
    scanf("%lf", &x);
    getchar();
    Chapeu_Seletor(x);
  } while (x != 0);
}

/*
    Questao_02.

    Exemplos:
    // nao ha' exemplos
  */
void questao02(void)
{

  int controle = 0;
  int controleval = 0;
  int controlepos1 = 0;
  int controlepos2 = 0;
  int controlesqrt = 0;
  printf("\nQuestao_02\n");

  for (int i = 10000; i < 100000; i++)
  {
    if (i % 3 != 0)
    {
      controlepos1 = i / 1000;

      controlepos2 = i % 100;

      controlesqrt = controlepos1 + controlepos2;

      controleval = (controlepos1 * 100) + controlepos2;

      if (controlesqrt*controlesqrt == controleval)
      {
        controle++;
      }
      
    }
    
  }
  printf("\nForam %d numeros dentro dos paramentros solicitados pela questao.", controle);
  }

/*
   Funcao para contar vogais minusculas.
 */
int vogais_minusculas(char cadeia[])
{
  int contador = 0;
  for (int i = 0; i < strlen(cadeia); i++)
  {
    if (cadeia[i] == 'a' || cadeia[i] == 'e' || cadeia[i] == 'i' || cadeia[i] == 'o' || cadeia[i] == 'u')
    {
      contador++;
    }
  }
  return (contador);
}

/*
   Questao_03

   Exemplos:
   abacate ? abacaxi   : 4 = 4 => ""
   melao   ? melancia  : 3 < 4 => "melancia"
   banana  ? caju      : 3 > 2 => "banana"
 */
void questao03(void)
{
  char sx[80];
  char sy[80];
  int controle1 = 0;
  int controle2 = 0;
  printf("\nQuestao_03\n");
  printf("Digite a primeira string:\n ");
  scanf("%s", sx);
  printf("Digite a segunda string:\n ");
  scanf("%s", sy);
  controle1 = vogais_minusculas(sx);
  controle2 = vogais_minusculas(sy);
  if (controle1 > controle2)
  {
    printf("\nA string com maior numero de vogais minusculas foi %s", sx);
  }
  else if (controle1 < controle2)
  {
    printf("\nA string com maior numero de vogais minusculas foi %s", sy);
  }
  else if (controle1 == controle2)
  {
    printf("\nStrings com o mesmo valor de vogais minusculas");
  }
}

/*
  _____________________________________

  ATENCAO: O codigo abaixo contem,
           intencionalmente,
           comandos que NAO funcionam!
  _____________________________________

*/
bool f(int x, double y)
{
  double soma = 0.0;
  int k = 2, d = 1;
  while (2.0 - soma >= y)
  {
    soma = soma + 1.0 / d;
    d = d + k;
    k = k + 1.0;
    x = x - 1.0;
  }
  printf("\nLimite = %d", soma);
  return (2.0 - soma < y);
}

/*
    Questao_04.

    Exemplos:
    10->0.5 = true (CERTO)
    10->0.1 = true (ERRADO !!!)
    10->0.00001 = ??? (loop???)
  */
void questao04(void)
{
  int x = 0;
  double y = 0.0;
  printf("\nQuestao_04\n");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("\n%d -> %lf", x, y);

  // OBS.: REMOVER O COMENTARIO ABAIXO PARA TESTAR.

  printf(" = %d", f(x, y));
  //não entendi o que foi solicitado no código, o enunciado ficou um pouco confuso.
}

/*
   Acao principal
 */
int main(void)
{
  int option = 0;
  printf("A01 - 682103 - Matheus Augusto Moreira");
  do
  {
    printf("\n\eEscolha a questao\n");

    scanf("%d", &option);
    getchar();
    printf("option = %d", option);
    switch (option)
    {
    case 0:
      break;
    case 1:
      questao01();
      break;
    case 2:
      questao02();
      break;
    case 3:
      questao03();
      break;
    case 4:
      questao04();
      break;
    }
  } while (option != 0);
  return (0);
}

/*
     Testes e anotacoes
 */