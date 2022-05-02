#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>

int main()

{

  setlocale(LC_ALL, "Portuguese");

  fflush(stdin); // limpa o buffer do teclado

  float mediaa1, ava1, ava2, faltou, a3, a4, media2, a1, a2, media3, media4, faltou2, faltou3, faltou4;

  char nome[50], matricula[5], disciplina[25];

  int tipo;

  printf("-------BEM-VINDO AO SISTEMA DO ALUNO-------\nDigite seu nome..:");

  gets(nome);

  printf("Olá %s, por favor digite sua matrícula..:", nome);

  gets(matricula);

  printf("\n----------SISTEMA DO ALUNO----------\n");

  printf("Digite o nome da disciplina..:");

  gets(disciplina);

  printf("------------------------------------\n1-Online\n2-A4\n3-A1/A2/A3\nEscolha o tipo de avaliacao..:");

  scanf("%d", & tipo);

  switch (tipo)

  {

  case 1:

    printf("---------DIGITE SUAS NOTAS---------------\n");

    printf("Digite sua nota AVA 1..:");

    scanf("%f", & ava1);

    printf("Digite sua nota AVA 2..:");

    scanf("%f", & ava2);

    mediaa1 = (ava1 * 0.4 + ava2 * 0.6);

    faltou = (mediaa1 - 6);

    faltou = (faltou * -1);

    if (mediaa1 >= 6)

    {

      printf("Situaçao: Aprovado!");

      printf(" A sua media foi: %.1f\n-------------------------------------------------", mediaa1);

      break;

    } else

      printf("\nSituaçao: Reprovado!");

    printf("\nFaltaram: %f pontos.\n", faltou);

    break;

  case 2:

    printf("-------------DIGITE SUAS NOTAS-------------------\n");

    printf("Digite sua nota A4..:");

    scanf("%f", & a4);

    media2 = a4;

    if (media2 >= 7)

    {

      printf("\nSituaçao: Aprovado!!");

      printf("\nA sua media foi: %.1f\n-------------------------------------------------", media2);

      break;

    } else

    {

      faltou2 = (media2 - 7);

      faltou2 = (faltou2 * -1);

      printf("Situaçao: Reprovado!");

      printf("\nFaltaram: %f pontos.\n", faltou2);

      break;

    }

    case 3:

      printf("-------------DIGITE SUAS NOTAS-------------------\n");

      printf("Digite sua nota A1..:");

      scanf("%f", & a1);

      printf("Digite sua nota A2..:");

      scanf("%f", & a2);

      media3 = (a1 + a2) / 2;

      faltou3 = (media3 - 6);

      faltou3 = (faltou3 * -1);

      faltou4 = (media4 - 6);

      faltou4 = (faltou4 * -1);

      if (media3 >= 6)

      {

        printf("\nSituacao: Aprovado!");

        printf("\nA sua media foi: %.1f\n-------------------------------------------------", media3);

        break;

      } else

      {

        printf("\nSituacao: Reprovado!");

        printf("\nCaso tenha feito A3, vamos substituir a nota da A2.");

        printf("\nDigite sua nota da prova A3: ");

        scanf("%f", & a3);

      }

      media4 = (a1 + a3) / 2;

      if (media4 >= 6)

      {

        printf("\nSua A3 substituiu a A2.");

        printf("\nSituacao:Aprovado!");

        printf("\nA sua media foi: %.1f\n-------------------------------------------------", media4);

      } else

      {

        printf("Situacao: Reprovado!");

        printf("\nFaltaram: %.1f pontos.\n", faltou4);

      }

      return 0;

  }

}