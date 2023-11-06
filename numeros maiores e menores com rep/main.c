#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int soma;
    int val=0;
    int valcomp=0;
    int maiorq=0;
    int menorq=0;
    double media;




    i=1;
    soma=0;
    media=0;

    do {
    printf("Digite o %d valor ",i);
    scanf("%d",&val);
    valcomp = val;
    soma = soma + val;

    if(val >= valcomp){
        maiorq = val;
    } else if(val < valcomp){
        menorq = val;
    }

    i++;

}while(i<=5);

    media = soma/5;

    printf("O maior valor digitado foi: %d \n",maiorq);
    printf("O menor valor digitado foi: %d \n",menorq);
    printf("A media dos valores eh igual a: %2.1f \n",media);

}
