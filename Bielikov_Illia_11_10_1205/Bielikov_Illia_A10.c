/*
	Solution for "How many times number K is in the sequence of numbers?" task
	Made in Dev C++

	Created by Illia Bielikov
	16.10.2018
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int k;
	int input;
	int number_of_k = 0;
	
	printf("Cislo K = ");
	scanf("%d", &k);
	
	do{
		printf("Vpiste cislo. \n");
		scanf("%d", &input);
		
		if (input == k){
			number_of_k++;
		}
	}while(input != 0);

	printf("Cislo K sa nachadza %d krat v postupnosti cisiel", number_of_k);
	
	getch();
	return 0;
}
