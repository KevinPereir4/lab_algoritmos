#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 
 int selecao = 0;
 
 	printf("Selecione o exercicio que voce deseja (De 1 a 10)\n");
  scanf("%i",&selecao);

  
 switch(selecao){
  
  case 1:
   {
    carrega();
    ex1();
    break;
   }
   
  case 2:
   {
    carrega();
    ex2();
    break;
   }
  
  case 3:
   {
    carrega();
    ex3();
    break;
   }
   
  case 4:
   {
    carrega();
    ex4();
    break;
   }
   
  case 5:
   {
    carrega();
    ex5();
    break;
   }
   
  case 6:
   {
    carrega();
    ex6();
    break;
   }
   
  case 7:
   {
    carrega();
    ex7();
    break;
   }
   
  case 8:
   {
    carrega();
    ex8();
    break;
   }
   
  case 9:
   {
    carrega();
    ex9();
    break;
   }
   
  case 10:
   {
    carrega();
    ex10();
    break;
   }
   
  default:
   {
    printf("Tente novamente!");
				}
   }
 return 0;
}
