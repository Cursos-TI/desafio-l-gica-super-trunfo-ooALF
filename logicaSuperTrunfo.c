#include <stdio.h>



int main() {


char cidade[20], cidade2[20]; //nome da cidade
char estado[20], estado2[20]; //primeira letra do estado
char codigo[20],codigo2[20];  // codigo da carta (EX A01, A02 )
int populacao, populacao2;  // população da cidade
int turistico, turistico2; // pontos turisticos da cidade
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
printf ("Super Poder: %.2f\n",superpoder2);

printf("\n");
//VENDEDOR 

if (populacao > populacao2)
{
   printf ("Carta 1 Venceu\n");
} else {printf ("Carta 2 Venceu\n");}
printf ("Carta 1 População:%.2d Habitantes\n",populacao);
printf ("Carta 2 População:%.2d Habitantes\n",populacao2);

    return 0;
}
