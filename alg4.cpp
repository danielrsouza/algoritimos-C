#include <stdio.h>

main(){
	
	int pessoas, quartos;
	float total;
	
	do{
		printf("Seja bem vindo ao nosso hotel.\n");
		printf("Nosso menu de quartos: \n");
		printf("1 - Suite: R$180,00 \n");
		printf("2 - Quarto de Luxo: R$150,00 \n");
		printf("3 - Quarto Conjulgado: R$130,00 \n");
		printf("4 - Quarto Standart: R$100,00 \n");
		printf("Digite o numero do quarto que desejas: \n");
		scanf("%i",&quartos);
		printf("Digite quantas pessoas vao ocupar o quarto.");
		scanf("%i",&pessoas);
		switch(quartos){
			case 1:
				total = pessoas * 180;
				printf("Observei aqui e vi que havera %i pessoas no quartos o valor da diaria e R$180,00. O total e de R$%f",pessoas, total);
				break;	
			case 2:
				total = pessoas * 150;
				printf("Observei aqui e vi que havera %i pessoas no quartos o valor da diaria e R$180,00. O total e de R$%f",pessoas, total);
				break;
			case 3:
				total = pessoas * 130;
				printf("Observei aqui e vi que havera %i pessoas no quartos o valor da diaria e R$180,00. O total e de R$%f",pessoas, total);
				break;
			case 4:
				total = pessoas * 100;
				printf("Observei aqui e vi que havera %i pessoas no quartos o valor da diaria e R$180,00. O total e de R$%f",pessoas, total);
				break;
			default:
				break;
				
		}
	}while(quartos == 0);
}
