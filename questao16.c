#include <stdio.h>
#include <stdlib.h>

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value; //Válido, a posição 2 do array aloha recebe um numero do tipo float 2.2
scanf("%f", &aloha); //Inválido, apesar de executavel, esta definindo um ponteiro para o primeiro elemento do array aloha do tipo float, o correto é &aloha[0]
aloha = "value"; //Inválido, uma variavel float nao pode receber uma variavel do tipo char (string)
printf("%f", aloha); //Inválido, aloha é um array e não um valor float
coisas[4][4] = aloha[3]; //Válido, o valor de aloha[3] é atribuida na posição linha 4 e coluna 4 da matriz
coisas[5] = aloha; //Inválido, erro de compatibilidade, são tipos diferentes os arrays, o array coisas é bidimensional e o array aloha é unidimensional
pf = value; //Inválido, value é um float e pf é um ponteiro para float. Deveria ser &value
pf = aloha; //Válido, pf recebe o endereço de memória da posição 0 do array aloha
