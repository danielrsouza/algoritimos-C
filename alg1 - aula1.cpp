#include <stdio.h>


main(){
	float qtd;
	float preco;
	float valorPagar;
	
	printf("Digite o numero de maça que voce vai levar:  ");
	scanf("%f",&qtd);
	
	if(qtd >= 12){
		valorPagar = qtd * 0.25;
		printf("O total da sua conta eh: %f",valorPagar);
	}else{
		valorPagar = qtd * 0.30;
		printf("O total da sua conta eh: %f",valorPagar);
	}
}
