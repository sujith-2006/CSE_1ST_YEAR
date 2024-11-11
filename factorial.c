#include<stdio.h>

int main(){
	int a, fct;
	fct = 1;
	printf("Enter the number for factorial : ");
	scanf("%d", &a);
	for (int i = 1; i<= a; i++){
		fct = fct * i;
	}
	printf("%d\n", fct);
	return 0;
}
