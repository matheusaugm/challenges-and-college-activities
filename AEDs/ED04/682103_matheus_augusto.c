
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// Aluno: Matheus Augusto Moreira
// Matricula: 682103




void method00(){
  
}
void method01(){
 
   char palavra[50];
     printf("Digite a palavra: ");
     scanf("%s", palavra);
      
   for (int i=0; i < strlen(palavra); i++)
   {
     if (palavra[i] >= 'a' && palavra[i] <= 'z')
     {
       printf("as letras minusculas sao: %c\n", palavra[i]);
     }//end if
     
     
   }//end for
   
    
}//end method01
void method02(){
char palavra[50];
int contador = 0;
     printf("Digite a palavra: ");
     scanf("%s", palavra);
      
   for (int i=0; i < strlen(palavra); i++)
   {
     if (palavra[i] >= 'a' && palavra[i] <= 'z')
     {
       printf("as letras minusculas sao: %c\n", palavra[i]);
       contador++;
     }//end if
   }//end for
     printf("Foram %i letras minusculas\n", contador);
}//end method02
void method03(){
  char palavra[50];
  int contador = 0;
     printf("Digite a palavra: ");
     scanf("%s", palavra);
      
   for (int i=strlen(palavra)-1; i >=0; i--)
   {
     if (palavra[i] >= 'a' && palavra[i] <= 'z')
     {
       printf("as letras minusculas sao: %c\n", palavra[i]);
       contador++;
     }//end if
     
     
   }//end for
     printf("Foram %i letras minusculas\n", contador);
}//end method03
void method04(){
  char palavra[50];
int contadorM = 0;
int contadorm= 0;
     printf("Digite a palavra: ");
     scanf("%s", palavra);
      
   for (int i=0; i < strlen(palavra); i++)
   {
     if (palavra[i] >= 'A' && palavra[i] <= 'Z')
     {
       printf("as letras maiusculas sao: %c\n", palavra[i]);
       contadorM++;
     }//end if
     else if(palavra[i] >= 'A' && palavra[i] <= 'Z')
     {
       printf("As letras minusculas sao %c\n", palavra[i]);
       contadorm++;
     }
     
   }//end for
     printf("Foram %i letras maiusculas\n", contadorM);
     printf("Foram %i letras minusculas\n", contadorm);
}//end method04
void method05(){
  char palavra[50];
  int contador = 0;

     printf("Digite a palavra: ");
     scanf("%s", palavra);
      
   for (int i=strlen(palavra)-1; i >=0; i--)
    {
      printf("Os digitos sao: %c\n",palavra[i]);
      contador++;
    }//end for
      printf("Foram %i digitos.\n", contador);
}//end method05
void method06(){
char palavra[50];
int contador = 0;
    printf("Digite os caracteres:");
    scanf("%s", palavra);
    for (int i = 0; i < strlen(palavra); i++)
    {
      if (!(palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= 'a' && palavra[i] <= 'z'|| palavra[i] >= '0' && palavra[i] <= '9'))
      {
      printf("Os caracteres especiais sao: %c\n", palavra[i]);
      contador++;
       }
          
    }
    printf("Foram %d caracteres especiais\n", contador);
    }//end method06
void method07(){
  int valor1 = 0; 
  int valor2 = 0; 
  int quantidade = 0; 
  int contador = 0;
  printf("Entrar com o maior valor para criar um intervalo: \n");
  scanf("%d", &valor1);
  printf("Entrar com o menor valor para criar um intervalo: \n");
  scanf("%d", &valor2);
  printf("Digite a quantidade de valores a serem adicionados: \n");
  scanf("%d", &quantidade);
 int valores[quantidade];
 if (valor1>valor2)
 {
   for (int i = 0; i < quantidade; i++)
 {
   printf("Digite um valor entre %d e %d\n", valor1, valor2);
   scanf("%d", &valores[i]);
   if (valores[i]>valor1 || valores[i]< valor2)
   {
    printf("Este valor nao esta dentro do invervalo. \n");
   i--;
   }// end if(for)
   
   else if(valores[i]%7==0)
   {
     printf("%d e multiplo de 7: \n", valores[i]);
     contador++;
   }//end else if
 }// end for
 printf("Foram %d numeros multiplos de 7.", contador);
 }//end if

}
void method08(){
  int valor1 = 0; 
  int valor2 = 0; 
  int quantidade = 0; 
  int contador = 0;
  printf("Entrar com o maior valor para criar um intervalo: \n");
  scanf("%d", &valor1);
  printf("Entrar com o menor valor para criar um intervalo: \n");
  scanf("%d", &valor2);
  printf("Digite a quantidade de valores a serem adicionados: \n");
  scanf("%d", &quantidade);
 int valores[quantidade];
 if (valor1>valor2)
 {
   for (int i = 0; i < quantidade; i++)
 {
   printf("Digite um valor entre %d e %d\n", valor1, valor2);
   scanf("%d", &valores[i]);
   if (valores[i]>valor1 || valores[i]< valor2)
   {
    printf("Este valor nao esta dentro do invervalo. \n");
   i--;
   }// end if(for)
   
   else if(valores[i]%3==0 && valores[i]%7!=0)
   {
     printf("%d e multiplo de 3 e nao e multiplo de 7. \n", valores[i]);
     contador++;
   }//end else if
 }// end for
 printf("Foram %d numeros multiplos de 3 que nao sao multiplos de 7.\n", contador);
 }//end if

}
void method09(){
  double valor1 = 0.0; 
  double valor2 = 0.0; 
  int quantidade = 0; 
  int contador = 0;
  printf("Entrar com o menor valor para criar um intervalo: \n");
  scanf("%lf", &valor1);
  printf("Entrar com o maior valor para criar um intervalo: \n");
  scanf("%lf", &valor2);
  printf("Digite a quantidade de valores a serem adicionados: \n");
  scanf("%d", &quantidade);
 double valores[quantidade];
 if (valor2>valor1)
 {
   for (int i = 0; i < quantidade; i++)
 {
   printf("Digite um valor entre %lf e %lf\n", valor1, valor2);
   scanf("%lf", &valores[i]);
   if (valores[i]>valor2 || valores[i]< valor1)
   {
    printf("Este valor nao esta dentro do invervalo. \n");
   i--;
   }// end if(for)
   
   else if((int)valores[i]%2!=0)
   {
     printf("%lf tem a parte inteira impar. \n", valores[i]);
     contador++;
   }//end else if
 }// end for
 printf("Foram %d numeros com partes inteira impar dentro do intervalo.\n", contador);
 }//end if
}
void method10(){
  double valor1 = 0.0; 
  double valor2 = 0.0; 
  double fracao = 0.0;
  int quantidade = 0; 
  int contador = 0;
  
  printf("Entrar com o maior valor maior que 0  e diferente de 0 para definir um intervalo: \n");
  scanf("%lf", &valor1);
  printf("Entrar com o menor valor menor que 1 e diferente  de 0 para definir um intervalo: \n");
  scanf("%lf", &valor2);
  printf("Digite a quantidade de valores a serem adicionados: \n");
  scanf("%d", &quantidade);
 double valores[quantidade];
 if (valor1>valor2 && valor1!=0 && valor1!=1 && valor2 != 0 && valor2!=1)
 {
   for (int i = 0; i < quantidade; i++)
 {
   printf("Digite um valor real: \n", valor1, valor2);
   scanf("%lf", &valores[i]);
   fracao=valores[i]-(int)valores[i];
   
   
   if(fracao<valor1 && fracao>valor2)
   {
     printf("%lf tem a fracionaria dentro do intervalo. \n", valores[i]);
     contador++;
   }//end else if
 }// end for
 printf("Foram %d numeros com a parte fracionaria dentro do intervalo.\n", contador);
 }//end if
 else
 {
   printf("Digite os valores conforme solicitado no enunciado. \n");
 }
 
}
void method11(){
 char palavra[50];
 int contador = 0;
    printf("Digite os caracteres:");
    scanf("%s", palavra);
    for (int i = 0; i < strlen(palavra); i++)
    {
      if (!(palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= 'a' && palavra[i] <= 'z'|| palavra[i] >= '0' && palavra[i] <= '9'))
      {
      printf("Os caracteres nao alfanumericos sao: %c\n", palavra[i]);
      contador++;
       }
          
    }
    printf("Foram %d caracteres especiais\n", contador);

}//end method11
void method12(){
 char palavra[50];
 int contador = 0;
     printf("Digite os caracteres:");
    scanf("%s", palavra);
    for (int i = 0; i < strlen(palavra); i++)
    {
      if (palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= 'a' && palavra[i] <= 'z')
      {
      printf("O arranjo possui pelo menos 1 letra.\n");
      i=strlen(palavra);
     
      }
      contador++;
    }
    if (contador==strlen(palavra))
    {
      printf("O arranjo possui apenas simbolos.\n");
    }
    
   
}
int main ( ) {
     int x = 0;
     do     {
        printf ( "\nED4 - Programa - v0.0\n" );
        printf ("Aluno: Matheus Augusto Moreira\n");
        printf ("Matricula: 682103\n");
        printf ( "Opcoes\n" );        
        printf ( "\n 0 -  Parar" );
        printf ( "\n 1 -  Exemplo 0411  " );
        printf ( "\n 2 -  Exemplo 0412  " );
        printf ( "\n 3 -  Exemplo 0413  " );
        printf ( "\n 4 -  Exemplo 0414 " );
        printf ( "\n 5 -  Exemplo 0415 " );
        printf ( "\n 6 -  Exemplo 0416 " );
        printf ( "\n 7 -  Exemplo 0417 " );
        printf ( "\n 8 -  Exemplo 0418 " );
        printf ( "\n 9 -  Exemplo 0419  " );
        printf ( "\n10 -  Exemplo 0420 " );
        printf ( "\n11 -  Exemplo 04E1 " );
         printf ( "\n12 -  Exemplo 04E2");
        printf ( "\n" );

        printf ( "\nEntrar com uma opcao: " );
        scanf("%d", &x);
            switch ( x )         {
                case 0:
                  method00( );
                  break;
                case 1:
                  method01( );
                  break;
                case 2:
                  method02 ( );
                  break;
                case 3:
                  method03 ( );
                break;
                case 4:
                 method04 ( );
                break;
                case 5:
                 method05 ( );
                break;
                case 6:
                 method06 ( );
                break;
                case 7:
                 method07 ( );
                break;
                case 8:
                 method08 ( );
                break;
                case 9:
                 method09 ( );
                break;
                case 10:
                 method10 ( );
                break;
                case 11:
                method11 ( );
                break;
                case 12:
                method12 ( );
                break;
                default:
                printf ( "\nERRO: Valor invalido." );    }
                     }    while ( x != 0 );

            
                return ( 0 );
}