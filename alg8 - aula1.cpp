#include<stdio.h>

main(){
	int n1, n2, operador, resultado;
	
	do{
		printf("Digite 1 numero inteiro: ");
		scanf("%i",&n1);
		printf("Digite 2 numero inteiro: ");
		scanf("%i",&n2);
		printf("O que voce deseja fazer: \n");
		printf("1 - somar \n");
		printf("2 - subtrair \n");
		printf("3 - multiplicar \n");
		printf("4 - dividir \n");
		printf("0 - sair \n");
		scanf("%i",&operador);
		
		switch(operador){
			case 1:
				resultado = n1+n2;
				printf("Resultado: %i \n",resultado);
				break;
			case 2:
				resultado = n1-n2;
				printf("Resultado: %i \n",resultado);
				break;
			case 3:
				resultado = n1*n2;
				printf("Resultado: %i \n",resultado);
				break;
			case 4:
				resultado = n1/n2;
				printf("Resultado: %i \n",resultado);
				break;
			case 0:
				break;
		}
		
	}while(operador != 0);
}
