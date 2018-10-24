/*
	Uloha B3
	Made in Dev C++

	Created by Illia Bielikov
	19.10.2018
*/

#include <stdio.h>

int main(){
	char h;
	char contProgram;
	
	do{
		printf("Zadajte hodnotu ");
		fflush(stdin);
		scanf("%c", &h);
		
		switch(h){
			case 'A':
			case 'a':
				printf("Vyborne \n");
			break;
			
			case 'B':
			case 'b':
				printf("Velmi dobre \n");
			break;
			
			case 'C':
			case 'c':
				printf("Dobre \n");
			break;
			
			case 'D':
			case 'd':
				printf("Uspokojivo \n");
			break;
			
			case 'E':
			case 'e':
				printf("Vyhovel \n");
			break;
			
			case 'X':
			case 'x':
				printf("Nevyhovel \n");
			break;
			
			default:
				printf("Nespravna hodnota! \n");
				contProgram = 't';
			break;
		}
		
		if (contProgram == 't'){
			contProgram = 'y';
		}else{
			printf("Prekracovat? Y/N \n");
			fflush(stdin);
			scanf("%c", &contProgram);
		}
	}while(contProgram == 'Y' || contProgram == 'y');
	
	return 0;
}
