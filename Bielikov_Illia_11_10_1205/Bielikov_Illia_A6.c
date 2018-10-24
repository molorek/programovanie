/*
	Solution for "Find sum of all elements within borders" task
	Made in Dev C++

	Created by Illia Bielikov
	16.10.2018
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int a;
	int b;
	int c;
	int sum = 0;
	
	printf("Hranica 1 = ");
	scanf("%d", &a);
	
	printf("Hranica 2 = ");
	scanf("%d", &b);
	
	if (a > b){
		c = a;
		a = b;
		b = c;
	}
	
	for(int i = a; i <= b; i++){
		sum += i;
	}
	
	printf("Sucet = %d", sum);
	
	getch();
	return 0;
}
