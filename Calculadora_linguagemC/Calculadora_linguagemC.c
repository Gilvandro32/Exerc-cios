#include<stdio.h>
#include<math.h>


	int soma(float x, float y){
		float soma;
		
		soma = x + y;
		return soma;		
		}

	int subtrai (float x, float y){
		float sub;
		
		sub = x - y;
		return sub;		
		}
		
	int multiplica (float x, float y){
		float multi;
		
		multi = x * y;
		return multi;		
		}	
		
	int divide (float x, float y){
		float div;
		
		div = x / y;
		return div;		
		}	
	
	int main(void){
	float num1,num2,resultado;
	int operacao;
	
		printf("     ++++++++++++++++++++\n");
		printf("       Calculadora 2023 \n");
		printf("     ++++++++++++++++++++\n");
		
		
		printf("Deseja realizar qual operacao?: \n");
		printf("  Soma: (1)\n");
		printf("  Subtracao: (2)\n");
		printf("  Multiplicacao: (3)\n");
		printf("  Divisao: (4) \n");
		scanf("%d",&operacao);
		
		switch(operacao)
		{
		
		case 1 :
		printf("Digite o primeiro valor: \n");
		scanf("%f",&num1);
		
		printf("Digite o segundo valor: \n");
		scanf("%f",&num2);
		
		resultado=soma(num1,num2);
		
		printf("A soma eh: %f",resultado);
		
		break;
		}
		create database;
	}

