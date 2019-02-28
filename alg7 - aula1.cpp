#include<stdio.h>

main(){
	float alturas, media;
	int contador, resposta;
	
	do{
		printf("Digite uma altura: ");
		scanf("%f",&alturas);
		contador++;
		alturas = alturas + alturas;
		printf("voce deseja digitar mais uma altura? 0 para sim e 1 para nao \n");
		scanf("%i",&resposta);
	}while(resposta != 1);
	
	media = alturas/contador;
	printf("A media de altura e %f",media);
}
