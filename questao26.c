#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
  x = x | b;
  //Realiza a operacao "OU" bit a bit, caso um dos bits seja 1 , ele retorna 1. Senao, retorna 0

  y = y ^ a;
  //Realiza a operacao "XOR" bit a bit, se os bits forem diferentes, retorna 1. Senao, retorna 0

  z = z & (a+b);
  //Realiza operacao bit a bit de AND,é quando os dois elementos são 1,retorna 1, se não retorna 0

  a = a >> 1; //desloca um bit a direita
  b = b << 1; //desloca um bit a esquerda
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}
//A saída é ´"15 13 0"
// 1° passada no while
//Nesse caso ocorre a operacao bit a bit de 10 (1010) e 1(0001) e retorna 11(1011)
//Nesse caso ocorre a operacao bit a bit de 10 (1010) e 1(0001) e retorna 11(1011)
//Nesse caso ocorre a operacao bit a bit de 11(binario(1011)) e 11(binario(1011)) e retorna 11(1011)
//Desloca a direita 1 bit. No caso 10(1010) retorna 5 (0101)
//Desloca b esquerda. No caso 1(0001) retorna 2(0010)

//2° passada no while
//OR -> 11(1011) | 2(0010) retorna 11(1011)
//XOR -> 11(1011) ^ 5(0101) retorna 14(1110)
//AND -> 11(1011) & 7(0111) retorna 3(0011)
//DESLOCA a -> retorna 2(0010)
//DESLOCA b -> retorna 4(0100)

//3° passada no while
//OR -> 11(1011) | 4(0100) retorna 15(1111)
//XOR -> 14(1110) ^ 2(0010) retorna 12(1100)
//AND -> 3(0011) & 6(0110) retorna 2(0010)
//DESLOCA a -> retorna 1(0001)
//DESLOCA b -> retorna 8(1000)

//4° passada no while
//OR -> 15(1111) | 8(1000) retorna 15(1111)
//XOR -> 12(1100) ^ 1(0001) retorna 13(1101)
//AND -> 2(0010) & 9(1001) retorna 0(0000)
//DESLOCA a -> retorna 0(0000)
//DESLOCA b -> retorna 16(10000)

//while termina (a=0) e x = 15, y=13, z = 0\
