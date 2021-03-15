#include <stdio.h>
#include <string.h>
//#include <ncurses.h>

int main () {
  char username[11] = {"username"};
  char passwd[11] = {"1234567890"};
  char user[11];
  char pass[11];
//char ch;
//int i = 0;

  printf("Digite seu nome de usuário: ");
  scanf("%s",&user);

  if (strcmp(user, username)==0)
  {
    printf("Digite sua senha: ");
    scanf("%s",&pass);
/*  while(i < 10)
    {
      ch = getchar();
      pass[i]=ch;
      i++;
    }
    pass[i] = '\0';
*/
    if (strcmp(pass, passwd)==0)
    {
      printf("\nUsuário autenticado!\n");
    }
    else
    {
      printf("\nSenha incorreta!\n");
    }
  }
  else
  {
    printf("\nUsuário inválido!\n");
  }
  return(0);
}
