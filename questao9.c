# include<stdio.h>

int main(void){
 int mat[4], *p, x;

    p = mat + 1;//correto , p vai apontar para o segundo elemento do array
    p = mat++;//errado, não é permitido  incremenatar um array no c (nao é permitido mudar o endereço de memoria do array )
    p = ++mat;//errado, não é permitido  decrementar um array no c (nao é permitido mudar o endereço de memoria de um array )
    x = (*mat);//correto , equivale ao valor do primeiro elemento do array, x recebe mat[0]
}
//é permitido incrementar ponteiro porém não um array que tem um endereço fixo
