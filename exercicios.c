#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int portugues(){
 setlocale(LC_ALL,"Portuguese");
}

//-------------------------------------------------------------------------
int carrega(){   
   int i, j;
   system ("cls");
   printf ("\n\tCarregando: \n\n");          
   for (i = 0; i <= 100; i=i+5)
   {                
      printf ("\r  %d%%", i);      
      fflush (stdout);                      
      for (j = 0; j < i; j++)
      {
         if (!j) // Da espaco na barra pra nao enconstar na borda da tela
           printf ("");
           
         printf ("%c", 219);
         Sleep(5);
      }                      
   }     
   printf ("\n\n\tFinalizando... Aguarde...\n");
   Sleep (2000);
   printf ("\r \t\t\t\t Programa CARREGADO COM SUCESSO \n\n\n");   
   Sleep (1000);   system ("cls");
}

//-------------------------------------------------------------------------
int ex1() {
 
 portugues();
 
 float p1,p2,p3,media = 0.0;
 
 printf("Digite a nota da primeira prova: ");
  scanf("%f", &p1);
 
 printf("Digite a nota da segunda prova: ");
  scanf("%f", &p2);
 
 printf("Digite a nota da terceira prova: ");
  scanf("%f", &p3);
 
   media = (p1 + p2 + p3)/3;
 
 if(media >= 5){
  printf("A nota foi de %.2f, aluno aprovado", media);
 }else{
  printf("A nota foi de %.2f, aluno reprovado", media);
 }
 
	return 0;
}

//-----------------------------------------------------------------------
int ex2() {
 
 portugues();
 
 int nasc,atual,dias;
 
 printf("Digite o seu ano de nascimento: ");
  scanf("%i",&nasc);
 
 printf("Digite o ano atual: ");
  scanf("%i",&atual);
 
   dias = 365*(atual-nasc);
 
 printf("Voce já viveu %i dias", dias);
 
	return 0;
}

//-------------------------------------------------------------------------
int ex3() {
 
 portugues();
 
 float mensalidade,transp,alim;
    float mensal,anual;

    printf("\t.:CALCULO GASTO TOTAL FACULDADE:.\n");
    printf("Mensalidade: \tR$ ");
    scanf("%f",&mensalidade);    
    printf("Transporte: \tR$ ");
    scanf("%f",&transp);
    printf("Alimentacao:\t R$ ");
    scanf("%f",&alim);
    
    mensal = mensalidade + transp + alim;
    anual = mensal * 12;
    printf("Custo mensal: \tR$ %0.2f\nCusto anual:\tR$ %0.2f",mensal,anual);

	return 0;
}

//-------------------------------------------------------------------------
int ex4() {
 
 portugues();
 
 float r,pi = 3.14;
    
    printf("\t.:ÁREA DA CIRCUNFERÊNCIA:.");
    printf("\nRaio: ");
    scanf("%f",&r);
    
    float area = 2 * pi * r;
    printf("Área = %0.2f",area);
 
	return 0;
}

//-------------------------------------------------------------------------
int ex5() {
 
 portugues();
 
 float hAula = 25.00,bruto,liquido;    
    int qtdAula;
    
    printf("\t.:INFORMAÇÕES SALARIAIS:.\n");
    printf("Nº aulas semanais: ");
    scanf("%i",&qtdAula);
   
    // acrescimo de 10% (vales + plano sáude)
    float acresc = (qtdAula * hAula * 4) * 10/100;
    bruto = acresc + (qtdAula * hAula * 4);
    // decrescimo 5% + 7% (IR e INSS)
    float decresc = bruto * 12/100; 
    liquido = bruto - decresc;
    
    printf("Salário bruto:\t\tR$ %0.2f\nDescontos(IR/INSS):\tR$ %0.2f\nSalário líquido:\tR$ %0.2f",bruto,decresc,liquido);
 
	return 0;
}

//-------------------------------------------------------------------------
int ex6() {
 
 portugues();
 
 float C;
    
    printf(".:CONVERSOR TEMPERATURA:.\n");
    printf("Temperatura(°C): ");    
    scanf("%f",&C);
    
    float F = C * 1.8 + 32;
    
    printf("Temperatura(°F): %0.2f°F",F);
    
	return 0;
}

//-------------------------------------------------------------------------
int ex7() {
 
 portugues();
 
 float R,h,v;
    
    printf(".:VOLUME LATA DE ÓLEO:.\n");
    printf("Raio: ");
    scanf("%f",&R);    
    printf("Altura: ");
    scanf("%f",&h);
    
    v = 3.14 * h * (R*R);
    printf("VOLUME = %0.2f",v);
 
	return 0;
}

//-------------------------------------------------------------------------
int ex8() {
 
 portugues();
 
    float vp,tx,valor;
    int t;

    printf("\t.:PARCELA EM ATRASO:.\n");
    printf("Valor da prestação:\tR$ ");
    scanf("%f",&vp);
    printf("Valor da taxa:\t\tR$ ");
    scanf("%f",&tx);
    printf("Tempo de atraso:\tR$ ");
    scanf("%i",&t);

    valor = vp + (vp * (tx/100) * t);
    printf("Valor total:\tR$ %0.2f",valor);
 
	return 0;
}

//-------------------------------------------------------------------------
int ex9() {
 
 portugues();
 
 float r,d,e;
    
    printf("\t.:CONVERSÃO MONETÁRIA:.\n");    
    printf("Digite um valor(R$): ");
    scanf("%f",&r);
    printf("Cotação(Real para Dólar): $ ");
    scanf("%f",&d);
    printf("Cotação(Real para Euro): € "); 
    scanf("%f",&e);

    d = r * d;
    e = r * e;
    
    printf("Valor em dólar:\t$ %0.2f\nValor em Euro:\t€ %0.2f",d,e);
 
	return 0;
}

//-------------------------------------------------------------------------
int ex10() {
 
 portugues();
 
 int i;
 float atv[2],ead[2],av[2],pluri;

    printf("\t.:MEDIA FINAL LP:.\n");
    for(i = 0;i<2;i++){
        printf("Nota atividade(%iºsem):\t ",i+1);
        scanf("%f",&atv[i]);
        printf("Nota EAD(%iºsem):\t ",i+1);
        scanf("%f",&ead[i]);
        printf("Nota avaliação(%iºsem):\t ",i+1);
        scanf("%f",&av[i]);   
    }    
    printf("Nota pluridisciplinar:\t ");
    scanf("%f",&pluri);
    
    //Cálculo np1,np2 e média final.
    float np1 = (atv[0] + ead[0])*20/100 + av[0]*60/100;
    float np2 =(atv[1] + atv[1] + pluri)*20/100 + av[1]*40/100;
    float media = np1 * 40/100 + np2 * 60/100;
    
    printf("NP1: %0.1f\nNP2: %0.1f\nMF: %0.1f",np1,np2,media);
 
	return 0;
}


