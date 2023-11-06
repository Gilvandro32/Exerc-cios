#include <stdio.h>
#include <stdlib.h>


int main(){
	float metro;
	float medida_cm;
	float medida_mm;

    /* Criei um cabeçalho para malhorar a apresentação do programa */
	printf("*******************************\n");
	printf("Conversor de medidas em metro \n");
	printf("*******************************\n");
    /*O programa recebe o valor em metros a ser convertido */
	printf("Digite o valor a ser convertido: ");
	scanf("%f",&metro);
    /*O programa converterá o valor */
	medida_cm = metro * 100;
	medida_mm = metro * 1000;
    /*O programa mostrará os valores convertidos */
	printf("\n O valor em centimetros eh: %2f", medida_cm);
	printf("\n O valor em milimetros eh: %2f", medida_mm);
    return 0;


}
