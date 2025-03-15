#include <stdio.h>
int main(){
// população e pontos turisticos
int pop1, pop2, turis1, turis2;
// area em km² e pib
float area1, area2, pib1, pib2;
char cidade1[20];
char cidade2[20];
char estado1;
char estado2;
char codigo1[5];
char codigo2[5];

printf("Desafio cadastro de cartas no super trunfo.\n");
printf(" \n");
// inicio do codigo para coletar informaçoes da primeira carta.
printf("Vamos informar os dados da primeira carta:\n");

printf("Digite a letra do estado: \n");
scanf("%c", &estado1);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade1);

printf("Insira a populaçao: \n");
scanf("%d", &pop1);

printf("Insira a area em km²: \n");
scanf("%f", &area1);

printf("Insira o pib da cidade: \n");
scanf("%f", &pib1);

printf("Insira a quantidade de pontos turisticos: \n");
scanf("%d", &turis1);

printf(" \n");
// inicio do codigo para coletar as informaçoes da segunda carta
printf("Insira as informaçoes da segunda carta: \n");

printf("Digite a letra do estado: \n");
scanf(" %c", &estado2);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade2);

printf("Insira a populaçao: \n");
scanf("%d", &pop2);

printf("Insira a area em km²: \n");
scanf("%f", &area2);

printf("Insira o pib da cidade: \n");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turisticos: \n");
scanf("%d", &turis2);

printf(" \n");
//inicio da apresentação de ambas as cartas.
printf("Carta 1: \n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("População: %d\n", pop1);
printf("Area: %f km²\n", area1);
printf("PiB: %f Bilhões de Reais\n", pib1);
printf("Número de pontos Turísticos: %d\n", turis1);

printf(" \n"); 

printf("Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n", pop2);
printf("Area: %f km²\n", area2);
printf("PiB: %f Bilhões de Reais\n", pib2);
printf("Número de pontos Turísticos: %d\n", turis2);

}