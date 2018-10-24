/*
	Alternative solution for "Triangle inequality" task
	Made in Dev C++

	Created by Illia Bielikov
	16.10.2018
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int vysledok 	= 1;
	
	float dlzka[3];
	float sum 		= 0;
	float sum_of_2;
	
	
	for(int i = 0; i < 3; i++){
		printf("Cislo = ");
		scanf("%f", &dlzka[i]);
		
		(dlzka[i] < 0) ? dlzka[i] = -dlzka[i]: 1;
		sum += dlzka[i];
	}
		
	for(int i = 0; i < 3; i++){
		if (vysledok == 1){		
			sum_of_2 = sum-dlzka[i];
			if (sum_of_2 > dlzka[i]){
				sum_of_2 = 0;
			}else{
				vysledok = 0;
			}
		}
	}
	
	if (vysledok == 1){	
		printf("Plati trojuholnikova nerovnost' \n");
	}else{
		printf("Neplati trojuholnikova nerovnost' \n");
	}
	
	getch();
	return 0;
}
