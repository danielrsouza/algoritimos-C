#include <stdio.h>


main(){
	int compras;
	int totalkg;
	float valorPagar;
	
	printf("Qual fruta voce vai levar: Digite 1 - Morango R$5, 2 - Maca R$3, 3 - Morango R$4, 4- Maca R$2\n");
	scanf("%d",&compras);
	printf("Quantos kg voce deseja levar?");
	scanf("%d",&totalkg);
	
	switch(compras){
	
		case 1:
		  if(totalkg < 5){
			valorPagar = totalkg * 5;
			printf("O preco a pagar eh %f",valorPagar);
		  }else{
			valorPagar = totalkg * 4;
			printf("O preco a pagar eh %f",valorPagar);
		  }
			break;
		case 2:
		  if(totalkg < 5){
			valorPagar = totalkg * 3;
			printf("O preco a pagar eh %f",valorPagar);
		  }else{
			valorPagar = totalkg * 2;
			printf("O preco a pagar eh %f",valorPagar);
		  }
			break;	
		case 3:
		  if(totalkg < 5){
			valorPagar = totalkg * 4;
			printf("O preco a pagar eh %f",valorPagar);
		  }else{
			valorPagar = totalkg * 3;
			printf("O preco a pagar eh %f",valorPagar);
		  }
			break;
		case 4:
		  if(totalkg < 5){
			valorPagar = totalkg * 2;
			printf("O preco a pagar eh %f",valorPagar);
		  }else{
			valorPagar = totalkg * 1;
			printf("O preco a pagar eh %f",valorPagar);
		  }
			break;
		
	}
 

}
