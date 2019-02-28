#include<stdio.h>

main(){
	float n1, n2, n3, media;
	
	printf("Digite a nota 1: \n");
	scanf("%f",&n1);
	printf("Digite a nota 2: \n");
	scanf("%f",&n2);
	printf("Digite a nota 3: \n");
	scanf("%f",&n3);
	
	media = (n1+n2+n3)/3;
	printf("O resultado e: %f",media);
	if(media > 7){
		printf("voce foi aprovado.");
	}else{
		printf("voce foi reprovado.");
	}
}
