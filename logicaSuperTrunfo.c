#include <stdio.h>


int main (){


char cidade[20], cidade2[20]; //nome da cidade
char estado[20], estado2[20]; //primeira letra do estado
char codigo[20],codigo2[20];  // codigo da carta (EX A01, A02 )
int populacao, populacao2;  // população da cidade
int turistico, turistico2; // pontos turisticos da cidade
int batalha;
float area,area2; // tamanho da cidade
float pib, pib2;  // pib
float divisao, divisao2;  // pib per capita
float areadiv, areadiv2;  // densidade populacional 
float deninverso, deninverso2; // densidade inverso
float superpoder, superpoder2; // poder da carta

// dados carta 1 do jogo

printf ("Primeira letra do Estado:\n");
scanf ("%s",&estado);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo);
printf ("Nome da Cidade:\n");
scanf ("%s",&cidade);
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
scanf ("%s",&estado2);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo2);
printf ("Nome da Cidade:\n");
scanf ("%s",&cidade2);
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
deninverso = 1/areadiv;
deninverso2 = 1/areadiv2;

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
printf ("            BATALHA              \n");
printf ("=================================\n");
printf ("\n");

printf ("Escolha o metodo de comparação\n");
printf ("1. População\n");
printf ("2. Área\n");
printf ("3. PIB\n");
printf ("4. Pontos turisticos\n");
printf ("5. Densidade demográfica\n");
scanf ("%d",&batalha);

//resultado da batalha
printf ("=================================\n");
printf ("           RESULTADO             \n");
printf ("=================================\n");

switch (batalha)
{
case 1:
   if (populacao > populacao2){

      printf ("%s venceu!!!\n",cidade);
      printf ("Metodo de comparação foi População\n");
      printf ("%s Contra %s\n",cidade,cidade2);
      printf ("A População de %s foi %d \n A População de %s foi %d",cidade,populacao,cidade2,populacao2);
   } 

   else if (populacao < populacao2){
      printf ("%s venceu!!!",cidade2);
      printf ("Metodo de comparação foi População");
      printf ("%s Contra %s",cidade,cidade2);
      printf ("A População de %s foi %d \n A População de %s foi %d\n",cidade2,populacao2,cidade,populacao);
   } else {printf("Tivemos um empate\n");}
   

   
   
   break;

   case 2:

   if (area > area2){

      printf ("%s venceu!!!\n",cidade);
      printf ("Metodo de comparação foi Area\n");
      printf ("%s Contra %s\n",cidade,cidade2);
      printf ("A area de %s foi %f \n A area de %s foi %f\n",cidade,area,cidade2,area2);
   } 

   else if (area < area2){
      printf ("%s venceu!!!\n",cidade2);
      printf ("Metodo de comparação foi Area\n");
      printf ("%s Contra %s\n",cidade2 ,cidade);
      printf ("A Area de %s foi %f \n A Area de %s foi %f\n",cidade2,area2,cidade,area);
   } else {printf("Tivemos um empate\n");}
   break;

   case 3:

   if (pib > pib2){

      printf ("%s venceu!!!\n",cidade);
      printf ("Metodo de comparação foi PIB\n");
      printf ("%s Contra %s\n",cidade,cidade2);
      printf ("O PIB de %s foi %f \n O PIB de %s foi %f\n",cidade,pib,cidade2,pib2);
   } 

   else if (pib < pib2){
      printf ("%s venceu!!!\n",cidade2);
      printf ("Metodo de comparação foi PIB\n");
      printf ("%s Contra %s\n",cidade2 ,cidade);
      printf ("O PIB de %s foi %f \n O PIB de %s foi %f\n",cidade2,pib2,cidade,pib);
   } else {printf("Tivemos um empate\n");}

   break;

   case 4:
  if (turistico > turistico2){

      printf ("%s venceu!!!\n",cidade);
      printf ("Metodo de comparação foi Pontos turisticos\n");
      printf ("%s Contra %s\n",cidade,cidade2);
      printf ("Os pontos turisticos de %s foi %d \n Os pontos turisticos de %s foi %d\n",cidade,turistico,cidade2,turistico2);
   } 

   else if (turistico < turistico2){
      printf ("%s venceu!!!\n",cidade2);
      printf ("Metodo de comparação foi Pontos turisticos\n");
      printf ("%s Contra %s\n",cidade2 ,cidade);
      printf ("Os pontos turisticos %s foi %d\n Os pontos turisticos %s foi %d\n",cidade2,turistico2,cidade,turistico);
   } else {printf("Tivemos um empate\n");}
   break;


   case 5:
   if (deninverso < deninverso2){

      printf ("%s venceu!!!\n",cidade);
      printf ("Metodo de comparação foi Pontos turisticos\n");
      printf ("%s Contra %s\n",cidade,cidade2);
      printf ("A Densidade Demográfica de %s foi %f \n A Densidade Demográfica de %s foi %f\n",cidade,deninverso,cidade2,deninverso2);
   } 

   else if (deninverso > deninverso2){
      printf ("%s venceu!!!\n",cidade2);
      printf ("Metodo de comparação foi Pontos turisticos\n");
      printf ("%s Contra %s\n",cidade2 ,cidade);
      printf ("A Densidade Demográfica de %s foi %f\n A Densidade Demográfica de %s foi %f\n",cidade2,deninverso2,cidade,deninverso);
   } else {printf("Tivemos um empate\n");}
   break;

default: ("  Opção invalida.\n");
   break;
}

return 0;
}
