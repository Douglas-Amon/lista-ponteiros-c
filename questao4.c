#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor;
	int* p1;
	float temp;
	float* p2;
	char aux;
	char* nome = "Ponteiros";
	char* p3;
	int idade;
	int vetor[3];
	int* p4;
	int* p5;

	/* (a) */
	valor = 10;
	p1 = &valor;
	*p1 = 20;
	printf("%d \n", valor); // valor = 20. Apesar de valor = 10, após p1 receber o endereço de memória da variavel valor, a modificação é feita diretamente no conteudo de p1 (*p1) = 20.

	/* (b) */
	temp = 26.5;
	p2 = &temp;
	*p2 = 29.0;
	printf("%.1f \n", temp); // 29.0 . Da mesma forma da questão a, p2 aponta para o espaço da variável temp. A mudança do conteudo é feita utilizando o ponteiro p2.

	/* (c) */
	p3 = &nome[0];
	aux = *p3;
	printf("%c \n", aux); // P. O ponteiro p3 aponta para a posição 0 do endereço de memoria da varíavel nome, a qual funciona como um vetor. Dessa forma, aux recebe o valor armazenado
	// no espaço o qual *p3 aponta.

	/* (d) */
	p3 = &nome[4];
	aux = *p3;
	printf("%c \n", aux); // e. Da mesma forma da questão c, aux recebe o valor armazenado no endereço de memória o qual *p3 aponta.

	/* (e) */
	p3 = nome;
	printf("%c \n", *p3); // P. p3 aponta para o vetor de caracteres nome, logo, quando %c será usado para imprimir o primeiro char quando *p3 é desferenciado.

	/* (f) */
	p3 = p3 + 4;
	printf("%c \n", *p3); // e. Adicionando 4 inteiros a p3, será impresso o char na posição 4.

	/* (g) */
	p3--;
	printf("%c \n", *p3); // t. Da mesma forma, retirando 1, o char impresso será o da posição 3.

	/* (h) */
	vetor[0] = 31;
	vetor[1] = 45;
	vetor[2] = 27;
	p4 = vetor;
	idade = *p4;
	printf("%d \n", idade); // 31. Como p4 foi inicializado sem uma posição especificada em vetor, idade recebera a primeira posição (0) do vetor.

	/* (i) */
	p5 = p4 + 1;
	idade = *p5;
	printf("%d \n", idade); // 45. Nesse caso, p5 aponta para a posição 1 do vetor o qual p4 aponta. Logo, idade recebe o valor desrefenciado de vetor[1].

	/* (j) */
	p4 = p5+1;
	idade= *p4;
	printf("%d \n", idade); // 27. p5 aponta para vetor[1], somando 1, p4 então aponta para vetor[2].

	/* (l) */
	p4= p4-2;
	idade= *p4;
	printf("%d \n", idade); // 31. p4 apontava para vetor[2], após receber -2, aponta para vetor[0] novamente.

	/* (m) */
	p5= &vetor[2]-1;
	printf("%d \n", *p5); // 45. p5 aponta para a poição 2 do vetor, menos 4 bytes, o que resulta na posição 1.

	/* (n) */
	p5++;
	printf("%d \n", *p5); // 27. Após receber +1, p5 aponta a posição 2.

	return(0);
}
