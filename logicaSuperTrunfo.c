#include <stdio.h>


int main (){


char cidade[20], cidade2[20]; //nome da cidade
char estado[20], estado2[20]; //primeira letra do estado
char criterio [20], criterio2[20]; // critério de comparação
char codigo[20],codigo2[20];  // codigo da carta (EX A01, A02 )
int populacao, populacao2;  // população da cidade
int valor1, valor2, valor3, valor4;
int turistico, turistico2; // pontos turisticos da cidade
int batalha, batalha2; // variavel para batalha
int resultado, resultado2; // resultado da batalha
float area,area2; // tamanho da cidade
float pib, pib2;  // pib
float divisao, divisao2;  // pib per capita
float areadiv, areadiv2;  // densidade populacional 
float deninverso, deninverso2; // densidade inverso
float superpoder, superpoder2; // poder da carta

// dados carta 1 do jogo

printf ("Primeira letra do Estado:\n");
scanf ("%s",estado);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo);
printf ("Nome da Cidade:\n");
scanf ("%s",cidade);
printf ("População da Cidade:\n");
scanf ("%d",&populacao);
printf ("Pontos Turisticos:\n");
scanf ("%d",&turistico);
printf ("Área em km²:\n");
scanf ("%f",&area);
printf ("Pib:\n");
scanf ("%f",&pib);



// dados carta do 2 do jogo

printf ("Primeira letra do Estado:\n");
scanf ("%s",estado2);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo2);
printf ("Nome da Cidade:\n");
scanf ("%s",cidade2);
printf ("População da Cidade:\n");
scanf ("%d",&populacao2);
printf ("Pontos Turisticos:\n");
scanf ("%d",&turistico2);
printf ("Área em km²:\n");
scanf ("%f",&area2);
printf ("Pib:\n");
scanf ("%f",&pib2);
printf ("\n");


//calculo carta 1 e 2 de pib per capita
divisao = (pib + area) / 2;
divisao2 = (pib2 + area2) / 2;

// calculo carta 1 e 2 densidade populacional 
areadiv = ( populacao + area) / 2;
areadiv2 = ( populacao2 + area2) / 2;


// calculo carta 1 e 2 densidade inverso 
deninverso = 1.0/areadiv;
deninverso2 = 1.0/areadiv2;

//calculo super poder
superpoder = populacao + area + pib + turistico + divisao + deninverso;
superpoder2 = populacao2 + area2 + pib2 + turistico2 + divisao2 + deninverso2;

//exibição carta 1
printf ("Carta 1:\n");
printf ("Estado: %s\n" ,estado);
printf ("Codigo: %s\n" ,codigo);
printf ("Cidade: %s\n" ,cidade);
printf ("População: %.2d Habitantes\n",populacao);
printf ("Area: %.2f km²\n",area);
printf ("Pib: %.2f\n bilhões\n",pib);
printf ("Pontos Turisticos: %d\n",turistico);
printf ("PIB per Capita %.3f \n",divisao);
printf ("Densidade populacional %.2f hab/km²\n",areadiv);
printf ("Densidade Demográfica %f.2\n",deninverso);
printf ("Super Poder: %.2f\n",superpoder);
printf ("\n");


//exibição carta 2
printf ("Carta 2:\n");
printf ("Estado:%s\n" ,estado2);
printf ("Codigo:%s\n" ,codigo2);
printf ("Cidade:%s\n" ,cidade2);
printf ("População:%.2d Habitantes\n",populacao2);
printf ("Area:%.2f km²\n",area2);
printf ("Pib:%.2f Bilhões\n",pib2);
printf ("Pontos Turisticos:%d\n",turistico2);
printf ("PIB per Capita %.2f  \n",divisao2);
printf ("Densidade populacional %.2f hab/km²\n",areadiv2);
printf ("Densidade Demográfica %f.2\n",deninverso2);
printf ("Super Poder: %.2f\n",superpoder2);

printf("\n");

//Batalha
printf ("=================================\n");
printf ("             ROUND 1             \n");
printf ("=================================\n");
printf ("\n");

printf ("Escolha o metodo de comparação\n");
printf ("1. População\n");
printf ("2. Área\n");
printf ("3. PIB\n");
printf ("4. Pontos turisticos\n");
printf ("5. Densidade demográfica\n");
scanf ("%d",&batalha);



switch (batalha)
{
   case 1:
    resultado = populacao > populacao2 ? 1 : 0;
    sprintf(criterio, "População");
    valor1 = populacao;
    valor2 = populacao2;
   break;


   case 2:
     resultado = area > area2 ? 1 : 0;
     sprintf(criterio,"Area");
     valor1 = area;
     valor2 = area2;
   break;
   

   case 3:
    resultado = pib > pib2 ? 1 : 0;
    sprintf(criterio,"PIB");
     valor1 = pib;
     valor2 = pib2;
   break;


   case 4:
    resultado = turistico > turistico2 ? 1 : 0 ;
    sprintf(criterio,"Pontos turisticos");
   valor1 = turistico;
   valor2 = turistico2;
   break;
  

   case 5:
     resultado = deninverso < deninverso2 ? 1 : 0;
     sprintf(criterio,"Densidade demográfica");
     valor1 = deninverso;
     valor2 = deninverso2;
   break;


default: ("  Opção invalida.\n");
   break;   
}



//Batalha 2
printf ("=================================\n");
printf ("             ROUND 2             \n");
printf ("=================================\n");
printf ("\n");

printf ("Escolha o metodo de comparação\n");
printf ("1. População\n");
printf ("2. Área\n");
printf ("3. PIB\n");
printf ("4. Pontos turisticos\n");
printf ("5. Densidade demográfica\n");
scanf ("%d",&batalha2);


if (batalha == batalha2)
{
   printf ("VOCÊ ESCOLHEU O MESMO METODO DE COMPARAÇÃO!!!!");
   
}  else { switch (batalha2)
{
   case 1:
     resultado2 = populacao > populacao2 ? 1 : 0 ;
     sprintf(criterio2,"População");
     valor3 = populacao;
     valor4 = populacao2;
   break;


   case 2:
     resultado2 = area > area2 ? 1 : 0;
     sprintf(criterio2,"Area");
     valor3 = area;
     valor4 = area2;
   break;
   

   case 3:
    resultado2 = pib > pib2 ? 1 : 0;
    sprintf(criterio2,"PIB");
    valor3 = pib;
    valor4 = pib2;
   break;


   case 4:
    resultado2 = turistico > turistico2 ? 1 : 0 ;
    sprintf(criterio2,"Pontos turisticos");
    valor3 = turistico;
    valor4 = turistico2;
   break;
  

   case 5:
     resultado2 = deninverso < deninverso2 ? 1 : 0;
     sprintf(criterio2,"Densidade demográfica");
      valor3 = deninverso; 
      valor4 = deninverso2;
   break;


default: ("  Opção invalida.\n");
   break;   
}
}




//resultado da batalha
printf ("=================================\n");
printf ("           RESULTADO  1          \n");
printf ("=================================\n");

 // RESULTADO DO PRIMEIRO CONFRONTO

 if (resultado == 1) {
 
   printf ("%s Venceu!!!\n",cidade);
   printf ("Metodo de comparação foi %s\n",criterio);
   printf ("%s Contra %s\n",cidade,cidade2);
   printf ("%s de %s foi %.2f \n Os %s de %s foi %d\n",criterio, cidade, valor1, criterio, cidade2, valor2);
  
 } else if (resultado == 0){

   printf ("%s Venceu!!!\n",cidade2);
   printf ("Metodo de comparação foi %s\n",criterio);
   printf ("%s Contra %s\n",cidade2,cidade);
   printf ("%s de %s foi %.2f \n Os %s de %s foi %d\n",criterio, cidade, valor1, criterio, cidade2, valor2);

 } else { printf ("EMPATE!!!\n");}
 
printf ("=================================\n");
printf ("           RESULTADO  2          \n");
printf ("=================================\n");



if (resultado2 == 1) {

   printf ("%s Venceu!!!\n",cidade);
   printf ("Metodo de comparação foi %s\n",criterio2);
   printf ("%s Contra %s\n",cidade,cidade2);
   printf ("%s de %s foi %.2f \n Os %s de %s foi %d\n",criterio2, cidade, valor3, criterio2, cidade2, valor4);
  
 } else if (resultado2 == 0)
 {
   printf ("%s Venceu!!!\n",cidade2);
   printf ("Metodo de comparação foi %s\n",criterio2);
   printf ("%s Contra %s\n",cidade,cidade2);
   printf ("%s de %s foi %.2f \n Os %s de %s foi %d\n",criterio2, cidade, valor3, criterio2, cidade2, valor4);
 } else {
   printf ("EMPATE!!!\n");
 }
 

if ((resultado == 1 && resultado2 == 0) || (resultado == 0 && resultado2 == 1)) {
   
   printf("=================================\n");
   printf("        EMPATE GERAL!            \n");
   printf("   Cada carta venceu um round.   \n"); 
   printf("=================================\n");

} else if (resultado == 1 && resultado2 == 1) {

    printf("=================================\n");
    printf("   %s VENCEU OS DOIS ROUNDS!   \n", cidade);
    printf("=================================\n");

} else if (resultado == 0 && resultado2 == 0) {

    printf("=================================\n");
    printf("   %s VENCEU OS DOIS ROUNDS!   \n", cidade2);
    printf("=================================\n");
  
}
return 0;
}