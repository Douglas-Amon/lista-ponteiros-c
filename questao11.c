#include <stdio.h>
struct teste{
  int x = 3;
  char nome[] = "jose";//erro de sintaxe , não definiu o tamanho do array  e nao pode inicializar membros dentro da struct
};
main(){
  struct teste *   s;
  printf("%d", s->x);//s aponta para um x , mas o ponteiro não foi inicializado .Então não vai conseguir  apontar um endereço valido .
  printf("%s", s->nome);//mesmo raciocinio da linha acima
}


//correção
#include <stdio.h>
#include <string.h>
struct teste{
  int x ;
  char nome[10] ;
};
int main(){
  struct teste s;
  s.x = 3; //atribui 3 ao campo x (inteiro) da struct
  strcpy(s.nome,"josé"); //copia a string jose para o campo nome da struct

  printf("%d \n", s.x);
  printf("%s \n", s.nome);
}
