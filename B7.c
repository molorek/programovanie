#include <stdio.h>

int main(){
	int pocet;
	float cislo;
	
	printf("Zadajte pocet cisel: ");
	scanf("%d", &pocet);
	
	for(int i = 0; i < pocet; i++){
		printf("Cislo: ");
		scanf("%f", &cislo);
		
		if (cislo <= 0){
			printf("%f patri do (-nekonecnost,0>\n", cislo);
		}else if (cislo > 0 && cislo <= 1){
			printf("%f patri do (0,1>\n", cislo);
		}else if (cislo > 1 && cislo <= 9){
			printf("%f patri do (1,9>\n", cislo);
		}else if (cislo > 9 && cislo <= 10){
			printf("%f patri do (9,10>\n", cislo);
		}else if (cislo > 10){
			printf("%f patri do (10,nekonecnost>\n", cislo);
		}
	}
	
	return 0;
}
