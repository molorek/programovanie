/*
	Uloha B5
	Made in Dev C++

	Created by Illia Bielikov
	19.10.2018
*/

#include <stdio.h>

int main(){
	float a;
	char contProgram;
	
	do{
		printf("Zadajte cislo ");
		scanf("%f", &a);
		
		a < 0 ? a = -a : 1;
		
		printf("Absolutna hodnota cisla: %f \n", a);
		
		printf("Prekracovat? Y/N \n");
		fflush(stdin);
		scanf("%c", &contProgram);
	}while(contProgram == 'Y' || contProgram == 'y');
	
	return 0;
}
